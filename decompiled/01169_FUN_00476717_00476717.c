// Function: FUN_00476717
// Entry: 00476717
// Size: 131 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00476717(HANDLE param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  ushort local_6;
  int local_4;
  
  iVar1 = GetObjectW(param_1,0x18,local_18);
  if ((iVar1 == 0) || ((local_6 != 0x20 && (local_6 != 0x18)))) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 1;
    uVar4 = (uint)(local_6 >> 3) * local_10 * local_14;
    if (uVar4 != 0) {
      do {
        uVar5 = (*(byte *)(uVar3 + local_4) + uVar5) % 0xfff1;
        uVar2 = (uVar2 + uVar5) % 0xfff1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    uVar5 = uVar2 << 0x10 | uVar5;
  }
  return uVar5;
}


