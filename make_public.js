const fs = require('fs');
const path = require('path');
const root = 'java_source/com/solvitaire/solitaire';

let files = [];
function walk(dir) {
  for (const e of fs.readdirSync(dir, {withFileTypes: true})) {
    const p = path.join(dir, e.name);
    if (e.isDirectory()) walk(p);
    else if (e.name.endsWith('.java')) files.push(p);
  }
}
walk(root);

function stripCommentsAndStrings(code) {
  let out = '', i = 0, n = code.length;
  while (i < n) {
    const c = code[i];
    if (c === '/' && i + 1 < n && code[i + 1] === '/') {
      while (i < n && code[i] !== '\n') i++;
    } else if (c === '/' && i + 1 < n && code[i + 1] === '*') {
      i += 2; while (i + 1 < n && !(code[i] === '*' && code[i + 1] === '/')) i++; i += 2;
    } else if (c === '"') {
      i++; while (i < n && code[i] !== '"') { if (code[i] === '\\\\') i++; i++; } i++;
    } else if (c === "'") {
      i++; while (i < n && code[i] !== "'") { if (code[i] === '\\\\') i++; i++; } i++;
    } else { out += c; i++; }
  }
  return out;
}

const accessMods = new Set(['public', 'private', 'protected']);
const skipKw = new Set(['if','else','for','while','do','switch','case','return','throw','try','catch','finally','assert','break','continue','class','interface','enum','import','package','extends','implements','throws','instanceof','new','super','this','void','boolean','byte','char','short','int','long','float','double','true','false','null','var','static','final','abstract','synchronized','native','strictfp','transient','volatile','default']);

let totalChanged = 0, totalEdits = 0;

for (const f of files) {
  let content = fs.readFileSync(f, 'utf8');
  let lines = content.split('\n');
  let stripped = stripCommentsAndStrings(content).split('\n');
  let depth = 0;
  let changed = false;

  for (let i = 0; i < lines.length; i++) {
    let line = lines[i];
    let trimmed = line.trimStart();
    if (!trimmed) {
      let s = stripped[i] || '';
      depth += (s.match(/\{/g) || []).length - (s.match(/\}/g) || []).length;
      continue;
    }
    if (trimmed.startsWith('//') || trimmed.startsWith('/*') || trimmed.startsWith('*') ||
        trimmed.startsWith('package') || trimmed.startsWith('import') || trimmed.startsWith('@')) {
      let s = stripped[i] || '';
      depth += (s.match(/\{/g) || []).length - (s.match(/\}/g) || []).length;
      continue;
    }

    let clean = trimmed.replace(/\/\/.*$/, '').trim();
    if (!clean) continue;

    let open = (clean.match(/\{/g) || []).length;
    let close = (clean.match(/\}/g) || []).length;
    let atClassLevel = (depth <= 1);

    // Strip annotations
    let cleanNoAnn = clean;
    while (cleanNoAnn.startsWith('@')) {
      let end = cleanNoAnn.indexOf(' ');
      if (end < 0) break;
      cleanNoAnn = cleanNoAnn.substring(end + 1).trimStart();
    }
    let first = cleanNoAnn.split(/\s+/)[0];
    let hasAccessMod = accessMods.has(first);

    let addPublic = false;

    if (atClassLevel && !hasAccessMod) {
      // Method/constructor declaration: contains ( and ends with { or ;
      if (depth === 1 && clean.includes('(') && (clean.endsWith('{') || clean.endsWith(';'))) {
        let beforeParen = clean.substring(0, clean.indexOf('('));
        let tokens = beforeParen.trim().split(/\s+/);
        if (tokens.length >= 1) {
          let last = tokens[tokens.length - 1];
          if (!skipKw.has(last) && /^[A-Za-z_]\w*$/.test(last)) {
            addPublic = true;
          }
        }
      }
      // Field declaration: ends with ;, no ( or { or }
      else if (depth === 1 && clean.endsWith(';') && !clean.includes('(') && !clean.includes('{') && !clean.includes('}')) {
        let beforeSemi = clean.substring(0, clean.lastIndexOf(';')).trim();
        let typePart = beforeSemi.replace(/\[\]/g, '');
        let tokens = typePart.split(/\s+/);
        if (tokens.length >= 2) {
          let last = tokens[tokens.length - 1];
          let typeTok = tokens[tokens.length - 2];
          if (!skipKw.has(last) && !skipKw.has(typeTok) &&
              /^[A-Za-z_]\w*$/.test(last) && /^[A-Za-z_]\w*$/.test(typeTok)) {
            addPublic = true;
          }
        }
      }
    }

    if (addPublic) {
      let m = line.match(/^(\s*)/);
      if (m) {
        lines[i] = m[1] + 'public ' + line.substring(m[1].length);
        changed = true;
        totalEdits++;
      }
    }

    depth += open - close;
  }

  if (changed) {
    fs.writeFileSync(f, lines.join('\n'));
    totalChanged++;
  }
}

console.log('Changed files:', totalChanged, 'of', files.length, 'Total edits:', totalEdits);
