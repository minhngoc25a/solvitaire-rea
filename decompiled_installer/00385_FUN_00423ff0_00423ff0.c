// Function: FUN_00423ff0
// Entry: 00423ff0
// Size: 70 bytes
// Thunk: false
// External: false


void FUN_00423ff0(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  
  if (param_1 != (short *)0x0) {
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar5 = (int)psVar4 - (int)(param_1 + 1) >> 1;
    iVar2 = FUN_0044c3e0(iVar5,-1);
    FUN_0047d0c0(iVar2,(undefined4 *)param_1,iVar5);
    return;
  }
  puVar3 = (undefined2 *)FUN_0044c3e0(0,-1);
  *puVar3 = 0;
  return;
}


