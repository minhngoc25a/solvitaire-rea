// Function: FUN_0046f210
// Entry: 0046f210
// Size: 331 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f210(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char local_d8 [216];
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x11c);
    iVar6 = 0;
    iVar8 = 0x18;
    do {
      uVar3 = uVar2 >> ((byte)iVar8 & 0x1f);
      iVar8 = iVar8 + -8;
      uVar5 = uVar3 & 0xff;
      if ((uVar5 - 0x41 < 0x3a) && ((uVar5 < 0x5b || (0x60 < uVar5)))) {
        local_d8[iVar6] = (char)uVar3;
        iVar4 = iVar6;
      }
      else {
        local_d8[iVar6] = '[';
        local_d8[iVar6 + 1] = (&DAT_0050db90)[uVar5 >> 4];
        local_d8[iVar6 + 2] = (&DAT_0050db90)[uVar3 & 0xf];
        iVar4 = iVar6 + 3;
        local_d8[iVar6 + 3] = ']';
      }
      iVar6 = iVar4 + 1;
    } while (-1 < iVar8);
    if (param_2 == 0) {
      local_d8[iVar4 + 1] = '\0';
    }
    else {
      local_d8[iVar4 + 1] = ':';
      local_d8[iVar4 + 2] = ' ';
      pcVar7 = (char *)(param_2 + 2);
      iVar4 = iVar4 + 3;
      do {
        if (pcVar7[-2] == '\0') break;
        local_d8[iVar4] = pcVar7[-2];
        if (pcVar7[-1] == '\0') {
          iVar4 = iVar4 + 1;
          break;
        }
        local_d8[iVar4 + 1] = pcVar7[-1];
        if (*pcVar7 == '\0') {
          iVar4 = iVar4 + 2;
          break;
        }
        local_d8[iVar4 + 2] = *pcVar7;
        if (pcVar7[1] == '\0') {
          iVar4 = iVar4 + 3;
          break;
        }
        local_d8[iVar4 + 3] = pcVar7[1];
        pcVar1 = pcVar7 + 2;
        if (*pcVar1 == '\0') {
          iVar4 = iVar4 + 4;
          break;
        }
        pcVar7 = pcVar7 + 5;
        local_d8[iVar4 + 4] = *pcVar1;
        iVar4 = iVar4 + 5;
      } while ((int)(pcVar7 + (-2 - param_2)) < 0xc3);
      local_d8[iVar4] = '\0';
    }
    iVar6 = 0;
    if (local_d8[0] == '#') {
      iVar6 = 1;
      do {
        if (local_d8[iVar6] == ' ') break;
        if (local_d8[iVar6 + 1] == ' ') {
          iVar6 = iVar6 + 1;
          break;
        }
        iVar6 = iVar6 + 2;
      } while (iVar6 < 0xf);
    }
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
      (**(code **)(param_1 + 0x50))(param_1,local_d8 + iVar6);
    }
  }
  return;
}


