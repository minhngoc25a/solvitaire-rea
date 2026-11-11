// Function: FUN_0042f8c0
// Entry: 0042f8c0
// Size: 168 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0042f8c0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_18 [6];
  
  if (param_1 != 0) {
    uVar3 = 0;
    if (param_1 != -0x38) {
      LOCK();
      uVar3 = *(uint *)(param_1 + 0x48);
      if (uVar3 == 0) {
        *(uint *)(param_1 + 0x48) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x4c);
      if (uVar1 == 0) {
        *(uint *)(param_1 + 0x4c) = 0;
        uVar1 = 0;
      }
      UNLOCK();
      if ((uVar3 & 0x80000000) == (uVar1 & 0x80000000)) {
        iVar2 = -(uVar3 & 0x7fffffff);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x3c) - (uVar3 & 0x7fffffff);
      }
      uVar3 = (uVar1 & 0x7fffffff) + iVar2;
    }
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    return uVar3 / (uint)(local_18[*(int *)(param_1 + 100)] * *(int *)(param_1 + 0x68));
  }
  return 0;
}


