// Function: FUN_0042f660
// Entry: 0042f660
// Size: 312 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042f660(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_18 [6];
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    return 0xfffffffe;
  }
  local_18[0] = 0;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 4;
  local_18[5] = 4;
  uVar3 = local_18[*(int *)(param_1 + 100)] * *param_2 * *(int *)(param_1 + 0x68);
  if ((param_1 != -0x38) && (param_3 != (int *)0x0)) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x4c);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0x4c) = 0;
      uVar1 = 0;
    }
    UNLOCK();
    uVar4 = uVar1 & 0x7fffffff;
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x48);
    if (uVar2 == 0) {
      *(uint *)(param_1 + 0x48) = 0;
      uVar2 = 0;
    }
    UNLOCK();
    if ((uVar2 & 0x80000000) != (uVar1 & 0x80000000)) {
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    uVar4 = uVar4 - (uVar2 & 0x7fffffff);
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar4 = uVar3;
    }
    LOCK();
    uVar3 = *(uint *)(param_1 + 0x48);
    if (uVar3 == 0) {
      *(uint *)(param_1 + 0x48) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    local_18[0] = 0;
    local_18[1] = 1;
    *param_3 = (uVar3 & 0x7fffffff) + *(int *)(param_1 + 0x38);
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    *param_2 = uVar4 / (uint)(local_18[*(int *)(param_1 + 100)] * *(int *)(param_1 + 0x68));
    return 0;
  }
  return 0xfffffffe;
}


