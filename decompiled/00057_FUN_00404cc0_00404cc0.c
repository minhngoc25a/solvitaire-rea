// Function: FUN_00404cc0
// Entry: 00404cc0
// Size: 74 bytes
// Thunk: false
// External: false


void FUN_00404cc0(char *param_1)

{
  FILE *_File;
  
  _File = (FILE *)(_iob_exref + 0x40);
  fwrite("Mingw runtime failure:\n",1,0x17,_File);
  vfprintf(_File,param_1,&stack0x00000008);
                    /* WARNING: Subroutine does not return */
  abort();
}


