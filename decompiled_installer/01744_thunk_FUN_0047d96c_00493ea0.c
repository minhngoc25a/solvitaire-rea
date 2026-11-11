// Function: thunk_FUN_0047d96c
// Entry: 00493ea0
// Size: 5 bytes
// Thunk: true
// External: false


void thunk_FUN_0047d96c(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    FUN_004c072c(0x16);
  }
  if ((DAT_00540684 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00480228(3);
}


