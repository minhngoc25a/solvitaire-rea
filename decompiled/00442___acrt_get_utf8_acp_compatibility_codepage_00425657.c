// Function: __acrt_get_utf8_acp_compatibility_codepage
// Entry: 00425657
// Size: 63 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    unsigned int __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)
   
   Library: Visual Studio 2019 Release */

uint __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  char local_8;
  
  FUN_00425544(&local_14,(int *)0x0);
  uVar2 = 0xfde9;
  if (*(int *)(local_10 + 8) != 0xfde9) {
    iVar1 = ___acrt_AreFileApisANSI_0();
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar2;
}


