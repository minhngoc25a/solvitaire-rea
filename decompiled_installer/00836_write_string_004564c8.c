// Function: write_string
// Entry: 004564c8
// Size: 103 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: void __thiscall __crt_stdio_output::string_output_adapter<char>::write_string(char const
   * const,int,int * const,class __crt_deferred_errno_cache &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = *(undefined4 **)this;
  if (puVar1[2] == puVar1[1]) {
    if (*(char *)(puVar1 + 3) == '\0') {
LAB_00456521:
      *param_3 = -1;
      return;
    }
  }
  else {
    uVar2 = puVar1[1] - puVar1[2];
    if ((uint)param_2 <= uVar2) {
      uVar2 = param_2;
    }
    FUN_0044c490((uint *)*puVar1,(uint *)param_1,uVar2);
    **(int **)this = **(int **)this + uVar2;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + uVar2;
    if (*(char *)(*(int *)this + 0xc) == '\0') {
      if (uVar2 == param_2) {
        *param_3 = *param_3 + uVar2;
        return;
      }
      goto LAB_00456521;
    }
  }
  *param_3 = *param_3 + param_2;
  return;
}


