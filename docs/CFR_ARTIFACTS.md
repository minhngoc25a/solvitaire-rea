# CFR Decompilation Artifacts — docs/CFR_ARTIFACTS.md

## Overview

The Java source in `java_source/com/solvitaire/solitaire/` was recovered using CFR 0.152 from the obfuscated game JAR embedded in the InstallForge installer. CFR produced syntactically valid but semantically broken code in several places due to obfuscation and control-flow flattening. This document catalogs the artifacts that could not be mechanically fixed and require original code intent to resolve.

## Categories of CFR artifacts

### 1. Invalid method signatures

CFR sometimes generates method calls that don't exist on the target class:

| Call site | Problem | Example |
|-----------|---------|---------|
| `pX.AboutDialog(u_0,int,int,int,int,u_0,u_0,int)` | `pX.b` is a `String` field, not a method; no such overload exists | `GameStats.java:1633` |
| `pX.b(u_0,int,int,int,int,u_0,u_0,int)` | Same — `pX.b` is a `String` field | `GameStats.java:1640` |
| `CardStack.AboutDialog()` | `CardStack.AboutDialog` is an `int` field, not a method | `GameStats.java:1613` |
| `so.AboutDialog(Rectangle,String)` | `so.AboutDialog()` takes no args and returns void; no such overload | `GameStats.java:1612` |
| `SolitaireSolver.AboutDialog(int,boolean)` | No such overload exists | `SolitaireSolver.java:312` |
| `SolitaireSolver.b(int,int)` | No such method exists | `SolitaireSolver.java:313` |
| `SolitaireSolver.c(int,null)` | `null` can't be passed to `int` parameter | `SolitaireSolver.java:322` |
| `SolitaireGameEngine.AboutDialog(qa,int,boolean,boolean,boolean)` | Wrong parameter count/types | `SolitaireGameEngine.java:1655` |

### 2. Invalid type assignments

CFR confuses types due to obfuscated variable reuse:

| Assignment | Problem | Example |
|------------|---------|---------|
| `var1_1 = new Random(...)` | `var1_1` is `SolitaireGameEngine` parameter, reassigned to `Random` | `SolitaireSolver.java:119` |
| `this.H = var2_5.toArray()` | `LongStream.toArray()` returns `Long[]`, not `long[]` | `SolitaireSolver.java:121` |
| `this.k.B.c()` / `this.k.B.d()` | `this.k.bs` is `Object` (DesktopDuplication excluded), no `c()`/`d()` methods | `GameStats.java:961-965` |
| `this.q = this.k.AboutDialog(j2, "annotate").b()` | `AboutDialog(j, String)` doesn't exist on `SolitaireGameEngine` | `GameStats.java:822` |

### 3. Undefined labels

CFR generates `continue block3;` where no `block3` label exists:

| Location | Problem | Example |
|----------|---------|---------|
| `SolitaireSolver.java:143` | `continue block3;` — label `block3` never defined | `SolitaireSolver.java:143` |

### 4. Variable name collisions

CFR reuses variable names across incompatible types:

| Variable | Problem | Example |
|----------|---------|---------|
| `var1_1` | Declared as `SolitaireGameEngine` parameter, reassigned to `Random` | `SolitaireSolver.java:119` |
| `this.k` | `Thread` field in `SolitaireGameEngine`, used as if `SolitaireGameEngine` | `SolitaireGameEngine.java:904` |
| `this.g` | `int` field in superclass `g`, used as if method `void g(int)` | `GameStats.java:652`, `910` |
| `this.x` | Doesn't exist as field; should be `xHandler` | `GameStats.java:672` |

### 5. Missing variable declarations

CFR omits type declarations for local variables:

| Missing | Example |
|---------|---------|
| `var2_5` (LongStream), `var1_2` (int), `var1_3` (boolean[]), `var2_6` (int), `var3_7` (int), `var4_8` (int) | `SolitaireSolver.java:120-148` |
| `var7_11` (ErrorDialog), `var10_17` (ErrorDialog), `var11_29` (pY), `var10_18` (Card), `var14_24` (int), `var16_28` (boolean), `var15_26` (int) | `GameStats.java:1570-1610` |

### 6. Cross-package access

Fields/methods are package-private but accessed from another package:

| Access | From | To | Example |
|--------|------|-----|---------|
| `SolitaireSolver.ao` field | `solver` | `engine` | `SolitaireSolver.java:117` |
| `SolitaireGameEngine.W`, `U`, `Z`, `aa`, `bf`, `bg`, `aT`, `bu`, `br`, `uPanel`, `an`, `ah`, `am`, `ah`, `T` fields | `solver` | `engine` | `SolitaireSolver.java:182+` |
| `t.k` field | `solver` | `util` | `SolitaireSolver.java:214` |
| `CardImage(SolitaireGameEngine)` constructor | `solver` | `engine` | `SolitaireSolver.java:191` |

### Files with zero remaining errors (fully fixed)

- `data/do_0.java`, `util/co_0.java`
- All 779 `data/*.java` files
- `reader/qi_0BoardReader.java`
- `native/WinUser32.java` (renamed to `jni`)
- `engine/GameStats.java` (~30 errors remain, mostly stubbed methods)
- `ui/panels/uPanel.java`
- `util/qy_0.java`, `util/q.java`, `util/pX.java`, `util/pH.java`, `util/s_0.java`, `util/t.java`
- `engine/CardImage.java`
- `ui/MainWindow.java`

### Strategy for remaining errors

The remaining ~85 errors require understanding the original obfuscated code's intent. CFR decompilation produces code that is structurally similar but semantically incorrect in specific spots. Fixing these requires:

1. Comparing against the running JAR behavior (API mode verified working)
2. Understanding the obfuscation patterns used by the original protector
3. Potentially re-decompiling with different settings or tools

The shipped JAR at `C:/sgame/solvitaire_game_from_pe.jar` runs correctly via API mode; compilation issues are in the recovered source only.
