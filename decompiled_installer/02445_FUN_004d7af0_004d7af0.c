// Function: FUN_004d7af0
// Entry: 004d7af0
// Size: 103 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d7af0(byte *param_1,byte *param_2,size_t param_3,char param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = &DAT_005236fc;
  if (param_2 != (byte *)0x0) {
    pbVar2 = param_2;
  }
  bVar1 = *pbVar2;
  while( true ) {
    if (bVar1 == 0) {
      if (param_3 != 0) {
        _memset(param_1,(int)param_4,param_3);
      }
      return;
    }
    pbVar2 = pbVar2 + 1;
    if (param_3 == 0) break;
    if ((0x7f < bVar1) || (*(char *)((uint)bVar1 + param_5) == '\0')) {
      if ((byte)(bVar1 + 0x9f) < 0x1a) {
        bVar1 = bVar1 - 0x20;
      }
      else {
        bVar1 = 0x5f;
      }
    }
    *param_1 = bVar1;
    param_3 = param_3 - 1;
    bVar1 = *pbVar2;
    param_1 = param_1 + 1;
  }
  return;
}


