// Function: process
// Entry: 00451d58
// Size: 132 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: int __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  string_input_adapter<char> *this_00;
  bool bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  
  this_00 = (string_input_adapter<char> *)(this + 8);
  bVar1 = string_input_adapter<char>::validate(this_00);
  if (bVar1) {
    bVar1 = format_string_parser<char>::validate((format_string_parser<char> *)(this + 0x18));
    if (bVar1) {
      do {
        bVar1 = format_string_parser<char>::advance((format_string_parser<char> *)(this + 0x18));
        if (!bVar1) break;
        bVar1 = process_state(this);
      } while (bVar1);
      iVar4 = *(int *)(this + 0x70);
      if ((iVar4 == 0) && (*(int *)(this + 0x28) != 1)) {
        iVar2 = string_input_adapter<char>::get(this_00);
        if (iVar2 == -1) {
          iVar4 = -1;
        }
        string_input_adapter<char>::unget(this_00,iVar2);
      }
      if ((*(uint *)this & 1) == 0) {
        return iVar4;
      }
      iVar2 = *(int *)(this + 0x24);
      if (iVar2 == 0) {
        return iVar4;
      }
      p_Var3 = FUN_0042470e();
      *(int *)p_Var3 = iVar2;
      FUN_004243be();
      return iVar4;
    }
  }
  return -1;
}


