// Function: FUN_0050a350
// Entry: 0050a350
// Size: 189 bytes
// Thunk: false
// External: false


void FUN_0050a350(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_00544c24 == '\0') {
    DAT_00544c24 = '\x01';
    uVar3 = 0;
    do {
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar1 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      uVar2 = uVar1 >> 1 ^ 0xedb88320;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      uVar1 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      uVar2 = uVar1 >> 1 ^ 0xedb88320;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      uVar1 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      uVar2 = uVar1 >> 1 ^ 0xedb88320;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      uVar1 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1;
      }
      (&DAT_00544c40)[uVar3] = uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


