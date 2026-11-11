// Function: FUN_00497e70
// Entry: 00497e70
// Size: 223 bytes
// Thunk: false
// External: false


void __cdecl FUN_00497e70(uint *param_1,uint *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if ((0x19db1dd < uVar4) && ((0x19db1de < uVar4 || (0xd53e7fff < uVar3)))) {
    uVar2 = uVar3 + 0x2ac18000;
    uVar3 = uVar4 + 0xfe624e21 + (uint)(0xd53e7fff < uVar3);
    lVar1 = (ulonglong)uVar3 * 0xe57a42bd + ((ulonglong)uVar2 * 0xe57a42bd >> 0x20);
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar5 = (int)((ulonglong)uVar2 * 0xd6bf94d5 >> 0x20) +
            (uint)CARRY4((uint)((ulonglong)uVar2 * 0xd6bf94d5),(uint)lVar1);
    lVar1 = (ulonglong)uVar3 * 0xd6bf94d5 + (ulonglong)CONCAT14(CARRY4(uVar4,uVar5),uVar4 + uVar5);
    uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1 >> 0x17 | uVar3 * 0x200;
    *param_2 = uVar4;
    param_2[1] = uVar3 >> 0x17;
    *param_3 = (uVar2 + uVar4 * -10000000) * 100;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  return;
}


