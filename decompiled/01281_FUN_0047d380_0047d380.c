// Function: FUN_0047d380
// Entry: 0047d380
// Size: 209 bytes
// Thunk: false
// External: false


int FUN_0047d380(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  pbVar2 = param_1;
  pbVar3 = param_1;
  if (0 < param_2) {
    do {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2;
      if (bVar1 == 0) break;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          pbVar3 = pbVar2 + 1;
          if ((pbVar2[1] & 0xc0) == 0x80) {
            pbVar3 = pbVar2 + 2;
            iVar4 = iVar4 + 1;
          }
        }
        else if (((bVar1 & 0xf0) == 0xe0) && (pbVar2[1] != 0)) {
          if ((pbVar2[1] & 0xc0) == 0x80) {
            if ((pbVar2[2] & 0xc0) == 0x80) {
              pbVar3 = pbVar2 + 3;
              iVar4 = iVar4 + 1;
            }
            else {
LAB_0047d436:
              pbVar3 = pbVar2 + 2;
            }
          }
          else {
LAB_0047d43b:
            pbVar3 = pbVar2 + 1;
          }
        }
        else {
          if (((bVar1 & 0xf8) != 0xf0) ||
             (((pbVar2[1] == 0 || (pbVar2[2] == 0)) || ((pbVar2[1] & 0xc0) != 0x80))))
          goto LAB_0047d43b;
          if ((pbVar2[2] & 0xc0) != 0x80) goto LAB_0047d436;
          if ((pbVar2[3] & 0xc0) == 0x80) {
            pbVar3 = pbVar2 + 4;
            iVar4 = iVar4 + 1;
          }
          else {
            pbVar3 = pbVar2 + 3;
          }
        }
      }
      else {
        pbVar3 = pbVar2 + 1;
        iVar4 = iVar4 + 1;
      }
      pbVar2 = pbVar3;
    } while (iVar4 < param_2);
  }
  return (int)pbVar3 - (int)param_1;
}


