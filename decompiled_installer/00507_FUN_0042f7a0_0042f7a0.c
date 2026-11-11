// Function: FUN_0042f7a0
// Entry: 0042f7a0
// Size: 273 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042f7a0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int local_18 [6];
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  local_18[0] = 0;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 4;
  local_18[5] = 4;
  iVar2 = local_18[*(int *)(param_1 + 100)];
  if (param_1 == -0x38) {
    return 0xfffffffe;
  }
  puVar1 = (uint *)(param_1 + 0x48);
  LOCK();
  uVar3 = *puVar1;
  if (uVar3 == 0) {
    *puVar1 = 0;
    uVar3 = 0;
  }
  UNLOCK();
  uVar4 = *(uint *)(param_1 + 0x3c);
  uVar7 = iVar2 * *(int *)(param_1 + 0x68) * param_2 + (uVar3 & 0x7fffffff);
  if (uVar4 < uVar7) {
    return 0xfffffffe;
  }
  uVar6 = uVar3 & 0x80000000 ^ 0x80000000;
  if (uVar7 != uVar4) {
    uVar6 = uVar3 & 0x80000000;
  }
  uVar3 = 0;
  if (uVar7 != uVar4) {
    uVar3 = uVar7;
  }
  LOCK();
  *puVar1 = uVar6 | uVar3;
  UNLOCK();
  LOCK();
  uVar3 = *puVar1;
  if (uVar3 == 0) {
    *puVar1 = 0;
    uVar3 = 0;
  }
  UNLOCK();
  LOCK();
  uVar4 = *(uint *)(param_1 + 0x4c);
  if (uVar4 == 0) {
    *(uint *)(param_1 + 0x4c) = 0;
    uVar4 = 0;
  }
  UNLOCK();
  if ((uVar3 & 0x80000000) != (uVar4 & 0x80000000)) {
    uVar5 = 0;
    if ((uVar4 & 0x7fffffff) + (*(int *)(param_1 + 0x3c) - (uVar3 & 0x7fffffff)) == 0) {
      uVar5 = 0xffffffef;
    }
    return uVar5;
  }
  uVar5 = 0;
  if ((uVar4 & 0x7fffffff) == (uVar3 & 0x7fffffff)) {
    uVar5 = 0xffffffef;
  }
  return uVar5;
}


