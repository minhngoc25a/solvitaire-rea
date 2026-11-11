// Function: SetUnhandledExceptionFilter
// Entry: 0040b820
// Size: 6 bytes
// Thunk: true
// External: false


LPTOP_LEVEL_EXCEPTION_FILTER
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}


