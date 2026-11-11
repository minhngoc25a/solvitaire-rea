// Function: FUN_0050ae47
// Entry: 0050ae47
// Size: 372 bytes
// Thunk: false
// External: false


void __cdecl FUN_0050ae47(char *param_1,undefined4 *param_2,char *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar1 = !bVar1;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
      bVar2 = bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = __ismbblead((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_0050aed6;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_0050aed6:
  bVar1 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar4 = 0;
      for (; *pcVar6 == '\\'; pcVar6 = pcVar6 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar2 = false;
            bVar1 = !bVar1;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar1 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar2) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = __ismbblead((int)*pcVar6);
        if (iVar5 != 0) {
          pcVar6 = pcVar6 + 1;
          *param_5 = *param_5 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


