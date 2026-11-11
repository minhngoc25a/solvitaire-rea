// Function: setlocale
// Entry: 0040b7d0
// Size: 6 bytes
// Thunk: true
// External: false


char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = setlocale(_Category,_Locale);
  return pcVar1;
}


