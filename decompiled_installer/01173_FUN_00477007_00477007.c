// Function: FUN_00477007
// Entry: 00477007
// Size: 76 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00477007(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xd0d0d0d1;
  if ((((param_1 != (HWND)0x0) && (uVar2 = FUN_0047717b(param_1), uVar2 != 0)) &&
      (iVar3 = FUN_004773b8(param_1), iVar3 != -1)) &&
     (pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 8), pcVar1 != (code *)0x0)) {
    uVar4 = (*pcVar1)(uVar2,param_2,param_3,param_4,param_5);
  }
  return uVar4;
}


