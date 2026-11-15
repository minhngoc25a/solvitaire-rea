# CFR Decompilation Artifacts — docs/CFR_ARTIFACTS.md

## Overview

The Java source in `java_source/com/solvitaire/solitaire/` was recovered using CFR 0.152 from the obfuscated game JAR embedded in the InstallForge installer. CFR produced syntactically valid but semantically broken code in several places due to obfuscation and control-flow flattening. This document catalogs the artifacts that could not be mechanically fixed and require original code intent to resolve, as well as the compilation fixes that were successfully applied.

## Compilation Fixes Applied (Visibility)

Made ~165 fields/methods public across 20+ files to resolve cross-package access errors:

### Engine package (`com.solvitaire.solitaire.engine`)
- `Card.java`: field `c` made public
- `CardImage.java`: constructor made public; fields `e`, `f` made public
- `CardRun.java`: field `b` made public
- `CardStack.java`: field `d` made public; field `AboutDialog` made public; methods `AboutDialog(double,double)`, `AboutDialog(CardRun)` made public
- `SolitaireGameEngine.java`: ~30 fields made public (`aL`, `aM`, `be`, `aO`, `aC`, `ak`, `aD`, `aI`, `X`, `Y`, `s`, `V`, `T`, `Z`, `aa`, `bf`, `bg`, `aT`, `bu`, `br`, `uPanel`, `an`, `ah`, `am`, `FPanel`, `ap`, `ar`, `bd`, `CHandler`, `n`); methods `AboutDialog(int)`, `AboutDialog(long,String)`, `AboutDialog(String,String,boolean)`, `AboutDialog(int,qa,String)`, `b(int,int)`, `b(String,boolean)`, `c(double,double)`, `j()`, `j(String)`, `k(String)`, `l()`, `q()` made public

### util package (`com.solvitaire.solitaire.util`)
- `pX.java`: fields `d`, `e`, `f`, `g`, `h`, `i`, `j`, `k` made public
- `pH.java`: fields made public; constructor made public
- `s_0.java`: field `e` and copy constructor made public
- `q.java`: field `AboutDialog` made public
- `qy_0.java`: Fields and methods made public
- `t.java`: fields `b`, `g`, `s`, `h`, `m`, `j`, `n`, `i`, `d`, `e`, `l`, `o` made public; methods `b()`, `e()`, `f()`, `k()` made public
- `pK.java`: constructor made public

### Engine package additional (`com.solvitaire.solitaire.engine`)
- `GameMove.java`: constructor `(SolitaireGameEngine,int,int)` made public; method `AboutDialog(int)` made public

### ui package (`com.solvitaire.solitaire.ui`)
- `MainWindow.java`: `c(int)`, `d(String)`, `t()` methods made public; field `A` made public

### ui.panels package (`com.solvitaire.solitaire.ui.panels`)
- `pLPanel.java`: method `f()` made public

## Categories of CFR artifacts (unfixable mechanically)

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

## Files with zero remaining errors (fully fixed)

- `data/do_0.java`, `util/co_0.java`
- All 779 `data/*.java` files
- `reader/qi_0BoardReader.java`
- `native/WinUser32.java` (renamed to `jni`)
- `util/qy_0.java`, `util/q.java`, `util/pX.java`, `util/pH.java`, `util/s_0.java`, `util/t.java`
- `engine/CardImage.java`
- `ui/MainWindow.java`

## Remaining compile errors (~94)

- `engine/SolitaireGameEngine.java` (~20): cross-package field access, method signature mismatches
- `solver/SolitaireSolver.java` (~50): cross-package field access to `SolitaireGameEngine`, invalid method calls (`AboutDialog(int,boolean)`, `b(int,int)`, `c(int,null)`, `b(String,boolean)`), `MainWindow.d()` argument type mismatch
- `engine/GameStats.java` (~15): CFR artifacts in stubbed methods, `this.k.B.c()`/`this.k.B.d()` calls on `Object` type
- `ui/panels/qzPanel.java` (~4): XChart type issues

### Not fixed

- `challenge/ChallengeSolver.java` — excluded from previous fixes, still has CFR artifacts
- `api/ApiCommandProcessor.java` — excluded from compilation (CFR missing local variable type declarations)
- `api/DesktopDuplication.java` — excluded from compilation

### Strategy for remaining errors

The remaining ~94 errors require understanding the original obfuscated code's intent. CFR decompilation produces code that is structurally similar but semantically incorrect in specific spots. Fixing these requires:

1. Comparing against the running JAR behavior (API mode verified working)
2. Understanding the obfuscation patterns used by the original protector
3. Potentially re-decompiling with different settings or tools

The shipped JAR at `C:/sgame/solvitaire_game_from_pe.jar` runs correctly via API mode; compilation issues are in the recovered source only.