// Function: __initterm_e
// Entry: 004c513b
// Size: 46 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __initterm_e
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  
  do {
    if (param_1 == param_2) {
      return 0;
    }
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00532084)();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}


