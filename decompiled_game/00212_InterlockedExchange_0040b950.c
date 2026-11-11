// Function: InterlockedExchange
// Entry: 0040b950
// Size: 6 bytes
// Thunk: true
// External: false


LONG InterlockedExchange(LONG *Target,LONG Value)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedExchange(Target,Value);
  return LVar1;
}


