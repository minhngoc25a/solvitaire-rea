// Function: FUN_00455651
// Entry: 00455651
// Size: 59 bytes
// Thunk: false
// External: false


undefined1 FUN_00455651(char param_1,byte param_2)

{
  byte bVar1;
  
  if ((byte)(param_1 - 0x20U) < 0x5b) {
    bVar1 = (&DAT_0050ce99)[((int)param_1 - 0x20U & 0x7f) * 2];
  }
  else {
    bVar1 = 0;
  }
  return (&DAT_0050ce98)[((uint)param_2 + (uint)bVar1 * 8 & 0x7f) * 2];
}


