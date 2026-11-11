// Function: FUN_0045568c
// Entry: 0045568c
// Size: 156 bytes
// Thunk: false
// External: false


void __fastcall FUN_0045568c(undefined4 *param_1)

{
  int *piVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  undefined4 local_464;
  __uint64 local_460 [7];
  undefined1 local_424 [1044];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar3 = FUN_004859a6(pFVar2);
  local_464 = *(undefined4 *)*param_1;
  FUN_00454935(local_460,&local_464,*(undefined4 *)param_1[2],((undefined4 *)param_1[2])[1],
               *(undefined4 *)param_1[3],param_1[1],*(undefined4 *)param_1[4]);
  local_10 = 0;
  FUN_00454adb(local_460);
  FUN_00454514((int)local_424);
  FUN_00485a8f((char)uVar3,pFVar2,piVar1);
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


