// Function: FUN_004890a0
// Entry: 004890a0
// Size: 796 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00489281) */
/* WARNING: Removing unreachable block (ram,0x004891fd) */

longlong __cdecl FUN_004890a0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puStack00000004;
  undefined8 in_stack_00000000;
  uint local_10;
  int iStack_c;
  uint local_8;
  
  puStack00000004 = (uint *)((ulonglong)in_stack_00000000 >> 0x20);
  if (*(char *)((int)puStack00000004 + 0x4e) != '\0') {
    return -1;
  }
  uVar5 = puStack00000004[0xe];
  if (uVar5 == 0) {
    local_8 = 0;
    uVar5 = param_2;
  }
  else {
    local_8 = uVar5;
    if (((int)param_2 < 1) && (((int)param_2 < 0 || (param_1 < uVar5)))) {
      local_8 = param_1;
    }
    puStack00000004[0xd] = puStack00000004[0xd] + local_8;
    puStack00000004[0xe] = uVar5 - local_8;
    bVar6 = param_1 < local_8;
    param_1 = param_1 - local_8;
    uVar5 = *puStack00000004;
    *puStack00000004 = *puStack00000004 + local_8;
    puStack00000004[1] = puStack00000004[1] + (uint)CARRY4(uVar5,local_8);
    uVar5 = param_2 - bVar6;
  }
  uVar2 = 0;
  uVar4 = puStack00000004[0x12];
  if (uVar4 != 0) {
    uVar2 = uVar4;
    if (((int)uVar5 < 1) && (((int)uVar5 < 0 || (param_1 < uVar4)))) {
      uVar2 = param_1;
    }
    puStack00000004[0x11] = puStack00000004[0x11] + uVar2;
    bVar6 = param_1 < uVar2;
    param_1 = param_1 - uVar2;
    puStack00000004[0x12] = uVar4 - uVar2;
    uVar5 = uVar5 - bVar6;
    uVar4 = *puStack00000004;
    *puStack00000004 = *puStack00000004 + uVar2;
    puStack00000004[1] = puStack00000004[1] + (uint)CARRY4(uVar4,uVar2);
    bVar6 = CARRY4(local_8,uVar2);
    local_8 = local_8 + uVar2;
    uVar2 = (uint)bVar6;
  }
  if (param_1 == 0 && uVar5 == 0) {
    return CONCAT44(uVar2,local_8);
  }
  if (puStack00000004[9] == 0) goto LAB_004892d7;
  if (((int)uVar5 < 1) && ((int)uVar5 < 0)) {
    FUN_004873c0(1,"Negative skip requested.");
  }
  uVar4 = puStack00000004[4];
  if (*(int *)(uVar4 + 0x80) == 0) {
    if (((*(code **)(uVar4 + 0x84) == (code *)0x0) || (iStack_c < 0)) ||
       ((iStack_c < 1 && (param_1 < 0x10001)))) {
      lVar8 = 0;
    }
    else {
      uVar5 = *puStack00000004;
      uVar2 = puStack00000004[1];
      lVar7 = *(longlong *)puStack00000004;
      lVar8 = (**(code **)(uVar4 + 0x84))(uVar4,puStack00000004[6],param_1,iStack_c,1);
      if (lVar8 != CONCAT44(uVar2 + iStack_c + (uint)CARRY4(uVar5,param_1),uVar5 + param_1))
      goto LAB_00489291;
      lVar8 = lVar8 - lVar7;
LAB_00489277:
      if (((int)((ulonglong)lVar8 >> 0x20) < 1) && (lVar8 < 0)) goto LAB_00489299;
    }
    iVar1 = (int)((ulonglong)lVar8 >> 0x20);
    uVar4 = (uint)lVar8;
    uVar5 = *puStack00000004;
    *puStack00000004 = *puStack00000004 + uVar4;
    puStack00000004[1] = puStack00000004[1] + iVar1 + (uint)CARRY4(uVar5,uVar4);
    lVar8 = lVar8 + CONCAT44(param_2,local_10);
    local_8 = (uint)lVar8;
    param_2 = (uint)((ulonglong)lVar8 >> 0x20);
    bVar6 = param_1 < uVar4;
    param_1 = param_1 - uVar4;
    uVar5 = (iStack_c - iVar1) - (uint)bVar6;
    local_10 = local_8;
    if (param_1 == 0 && uVar5 == 0) {
      return lVar8;
    }
LAB_004892d7:
    uVar4 = (**(code **)puStack00000004[5])();
    do {
      if ((int)uVar4 < 0) {
        *(undefined1 *)((int)puStack00000004 + 0x4e) = 1;
        puStack00000004[0xf] = 0;
        return (longlong)(int)uVar4;
      }
      if (uVar4 == 0) {
        iVar1 = *(int *)(puStack00000004[4] + 0x94);
        if ((iVar1 == *(int *)(puStack00000004[4] + 0x90) + -1) ||
           (iVar1 = FUN_00489460((int)puStack00000004,iVar1 + 1), iVar1 != 0)) {
          puStack00000004[0xf] = 0;
          *(undefined1 *)(puStack00000004 + 0x13) = 1;
          return CONCAT44(param_2,local_8);
        }
      }
      else {
        uVar2 = *puStack00000004;
        if ((0x7fffffff < uVar5) || (((int)uVar5 < 1 && (param_1 <= uVar4)))) {
          puStack00000004[0x10] = uVar4;
          puStack00000004[0x11] = puStack00000004[0xf] + param_1;
          puStack00000004[0x12] = uVar4 - param_1;
          *puStack00000004 = uVar2 + param_1;
          puStack00000004[1] = puStack00000004[1] + uVar5 + (uint)CARRY4(uVar2,param_1);
          return CONCAT44(param_2 + uVar5 + (uint)CARRY4(local_10,param_1),local_10 + param_1);
        }
        *puStack00000004 = uVar2 + uVar4;
        puStack00000004[1] = puStack00000004[1] + (uint)CARRY4(uVar2,uVar4);
        local_8 = local_10 + uVar4;
        param_2 = param_2 + CARRY4(local_10,uVar4);
        bVar6 = param_1 < uVar4;
        param_1 = param_1 - uVar4;
        uVar5 = uVar5 - bVar6;
        local_10 = local_8;
      }
      uVar4 = (**(code **)puStack00000004[5])();
    } while( true );
  }
  lVar8 = 0;
  uVar4 = param_1;
  while( true ) {
    uVar2 = uVar4;
    uVar3 = uVar5;
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (0x40000000 < uVar4)))) {
      uVar2 = 0x40000000;
      uVar3 = 0;
    }
    lVar7 = (**(code **)(puStack00000004[4] + 0x80))
                      (puStack00000004[4],puStack00000004[6],uVar2,uVar3);
    lVar8 = lVar7 + lVar8;
    if ((lVar7 == 0) || (lVar7 == CONCAT44(uVar5,uVar4))) goto LAB_00489277;
    if (CONCAT44(uVar5,uVar4) < lVar7) break;
    bVar6 = uVar4 < (uint)lVar7;
    uVar4 = uVar4 - (uint)lVar7;
    uVar5 = (uVar5 - (int)((ulonglong)lVar7 >> 0x20)) - (uint)bVar6;
  }
LAB_00489291:
  lVar8 = -0x1e;
LAB_00489299:
  *(undefined1 *)((int)puStack00000004 + 0x4e) = 1;
  return lVar8;
}


