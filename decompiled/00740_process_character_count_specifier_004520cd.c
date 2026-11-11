// Function: process_character_count_specifier
// Entry: 004520cd
// Size: 24 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_character_count_specifier(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_character_count_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  undefined4 uVar1;
  
  if (this[0x2e] != (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    return true;
  }
  uVar1 = FUN_004520e5(this,*(int *)(this + 0x10) - *(int *)(this + 8),0);
  return SUB41(uVar1,0);
}


