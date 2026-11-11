// Function: validate
// Entry: 00451cbd
// Size: 34 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::string_input_adapter<char>::validate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::string_input_adapter<char>::validate(string_input_adapter<char> *this)

{
  __acrt_ptd *p_Var1;
  
  if ((*(uint *)(this + 8) != 0) && (*(uint *)(this + 8) <= *(uint *)(this + 4))) {
    return true;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x16;
  FUN_004243be();
  return false;
}


