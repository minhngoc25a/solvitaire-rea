// Function: FUN_00479c50
// Entry: 00479c50
// Size: 364 bytes
// Thunk: false
// External: false


int FUN_00479c50(char *param_1,int param_2,byte *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  cVar1 = '\0';
  iVar6 = 0;
  if (DAT_00544138 == 0) {
    DAT_00544138 = 1;
    iVar3 = 0x41;
    do {
      (&DAT_00544038)[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
      cVar1 = cVar1 + '\x01';
    } while (iVar3 < 0x5b);
    iVar3 = 0x61;
    do {
      cVar2 = cVar1;
      (&DAT_00544038)[iVar3] = cVar2;
      iVar3 = iVar3 + 1;
      DAT_00544068 = cVar2 + '\x01';
      cVar1 = DAT_00544068;
    } while (iVar3 < 0x7b);
    DAT_00544069 = cVar2 + '\x02';
    DAT_0054406a = cVar2 + '\x03';
    DAT_0054406b = cVar2 + '\x04';
    DAT_0054406c = cVar2 + '\x05';
    DAT_0054406d = cVar2 + '\x06';
    DAT_0054406e = cVar2 + '\a';
    DAT_0054406f = cVar2 + '\b';
    DAT_00544070 = cVar2 + '\t';
    DAT_00544071 = cVar2 + '\n';
    DAT_00544063 = cVar2 + '\v';
    DAT_00544067 = cVar2 + '\f';
    DAT_00544065 = DAT_00544063;
    DAT_00544097 = DAT_00544067;
  }
  if (0 < param_4) {
    for (; 0 < param_2; param_2 = param_2 + -4) {
      for (; ((cVar1 = *param_1, cVar1 == '\n' || (cVar1 == '\r')) || (cVar1 == '\t'));
          param_1 = param_1 + 1) {
        param_2 = param_2 + -1;
      }
      if ((param_2 < 2) || (param_4 <= iVar6)) {
        return 0;
      }
      iVar3 = iVar6 + 1;
      pcVar4 = param_1 + 2;
      uVar5 = ((int)(char)(&DAT_00544038)[cVar1] << 6 | (int)(char)(&DAT_00544038)[param_1[1]]) <<
              0xc;
      *param_3 = (byte)(uVar5 >> 0x10);
      pbVar7 = param_3 + 1;
      if (((0 < param_2 + -2) && (cVar1 = *pcVar4, cVar1 != '\0')) && (cVar1 != '=')) {
        if (param_4 <= iVar3) {
          return 0;
        }
        pcVar4 = param_1 + 3;
        uVar5 = uVar5 | (int)(char)(&DAT_00544038)[cVar1] << 6;
        *pbVar7 = (byte)(uVar5 >> 8);
        pbVar7 = param_3 + 2;
        iVar3 = iVar6 + 2;
      }
      if (((0 < param_2 + -3) && (cVar1 = *pcVar4, cVar1 != '\0')) && (cVar1 != '=')) {
        if (param_4 <= iVar3) {
          return 0;
        }
        pcVar4 = pcVar4 + 1;
        *pbVar7 = (&DAT_00544038)[cVar1] | (byte)uVar5;
        pbVar7 = pbVar7 + 1;
        iVar3 = iVar3 + 1;
      }
      iVar6 = iVar3;
      param_1 = pcVar4;
      param_3 = pbVar7;
    }
  }
  return iVar6;
}


