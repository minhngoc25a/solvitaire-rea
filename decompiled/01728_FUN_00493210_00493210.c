// Function: FUN_00493210
// Entry: 00493210
// Size: 83 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00493210(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 < param_2) {
    while (cVar1 = *param_1, (byte)(cVar1 - 0x30U) < 10) {
      if ((iVar2 < 0xccccccd) && ((iVar2 != 0xccccccc || (cVar1 < '8')))) {
        iVar2 = (int)cVar1 + iVar2 * 10 + -0x30;
      }
      else {
        iVar2 = 0x7fffffff;
      }
      param_1 = param_1 + 1;
      if (param_2 <= param_1) {
        *param_3 = iVar2;
        return 1;
      }
    }
  }
  return 0;
}


