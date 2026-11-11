// Function: FUN_0046a6d3
// Entry: 0046a6d3
// Size: 260 bytes
// Thunk: false
// External: false


undefined4 FUN_0046a6d3(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  size_t sVar5;
  byte *pbVar6;
  
  pcVar4 = param_1;
  pbVar3 = *(byte **)(param_1 + 0x30);
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  bVar2 = *pbVar3;
  if (bVar2 == 0xfe) {
    param_1[0x10] = '\x02';
    param_1[0x11] = pbVar3[1] & 0x3f;
    param_1[0x12] = pbVar3[1] & 0x80;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pbVar3 + 2);
    pbVar6 = pbVar3 + 10;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(pbVar3 + 6);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)pbVar6;
  }
  else {
    if (bVar2 == 0xff) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + 0x11);
    pbVar6 = pbVar3 + 1;
    if (bVar2 == 0xe) {
      param_1[0x10] = '\x04';
LAB_0046a725:
      *pbVar1 = *pbVar6 & 0x3f;
      bVar2 = *pbVar6;
      pbVar6 = pbVar3;
    }
    else {
      if (bVar2 != 0xf) {
        if (bVar2 != 0x16) {
          param_1[0x10] = '\x01';
          *pbVar1 = *pbVar3 & 0x3f;
          param_1[0x12] = *pbVar3 & 0x80;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)pbVar6;
          goto LAB_0046a78d;
        }
        param_1[0x10] = '\x05';
        goto LAB_0046a725;
      }
      param_1[0x10] = '\x03';
      *pbVar1 = *pbVar6 & 0x3f;
      bVar2 = *pbVar6;
    }
    pbVar6 = pbVar6 + 2;
    param_1[0x12] = bVar2 & 0x80;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)pbVar6;
  }
LAB_0046a78d:
  param_1 = param_1 + 0x11;
  pbVar6 = pbVar6 + 4;
  *(byte **)(pcVar4 + 0xc) = pbVar6;
  sVar5 = _strlen((char *)pbVar6);
  pbVar6 = pbVar6 + sVar5 + 1;
  if (*param_1 == '\a') {
    *(undefined4 *)(pcVar4 + 0x28) = *(undefined4 *)pbVar6;
  }
  else {
    if ((*param_1 != '\n') || (pcVar4[0x12] != '\0')) goto LAB_0046a7c1;
    *(undefined4 *)(pcVar4 + 0x24) = *(undefined4 *)pbVar6;
  }
  pbVar6 = pbVar6 + 4;
LAB_0046a7c1:
  *(int *)(pcVar4 + 0x18) = *(int *)(pcVar4 + 0x2c) + *(int *)(pcVar4 + 0x14);
  *(byte **)(pcVar4 + 0x30) = pbVar6;
  return 1;
}


