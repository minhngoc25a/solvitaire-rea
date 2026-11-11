// Function: ___std_exception_destroy
// Entry: 00507ba9
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___std_exception_destroy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___std_exception_destroy(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_0047d191((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


