// Function: FUN_004238d0
// Entry: 004238d0
// Size: 77 bytes
// Thunk: false
// External: false


void FUN_004238d0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = 0;
  if (param_1 != (uint *)0x0) {
    puVar3 = param_1;
    do {
      uVar1 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 2);
    } while ((short)uVar1 != 0);
    iVar2 = (int)puVar3 - ((int)param_1 + 2) >> 1;
  }
  puVar3 = (uint *)FUN_0044c3e0(iVar2,param_2);
  if (iVar2 != 0) {
    FUN_0044c490(puVar3,param_1,iVar2 * 2);
  }
  *(undefined2 *)((int)puVar3 + iVar2 * 2) = 0;
  return;
}


