// Function: ___acrt_call_reportfault
// Entry: 00424402
// Size: 313 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_call_reportfault
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4 [39];
  
  uVar1 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if (param_1 != -1) {
    FUN_0047d9b0();
  }
  _memset(&local_324,0,0x50);
  _memset(local_2d4,0,0x2cc);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)local_2d4;
  local_2d4[0] = 0x10001;
  local_324.ExceptionCode = param_2;
  local_324.ExceptionFlags = param_3;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_32c);
  if (((LVar3 == 0) && (BVar2 == 0)) && (param_1 != -1)) {
    FUN_0047d9b0();
  }
  FUN_004257be(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


