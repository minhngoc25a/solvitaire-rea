// Function: FUN_00416860
// Entry: 00416860
// Size: 147 bytes
// Thunk: false
// External: false


int FUN_00416860(void)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (DAT_00542894 < 1) {
    return 0;
  }
  pcVar2 = (char *)(DAT_00542898 + 0x368);
  do {
    if (*pcVar2 == '\0') {
      *(undefined1 *)(iVar3 * 0x370 + 0x368 + DAT_00542898) = 1;
      iVar4 = DAT_00542898 + iVar3 * 0x370;
      *(int *)(iVar4 + 0x364) = iVar3;
      bVar1 = FUN_00431b10((int)DAT_0054289c);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_004317d0(DAT_0054289c);
      }
      if (*(char *)(iVar4 + 0x369) != '\0') {
        *(undefined1 *)(iVar4 + 0x369) = 0;
        FUN_00434f70(iVar4);
      }
      return iVar4;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x370;
  } while (iVar3 < DAT_00542894);
  return 0;
}


