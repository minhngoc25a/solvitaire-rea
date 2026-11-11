// Function: FUN_00433400
// Entry: 00433400
// Size: 416 bytes
// Thunk: false
// External: false


int __cdecl FUN_00433400(int param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  longlong lVar2;
  uint auVar3 [2];
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  int *local_10;
  uint uStack_c;
  uint local_8 [2];
  
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
    param_5[1] = 0;
  }
  if (param_1 == 0) {
    return -2;
  }
  iVar1 = param_1 + 0x100;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x134) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x13c) + 5);
  }
  local_8[0] = 0;
  local_8[1] = 0;
  auVar3 = local_8;
  local_8[0] = 0;
  local_8[1] = 0;
  uVar6 = local_8[0];
  uVar7 = local_8[1];
  if ((param_4 == 0) && (param_3 == 0)) {
    iVar5 = 0;
  }
  else {
    local_8 = auVar3;
    while( true ) {
      piVar8 = (int *)(param_3 - uVar6);
      if (param_4 - uVar7 != (uint)(param_3 < uVar6)) {
        piVar8 = (int *)0xffffffff;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x204) = 1;
      UNLOCK();
      if (iVar1 == 0) {
        uStack_c = 0;
        local_10 = (int *)0x0;
      }
      else {
        local_10 = (int *)0x0;
        uStack_c = 0;
        LOCK();
        lVar2 = *(longlong *)(param_1 + 0x128);
        if (lVar2 == 0) {
          *(longlong *)(param_1 + 0x128) = 0;
        }
        else {
          uStack_c = (uint)((ulonglong)lVar2 >> 0x20);
          local_10 = (int *)lVar2;
        }
        UNLOCK();
      }
      iVar5 = FUN_00449440(iVar1,0,(uint *)(param_2 + uVar4 * uVar6 * 4),piVar8,(int *)local_8,
                           local_10,uStack_c);
      LOCK();
      *(undefined4 *)(param_1 + 0x204) = 0;
      UNLOCK();
      bVar9 = CARRY4(uVar6,local_8[0]);
      uVar6 = uVar6 + local_8[0];
      uVar7 = uVar7 + bVar9;
      if ((iVar5 != 0) || (local_8[0] == 0)) break;
      if ((param_4 <= uVar7) && ((param_4 < uVar7 || (param_3 <= uVar6)))) goto LAB_00433589;
    }
    if ((uVar7 <= param_4) && ((uVar7 < param_4 || (uVar6 < param_3)))) {
      FUN_00431f80((void *)(param_2 + uVar4 * uVar6 * 4),param_3 - uVar6,
                   (param_4 - uVar7) - (uint)(param_3 < uVar6),5,uVar4);
    }
  }
LAB_00433589:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar6;
    param_5[1] = uVar7;
  }
  return iVar5;
}


