# FROZEN: do not edit this tree

This `com.solvitaire.solitaire` tree is **legacy** (frozen 2026-11-15). Don't fix compile errors here.

- It came from a **text find-and-replace** rename (`a → AboutDialog`, `x → xHandler`, …) that also rewrote fields, methods, locals and **string literals**.
- `WinUser32` was moved out of `com.solvitaire.app`, which breaks JNI linkage.
- The API thread is disabled in `Main.java`, and `GameStats` methods are stubbed.
- The obfuscation (case-only class names, keyword class names, duplicate field names) can't be fixed at the source level.

Use this tree **only as a source of readable class names** for `mappings/solvitaire.mapping`.

The current plan is **[docs/RECONSTRUCTION_PLAN.md](../../../../docs/RECONSTRUCTION_PLAN.md)**: golden API test → bytecode remap → Vineflower/CFR decompile into `java_source_v2/` → per-class compile → full build that matches the golden output.
