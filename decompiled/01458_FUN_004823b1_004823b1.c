// Function: FUN_004823b1
// Entry: 004823b1
// Size: 153 bytes
// Thunk: false
// External: false


void __cdecl FUN_004823b1(short *param_1,short *param_2,long param_3,LPCWSTR param_4)

{
  code *pcVar1;
  int iVar2;
  WCHAR local_488 [576];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  _memset(local_488,0,0x480);
  FUN_00482473(local_488,0x240,param_1,param_2,param_3,param_4);
  iVar2 = FUN_004c6175(local_488,L"Microsoft Visual C++ Runtime Library",0x12012);
  if (iVar2 == 3) {
    FUN_004c072c(0x16);
                    /* WARNING: Subroutine does not return */
    FUN_00480228(3);
  }
  if (iVar2 != 4) {
    if (iVar2 == 5) {
      FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047d96c();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


