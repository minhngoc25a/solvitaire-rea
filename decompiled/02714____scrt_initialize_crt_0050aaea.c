// Function: ___scrt_initialize_crt
// Entry: 0050aaea
// Size: 57 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Library: Visual Studio 2019 Release */

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DAT_005450c0 = 1;
  }
  FUN_00484190();
  uVar1 = ___vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = ___acrt_initialize();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffff00;
}


