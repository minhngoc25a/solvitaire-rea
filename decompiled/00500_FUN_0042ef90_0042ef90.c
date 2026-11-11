// Function: FUN_0042ef90
// Entry: 0042ef90
// Size: 148 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042ef90(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  uint uStack_4;
  
  if (param_2 == (int *)0x0) {
    return -2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != (int *)0x0) {
    if (*(code **)(*param_1 + 0xc) == (code *)0x0) {
      return -0x1d;
    }
    iVar3 = (**(code **)(*param_1 + 0xc))(param_1,&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    if ((uStack_4 <= uVar2) && ((uStack_4 < uVar2 || (local_8 < uVar1)))) {
      *param_2 = 0;
      param_2[1] = 0;
      return 0;
    }
    *param_2 = local_8 - uVar1;
    param_2[1] = (uStack_4 - uVar2) - (uint)(local_8 < uVar1);
  }
  return 0;
}


