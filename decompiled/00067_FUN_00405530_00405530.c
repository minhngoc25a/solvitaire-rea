// Function: FUN_00405530
// Entry: 00405530
// Size: 543 bytes
// Thunk: false
// External: false


int __fastcall FUN_00405530(uint param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int _C;
  byte *pbVar9;
  
  if (*param_2 == 0x2e) {
    uVar7 = (uint)(char)*in_EAX;
    if (*in_EAX == 0x2e) {
      uVar7 = 0x2e;
    }
    else if ((param_1 & 0x10000) == 0) {
      return uVar7 - 0x2e;
    }
  }
  else {
    uVar7 = (uint)*in_EAX;
  }
  do {
    cVar6 = (char)uVar7;
    iVar8 = (int)cVar6;
    pbVar9 = in_EAX + 1;
    if (iVar8 == 0) {
      return -(int)(char)*param_2;
    }
    if (cVar6 == '?') {
      if (*param_2 == 0) {
        return 0x3f;
      }
    }
    else if (cVar6 == '[') {
      iVar8 = (int)(char)*param_2;
      if (iVar8 == 0) {
        return 0x5b;
      }
      if (in_EAX[1] == 0x21) {
        pbVar9 = in_EAX + 2;
        pcVar5 = FUN_004052c0(param_1,iVar8);
        if (pcVar5 == (char *)0x0) {
          bVar2 = in_EAX[2];
          if (bVar2 == 0x5d) {
            pbVar9 = in_EAX + 3;
            bVar2 = in_EAX[3];
          }
          while (bVar2 != 0x5d) {
            if (bVar2 == 0x7f) {
              if ((param_1 & 0x20) == 0) {
                bVar2 = pbVar9[1];
                pbVar9 = pbVar9 + 1;
                goto LAB_00405700;
              }
            }
            else {
LAB_00405700:
              if (bVar2 == 0) {
                return 0x5d;
              }
            }
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar9;
          }
          pbVar9 = pbVar9 + 1;
        }
      }
      else {
        pbVar9 = (byte *)FUN_004052c0(param_1,iVar8);
        if (pbVar9 == (byte *)0x0) {
          return 0x5d;
        }
      }
    }
    else {
      if (cVar6 == '*') {
        bVar2 = in_EAX[1];
        while (bVar2 == 0x2a) {
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar9;
        }
        if (bVar2 != 0) {
          do {
            iVar8 = FUN_00405530(param_1 | 0x10000,param_2);
            if (iVar8 == 0) {
              return 0;
            }
            bVar2 = *param_2;
            param_2 = param_2 + 1;
          } while (bVar2 != 0);
          return iVar8;
        }
        return 0;
      }
      pbVar1 = pbVar9;
      if (((param_1 & 0x20) == 0) && (iVar8 == 0x7f)) {
        iVar8 = (int)(char)in_EAX[1];
        pbVar1 = in_EAX + 2;
        if (iVar8 == 0) {
          pbVar1 = pbVar9;
        }
      }
      pbVar9 = pbVar1;
      _C = (int)(char)*param_2;
      if (*param_2 == 0) {
        _C = 0;
LAB_004055d6:
        return iVar8 - _C;
      }
      if ((param_1 & 0x4000) == 0) {
        iVar3 = tolower(iVar8);
        iVar4 = tolower(_C);
        iVar3 = iVar3 - iVar4;
      }
      else {
        iVar3 = iVar8 - _C;
      }
      if (iVar3 != 0) goto LAB_004055d6;
    }
    uVar7 = (uint)*pbVar9;
    in_EAX = pbVar9;
    param_2 = param_2 + 1;
  } while( true );
}


