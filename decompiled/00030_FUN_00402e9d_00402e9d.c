// Function: FUN_00402e9d
// Entry: 00402e9d
// Size: 356 bytes
// Thunk: false
// External: false


void __cdecl FUN_00402e9d(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *_DstBuf;
  char local_120 [272];
  
  iVar3 = FUN_0040206e(0xc,param_1);
  if (iVar3 != 0) {
    strcat(param_1," ");
  }
  pcVar6 = local_120;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  uVar5 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  strncpy(local_120,param_2,~uVar5 - 4);
  strcat(local_120,"l4j.ini");
  iVar3 = _open(local_120,0);
  if (iVar3 != -1) {
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Loading:\t%s\n",local_120);
    }
    uVar5 = 0xffffffff;
    iVar7 = 0;
    bVar2 = true;
    pcVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _DstBuf = param_1 + (~uVar5 - 1);
    iVar4 = _read(iVar3,_DstBuf,0x7c00 - (~uVar5 - 1));
    pcVar6 = _DstBuf;
    for (; iVar7 < iVar4; iVar7 = iVar7 + 1) {
      cVar1 = _DstBuf[iVar7];
      if (cVar1 == '#') {
        bVar2 = false;
      }
      else if ((cVar1 == '\n') || (cVar1 == '\r')) {
        bVar2 = true;
        if ((param_1 < pcVar6) && (pcVar6[-1] != ' ')) {
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        }
      }
      else if (bVar2) {
        *pcVar6 = cVar1;
        bVar2 = true;
        pcVar6 = pcVar6 + 1;
      }
    }
    *pcVar6 = '\0';
    if ((0 < iVar4) && (pcVar6[-1] != ' ')) {
      strcat(param_1," ");
    }
    _close(iVar3);
  }
  return;
}


