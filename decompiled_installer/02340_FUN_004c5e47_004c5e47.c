// Function: FUN_004c5e47
// Entry: 004c5e47
// Size: 162 bytes
// Thunk: false
// External: false


int __cdecl FUN_004c5e47(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (param_1 != 0x400)) && (param_1 != 0x800)) &&
     (((param_2 != (short *)0x0 || (param_3 < 1)) && (-1 < param_3)))) {
    iVar5 = 0;
    iVar4 = 0xe3;
    do {
      iVar2 = (iVar4 + iVar5) / 2;
      if (param_1 == *(int *)(&DAT_0051ab80 + iVar2 * 8)) {
        if (iVar2 < 0) {
          return 0;
        }
        psVar1 = *(short **)(&UNK_0051ab84 + iVar2 * 8);
        uVar3 = FUN_0044bf32(psVar1,0x55);
        if (0 < param_3) {
          if (param_3 <= (int)uVar3) {
            return 0;
          }
          iVar4 = FUN_0047f91c(param_2,param_3,(int)psVar1);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return uVar3 + 1;
      }
      if (param_1 - *(int *)(&DAT_0051ab80 + iVar2 * 8) < 0) {
        iVar4 = iVar2 + -1;
      }
      else {
        iVar5 = iVar2 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return 0;
}


