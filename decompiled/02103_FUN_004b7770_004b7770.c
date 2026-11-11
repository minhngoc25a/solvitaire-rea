// Function: FUN_004b7770
// Entry: 004b7770
// Size: 69 bytes
// Thunk: false
// External: false


ulonglong __fastcall
FUN_004b7770(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar5 = CONCAT44(param_2,param_5);
  puVar1 = (undefined4 *)(param_3 + param_4 * 4);
  puVar2 = (undefined4 *)(param_5 + param_6 * 4);
  for (; 0 < param_7; param_7 = param_7 + -1) {
    puVar3 = (uint *)*puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = (uint *)*puVar2;
    puVar2 = puVar2 + 1;
    uVar5 = FUN_0044c490(puVar4,puVar3,param_8);
  }
  return uVar5;
}


