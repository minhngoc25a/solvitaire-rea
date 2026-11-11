// Function: FUN_0049b6d0
// Entry: 0049b6d0
// Size: 115 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0049b6d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1[2] = 0;
  uVar1 = 0;
  while ((*(int *)((int)&DAT_00518e78 + uVar1) != *param_1 ||
         (*(int *)((int)&DAT_00518e7c + uVar1) != param_1[1]))) {
    uVar1 = uVar1 + 0x18;
    iVar2 = iVar2 + 1;
    if (0xd7 < uVar1) {
      return 8;
    }
  }
  if (iVar2 * 0x18 == -0x518e78) {
    return 8;
  }
  if ((code *)(&PTR_LAB_00518e88)[iVar2 * 6] != (code *)0x0) {
    uVar1 = (*(code *)(&PTR_LAB_00518e88)[iVar2 * 6])(param_1 + 2,param_2,param_3,param_4);
    return uVar1;
  }
  return -(uint)(param_4 != 0) & 8;
}


