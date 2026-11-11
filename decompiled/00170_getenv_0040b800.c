// Function: getenv
// Entry: 0040b800
// Size: 6 bytes
// Thunk: true
// External: false


char * __cdecl getenv(char *_VarName)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = getenv(_VarName);
  return pcVar1;
}


