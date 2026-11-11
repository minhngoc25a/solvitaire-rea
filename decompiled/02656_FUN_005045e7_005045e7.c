// Function: FUN_005045e7
// Entry: 005045e7
// Size: 118 bytes
// Thunk: false
// External: false


void FUN_005045e7(void)

{
  ushort *puVar1;
  short *unaff_EDI;
  ushort local_208 [256];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  DAT_005421cc = 0xffffffff;
  DAT_005421c0 = 0xffffffff;
  DAT_00544b40 = 0;
  puVar1 = (ushort *)FUN_005040fb((short *)local_208,unaff_EDI);
  if ((puVar1 == (ushort *)0x0) || (*puVar1 == 0)) {
    FUN_005041b4();
  }
  else {
    FUN_00504355(puVar1);
  }
  FUN_004247be((LPVOID)(-(uint)(puVar1 != local_208) & (uint)puVar1));
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


