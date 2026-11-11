// Function: validate
// Entry: 00451616
// Size: 28 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::format_string_parser<char>::validate(void)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::validate(format_string_parser<char> *this)

{
  __acrt_ptd *p_Var1;
  
  if (*(int *)(this + 8) == 0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return false;
  }
  return true;
}


