// Function: SetEnvironmentVariableA
// Entry: 0040b8b8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL SetEnvironmentVariableA(LPCSTR lpName,LPCSTR lpValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEnvironmentVariableA(lpName,lpValue);
  return BVar1;
}


