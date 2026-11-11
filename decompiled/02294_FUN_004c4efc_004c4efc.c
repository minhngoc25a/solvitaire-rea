// Function: FUN_004c4efc
// Entry: 004c4efc
// Size: 71 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c4efc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = ___vcrt_getptd();
  if (param_1 == *(int *)(iVar2 + 0x24)) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar2 = ___vcrt_getptd();
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
  }
  else {
    iVar2 = ___vcrt_getptd();
    iVar2 = *(int *)(iVar2 + 0x24);
    do {
      piVar3 = (int *)(iVar2 + 4);
      iVar2 = *piVar3;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0047d96c();
      }
    } while (param_1 != iVar2);
    *piVar3 = *(int *)(param_1 + 4);
  }
  return;
}


