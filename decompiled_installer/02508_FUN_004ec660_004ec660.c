// Function: FUN_004ec660
// Entry: 004ec660
// Size: 371 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004ec660(undefined4 param_1,uint *param_2,byte *param_3,uint *param_4,byte *param_5,uint param_6
            ,int param_7,int *param_8,undefined4 *param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar1 = *param_2;
  uVar2 = *param_4;
  *param_4 = 0;
  *param_2 = 0;
  *param_8 = 0;
  if (uVar2 < 5) {
    return 6;
  }
  iVar3 = FUN_004ec0a0((undefined1 *)&local_6c,param_5,param_6);
  if (iVar3 == 0) {
    iVar3 = (0x300 << (local_6c._1_1_ + (char)local_6c & 0x1fU)) + 0x7c0;
    (*(code *)param_9[1])(param_9,0);
    iStack_5c = (*(code *)*param_9)(param_9,iVar3 * 2);
    if (iStack_5c == 0) {
      return 2;
    }
    iStack_58 = iStack_5c + 0xd00;
    uStack_60 = uStack_68;
    uStack_54 = param_1;
    uStack_64 = local_6c;
    *param_4 = uVar2;
    uStack_4c = 0;
    uStack_18 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_20 = 0x114;
    uStack_50 = uVar1;
    iStack_1c = iVar3;
    iVar3 = FUN_004ec130((byte *)&uStack_64,uVar1,param_3,param_4,param_7,param_8);
    *param_2 = uStack_4c;
    if ((iVar3 == 0) && (*param_8 == 3)) {
      iVar3 = 6;
    }
    (*(code *)param_9[1])(param_9,iStack_5c);
  }
  return iVar3;
}


