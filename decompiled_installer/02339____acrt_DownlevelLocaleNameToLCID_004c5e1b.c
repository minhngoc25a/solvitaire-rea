// Function: ___acrt_DownlevelLocaleNameToLCID
// Entry: 004c5e1b
// Size: 44 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl ___acrt_DownlevelLocaleNameToLCID(ushort *param_1)

{
  uint uVar1;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = FID_conflict_GetTableIndexFromLocaleName(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_0051ab80 + uVar1 * 8);
    }
  }
  return 0;
}


