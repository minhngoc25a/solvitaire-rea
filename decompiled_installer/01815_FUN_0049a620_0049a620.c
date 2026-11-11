// Function: FUN_0049a620
// Entry: 0049a620
// Size: 113 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049a620(undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if (-1 < (int)*param_2) {
    uVar1 = (ushort)param_2[3] & 0xf000;
    if (((uVar1 != 0x8000) && (uVar1 != 0x2000)) && (uVar1 != 0x6000)) {
      do {
        uVar2 = FUN_00497970(*param_2,(LPVOID)param_2[2],param_2[1]);
      } while (0 < (int)uVar2);
    }
    if (param_2[4] != 0) {
      FUN_0049d22f(*param_2);
    }
  }
  FUN_0047d191((LPVOID)param_2[2]);
  param_2[2] = 0;
  *param_2 = 0xffffffff;
  return 0;
}


