// Function: fopen
// Entry: 0040b6d0
// Size: 6 bytes
// Thunk: true
// External: false


FILE * __cdecl fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = fopen(_Filename,_Mode);
  return pFVar1;
}


