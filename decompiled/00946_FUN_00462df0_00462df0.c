// Function: FUN_00462df0
// Entry: 00462df0
// Size: 222 bytes
// Thunk: false
// External: false


void __cdecl FUN_00462df0(ulonglong param_1,uint *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((0x19db1ddffffffff < param_1) &&
     ((0x19db1deffffffff < param_1 || (0xd53e7fff < (uint)param_1)))) {
    uVar4 = param_1 + 0xfe624e212ac18000;
    uVar5 = (uint)(uVar4 >> 0x20);
    lVar1 = (uVar4 & 0xffffffff) * 0xd6bf94d5;
    lVar2 = (ulonglong)uVar5 * 0xd6bf94d5;
    lVar3 = (ulonglong)uVar5 * 0xe57a42bd + ((uVar4 & 0xffffffff) * 0xe57a42bd >> 0x20);
    uVar5 = (uint)lVar2;
    uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar8 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar1,(uint)lVar3);
    uVar7 = uVar6 + uVar8;
    uVar6 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar6,uVar8) + (uint)CARRY4(uVar5,uVar7);
    uVar5 = uVar5 + uVar7 >> 0x17 | uVar6 * 0x200;
    *param_2 = uVar5;
    param_2[1] = uVar6 >> 0x17;
    *param_3 = ((int)uVar4 + uVar5 * -10000000) * 100;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  return;
}


