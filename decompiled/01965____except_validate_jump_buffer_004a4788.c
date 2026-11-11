// Function: ___except_validate_jump_buffer
// Entry: 004a4788
// Size: 45 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___except_validate_jump_buffer
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___except_validate_jump_buffer(int param_1)

{
  code *pcVar1;
  
  if ((code *)PTR_guard_check_icall_00532084 != guard_check_icall) {
    if ((*(uint *)(param_1 + 0x10) < *(uint *)((int)Self + 8)) ||
       (*(uint *)((int)Self + 4) < *(uint *)(param_1 + 0x10))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}


