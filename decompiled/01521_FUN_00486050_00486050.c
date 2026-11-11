// Function: FUN_00486050
// Entry: 00486050
// Size: 256 bytes
// Thunk: false
// External: false


int FUN_00486050(uint param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar4;
  uint uVar3;
  
  if (((param_1 == 0) || (puVar1 = *(uint **)(param_1 + 0x20), puVar1 == (uint *)0x0)) ||
     (*puVar1 != param_1)) {
    return -2;
  }
  uVar3 = puVar1[1];
  if (uVar3 == 1) {
    return -1;
  }
LAB_00486080:
  do {
    if (uVar3 == 2) {
      if ((char)puVar1[10] == '\0') {
        uVar3 = FUN_004866c0(puVar1);
        cVar2 = (char)uVar3;
      }
      else {
        uVar3 = FUN_00486c40(puVar1);
        cVar2 = (char)uVar3;
      }
      if (cVar2 != '\0') {
        return -4;
      }
      if ((puVar1[0x110] != puVar1[0x3e90] + 1) || (puVar1[3] != 0)) {
        return 0;
      }
      uVar3 = ~puVar1[0x318];
      puVar1[0x318] = uVar3;
      if (uVar3 != puVar1[0x316]) {
        return -4;
      }
      puVar1[1] = 0xe;
      puVar1[0x319] = (puVar1[0x319] >> 0x1f | puVar1[0x319] * 2) ^ uVar3;
    }
    else if ((int)uVar3 < 10) goto LAB_00486080;
    iVar4 = FUN_004cdc50((int *)puVar1);
    if (iVar4 == 4) {
      return (uint)(puVar1[0x319] == puVar1[0x317]) * 8 + -4;
    }
    uVar3 = puVar1[1];
    if (uVar3 != 2) {
      return iVar4;
    }
  } while( true );
}


