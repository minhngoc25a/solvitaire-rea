// Function: FUN_004aa200
// Entry: 004aa200
// Size: 247 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004aa200(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (*(LPVOID *)(param_1 + 0x290) != (LPVOID)0x0) {
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x290));
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  puVar2 = (uint *)0x0;
  uVar1 = *(uint *)(param_1 + 0x284);
  uVar3 = 0xffffffff;
  if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
    uVar3 = uVar1;
  }
  if (param_2 <= uVar3) {
    *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_1 + 0x11f);
    *(undefined1 *)(param_1 + 0x289) = *(undefined1 *)(param_1 + 0x11e);
    *(undefined1 *)(param_1 + 0x28a) = *(undefined1 *)(param_1 + 0x11d);
    *(undefined1 *)(param_1 + 0x28b) = *(undefined1 *)(param_1 + 0x11c);
    *(undefined1 *)(param_1 + 0x28c) = 0;
    *(uint *)(param_1 + 0x294) = param_2;
    *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_1 + 0x74);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x290) = 0;
      goto LAB_004aa2e2;
    }
    puVar2 = (uint *)FUN_004a4890(param_1,param_2);
    *(uint **)(param_1 + 0x290) = puVar2;
  }
  if (param_2 != 0) {
    if (puVar2 == (uint *)0x0) {
      FUN_004a5f90(param_1,param_2);
      FUN_0046f3d0(param_1,0x5247ac);
      return 0;
    }
    FUN_00474230(param_1);
    FUN_0046bd70(param_1,puVar2,param_2);
  }
LAB_004aa2e2:
  FUN_004a5f90(param_1,0);
  return 1;
}


