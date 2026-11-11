// Function: vfprintf
// Entry: 0040b778
// Size: 6 bytes
// Thunk: true
// External: false


int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = vfprintf(_File,_Format,_ArgList);
  return iVar1;
}


