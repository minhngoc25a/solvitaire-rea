// Function: process_floating_point_specifier
// Entry: 0045209d
// Size: 48 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_floating_point_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  uint uVar1;
  
  process_whitespace(this);
  uVar1 = FUN_0045174a((int)(this + 0x18));
  if (uVar1 == 4) {
    uVar1 = FUN_00452183(this);
    return SUB41(uVar1,0);
  }
  if (uVar1 != 8) {
    return false;
  }
  uVar1 = FUN_004521ec(this);
  return SUB41(uVar1,0);
}


