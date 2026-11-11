// Function: FUN_00468ec0
// Entry: 00468ec0
// Size: 319 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00468ec0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1;
  iVar1 = *(int *)(param_1 + 0xa4);
  uVar4 = FUN_004685b0(param_1,8,0);
  if (-1 < (int)uVar4) {
    if ((1 < *(uint *)(iVar1 + 0x18)) && (*param_2 != 0)) {
      uVar4 = FUN_004685b0(uVar5,0xd,0);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = FUN_004685b0(uVar5,*(uint *)(iVar1 + 0x18),0);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = FUN_004685b0(uVar5,9,0);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      for (iVar2 = *(int *)(iVar1 + 0xf0b4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0 && *(int *)(iVar3 + 0x1c) == 0)) break;
        uVar4 = FUN_004685b0(uVar5,*(uint *)(iVar2 + 0x18),*(uint *)(iVar2 + 0x1c));
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
    }
    uVar4 = FUN_004685b0(uVar5,10,0);
    if ((-1 < (int)uVar4) && (uVar4 = FUN_004685b0(uVar5,1,0), -1 < (int)uVar4)) {
      for (iVar1 = *(int *)(iVar1 + 0xf0b4);
          (iVar1 != 0 && (*(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0));
          iVar1 = *(int *)(iVar1 + 0xc)) {
        param_1 = *(uint *)(iVar1 + 0x5c);
        uVar4 = FUN_00467a30(uVar5,&param_1,4,1);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
      uVar5 = FUN_004685b0(uVar5,0,0);
      uVar4 = 0;
      if ((int)uVar5 < 0) {
        uVar4 = uVar5;
      }
    }
  }
  return uVar4;
}


