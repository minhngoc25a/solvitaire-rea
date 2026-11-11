// Function: FUN_00424120
// Entry: 00424120
// Size: 33 bytes
// Thunk: false
// External: false


undefined8 __fastcall FUN_00424120(undefined4 param_1,undefined4 param_2,LPVOID param_3)

{
  undefined4 in_EAX;
  
  if (param_3 != (LPVOID)0x0) {
    HeapFree(DAT_0054358c,0,param_3);
  }
  return CONCAT44(param_2,in_EAX);
}


