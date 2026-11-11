// Function: process_string_specifier
// Entry: 00451f33
// Size: 72 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 == 1) {
    process_whitespace(this);
  }
  uVar2 = FUN_0045174a((int)(this + 0x18));
  if (uVar2 == 1) {
    uVar2 = FUN_00452401(this,param_1);
    uVar1 = (undefined1)uVar2;
  }
  else if (uVar2 == 2) {
    uVar2 = FUN_00452563(this,param_1);
    uVar1 = (undefined1)uVar2;
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}


