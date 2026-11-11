// Function: FUN_00465180
// Entry: 00465180
// Size: 416 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00465180(uint *param_1,undefined4 param_2,uint *param_3,uint *param_4,int param_5)

{
  int iVar1;
  void *this;
  LPVOID _Dst;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  
  iVar1 = *(int *)param_1[0x110];
  puVar4 = *(uint **)(iVar1 + 0x80);
  _Dst = (LPVOID)FUN_0047f911(*(uint *)(iVar1 + 0x78),1);
  if (_Dst == (LPVOID)0x0) {
    return 0xffffffff;
  }
  puVar2 = FUN_00463150(param_1,1);
  if (puVar2 != (uint *)0x0) {
    this = *(void **)(iVar1 + 0x78);
    if ((char)*puVar2 == '\0') {
      iVar3 = FUN_00463a80(this,(uint)param_1,(int)_Dst,(uint)this);
      if (iVar3 < 0) goto LAB_0046530e;
    }
    else {
      _memset(_Dst,1,(size_t)this);
    }
    puVar2 = FUN_00463150(param_1,1);
    if ((puVar2 != (uint *)0x0) &&
       (((char)*puVar2 == '\0' ||
        (((iVar3 = FUN_004638e0(param_1,param_4), -1 < iVar3 && (param_4[1] == 0)) &&
         (puVar4 = param_1, *param_4 < 0x5f5e101)))))) {
      uVar5 = 0;
      if ((*(int *)(iVar1 + 0x7c) != 0) || (*(int *)(iVar1 + 0x78) != 0)) {
        puVar4 = puVar4 + 4;
        do {
          if (*(char *)(uVar5 + (int)_Dst) != '\0') {
            puVar2 = FUN_00463150(param_3,8);
            if (puVar2 == (uint *)0x0) goto LAB_0046530e;
            if (param_5 == 0x12) {
              puVar7 = puVar4 + 10;
              puVar8 = puVar4 + 6;
              uVar6 = FUN_00461580(puVar2);
              FUN_00462df0(uVar6,puVar8,(int *)puVar7);
              *puVar4 = *puVar4 | 4;
            }
            else if (param_5 == 0x13) {
              puVar7 = puVar4 + 9;
              puVar8 = puVar4 + 4;
              uVar6 = FUN_00461580(puVar2);
              FUN_00462df0(uVar6,puVar8,(int *)puVar7);
              *puVar4 = *puVar4 | 2;
            }
            else if (param_5 == 0x14) {
              puVar7 = puVar4 + 2;
              puVar8 = puVar4 + 8;
              uVar6 = FUN_00461580(puVar2);
              FUN_00462df0(uVar6,puVar7,(int *)puVar8);
              *puVar4 = *puVar4 | 1;
            }
          }
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 0x12;
        } while ((*(int *)(iVar1 + 0x7c) != 0) || (uVar5 < *(uint *)(iVar1 + 0x78)));
      }
      FUN_0047d191(_Dst);
      return 0;
    }
  }
LAB_0046530e:
  FUN_0047d191(_Dst);
  return 0xffffffff;
}


