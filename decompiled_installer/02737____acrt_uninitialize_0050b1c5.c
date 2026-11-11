// Function: ___acrt_uninitialize
// Entry: 0050b1c5
// Size: 48 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_uninitialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __cdecl ___acrt_uninitialize(char param_1)

{
  undefined1 uVar1;
  
  if (param_1 != '\0') {
    if (DAT_0054499c != 0) {
      __flushall();
    }
    return 1;
  }
  uVar1 = ___acrt_execute_uninitializers(0x523560,0x5235e0);
  return uVar1;
}


