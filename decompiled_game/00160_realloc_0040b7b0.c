// Function: realloc
// Entry: 0040b7b0
// Size: 6 bytes
// Thunk: true
// External: false


void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}


