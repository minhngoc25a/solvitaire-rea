// Function: process_conversion_specifier
// Entry: 00451ebf
// Size: 76 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_conversion_specifier(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_conversion_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  bool bVar1;
  undefined4 uVar2;
  conversion_mode cVar3;
  
  switch(*(undefined4 *)(this + 0x40)) {
  case 0:
    cVar3 = 0;
    goto LAB_00451ed0;
  case 1:
    cVar3 = 1;
    goto LAB_00451ed0;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    bVar1 = process_floating_point_specifier(this);
    return bVar1;
  case 8:
    cVar3 = 8;
LAB_00451ed0:
    bVar1 = process_string_specifier(this,cVar3);
    return bVar1;
  case 9:
    bVar1 = process_character_count_specifier(this);
    return bVar1;
  default:
    return false;
  }
  uVar2 = FUN_00452038(this);
  return SUB41(uVar2,0);
}


