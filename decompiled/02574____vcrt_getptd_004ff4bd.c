// Function: ___vcrt_getptd
// Entry: 004ff4bd
// Size: 14 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_getptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_getptd(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  LPVOID pvVar4;
  
  pvVar4 = ___vcrt_getptd_noexit();
  if (pvVar4 != (LPVOID)0x0) {
    return;
  }
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


