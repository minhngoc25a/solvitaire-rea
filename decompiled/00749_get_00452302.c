// Function: get
// Entry: 00452302
// Size: 55 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: char __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::get(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char __thiscall
__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
          (input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x10) + 1;
  uVar3 = *(int *)(this + 0x14) + (uint)(0xfffffffe < *(uint *)(this + 0x10));
  *(uint *)(this + 0x10) = uVar2;
  *(uint *)(this + 0x14) = uVar3;
  if ((*(int *)(this + 8) == 0 && *(int *)(this + 0xc) == 0) ||
     ((uVar3 <= *(uint *)(this + 0xc) &&
      ((uVar3 < *(uint *)(this + 0xc) || (uVar2 <= *(uint *)(this + 8))))))) {
    iVar1 = __crt_stdio_input::string_input_adapter<char>::get(*(string_input_adapter<char> **)this)
    ;
    if (iVar1 != -1) goto LAB_00452337;
  }
  iVar1 = 0;
LAB_00452337:
  return (char)iVar1;
}


