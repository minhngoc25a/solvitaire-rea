// Function: _longjmp
// Entry: 0046b3a6
// Size: 18 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _longjmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  ___except_validate_jump_buffer((int)_Buf);
  FUN_004a4690((int)_Buf);
  return;
}


