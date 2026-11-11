// Function: LoadResource
// Entry: 0040b880
// Size: 6 bytes
// Thunk: true
// External: false


HGLOBAL LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


