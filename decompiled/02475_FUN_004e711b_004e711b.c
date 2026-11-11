// Function: FUN_004e711b
// Entry: 004e711b
// Size: 70 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004e711b(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    if (param_3 <= (int)((&DAT_005226a8)[param_2] - (&DAT_005226a4)[param_2])) {
      return true;
    }
    iVar1 = FUN_004e7161(param_1);
    if (((char)iVar1 != '\0') && (param_2 == 1)) {
      return param_3 < 0x1e;
    }
  }
  return false;
}


