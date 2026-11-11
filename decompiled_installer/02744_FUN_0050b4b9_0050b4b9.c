// Function: FUN_0050b4b9
// Entry: 0050b4b9
// Size: 37 bytes
// Thunk: false
// External: false


void __fastcall FUN_0050b4b9(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)param_1[1]; puVar1 = puVar1 + 1) {
    FUN_004247be((LPVOID)*puVar1);
  }
  FUN_004247be((LPVOID)*param_1);
  return;
}


