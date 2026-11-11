// Function: SetHandleInformation
// Entry: 0040b8e8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL SetHandleInformation(HANDLE hObject,DWORD dwMask,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetHandleInformation(hObject,dwMask,dwFlags);
  return BVar1;
}


