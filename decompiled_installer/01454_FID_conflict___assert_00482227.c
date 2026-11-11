// Function: FID_conflict:__assert
// Entry: 00482227
// Size: 72 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    __assert
    __wassert
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl FID_conflict___assert(wchar_t *_Message,wchar_t *_File,uint _Line)

{
  code *pcVar1;
  int iVar2;
  LPCWSTR unaff_retaddr;
  
  iVar2 = FUN_004c5f4f(3);
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      iVar2 = FUN_004c5f3a();
      if (iVar2 == 1) goto LAB_00482260;
    }
    FUN_004823b1(_Message,_File,_Line,unaff_retaddr);
    return;
  }
LAB_00482260:
  FUN_00482324(_Message,_File,_Line);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


