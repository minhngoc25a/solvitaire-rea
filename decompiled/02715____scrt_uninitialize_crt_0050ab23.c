// Function: ___scrt_uninitialize_crt
// Entry: 0050ab23
// Size: 40 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl ___scrt_uninitialize_crt(char param_1,char param_2)

{
  undefined4 in_EAX;
  
  if ((DAT_005450c0 == '\0') || (param_2 == '\0')) {
    ___acrt_uninitialize(param_1);
    in_EAX = ___vcrt_uninitialize(param_1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


