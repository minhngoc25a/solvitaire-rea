// Function: FUN_0048ee80
// Entry: 0048ee80
// Size: 555 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048ee80(uint *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_3 == 0) || (uVar4 = (uint)*param_2, uVar4 == 0)) {
    return 0;
  }
  iVar3 = (int)(char)(&DAT_00518798)[uVar4];
  if (param_3 < iVar3) {
    iVar1 = 1;
    iVar3 = param_3;
    if (1 < param_3) {
      while (iVar3 = iVar1, (param_2[iVar1] & 0xc0) == 0x80) {
        iVar1 = iVar1 + 1;
        if (param_3 <= iVar1) {
          *param_1 = 0xfffd;
          return -param_3;
        }
      }
    }
  }
  else {
    switch(iVar3) {
    case 1:
      *param_1 = uVar4 & 0x7f;
      return iVar3;
    case 2:
      if ((param_2[1] & 0xc0) == 0x80) {
        *param_1 = (int)(char)param_2[1] & 0x3fU | (uVar4 & 0x1f) << 6;
        return iVar3;
      }
LAB_0048ef09:
      *param_1 = 0xfffd;
      return -1;
    case 3:
      if ((param_2[1] & 0xc0) != 0x80) goto LAB_0048ef09;
      if ((param_2[2] & 0xc0) != 0x80) {
LAB_0048ef50:
        *param_1 = 0xfffd;
        return -2;
      }
      uVar4 = ((int)(char)param_2[1] & 0x3fU | (uVar4 & 0xf) << 6) << 6 |
              (int)(char)param_2[2] & 0x3fU;
      bVar5 = uVar4 < 0x800;
      break;
    case 4:
      if ((param_2[1] & 0xc0) != 0x80) goto LAB_0048ef09;
      if ((param_2[2] & 0xc0) != 0x80) goto LAB_0048ef50;
      if ((param_2[3] & 0xc0) != 0x80) {
        *param_1 = 0xfffd;
        return -3;
      }
      uVar4 = (((int)(char)param_2[1] & 0x3fU | (uVar4 & 7) << 6) << 6 |
              (int)(char)param_2[2] & 0x3fU) << 6 | (int)(char)param_2[3] & 0x3fU;
      bVar5 = uVar4 < 0x10000;
      break;
    default:
      if ((uVar4 == 0xc0) || (uVar4 == 0xc1)) {
        iVar1 = 2;
      }
      else if (uVar4 - 0xf5 < 3) {
        iVar1 = 4;
      }
      else if (uVar4 - 0xf8 < 4) {
        iVar1 = 5;
      }
      else if ((uVar4 == 0xfc) || (uVar4 == 0xfd)) {
        iVar1 = 6;
      }
      else {
        iVar1 = 1;
      }
      iVar2 = 1;
      if (param_3 < iVar1) {
        iVar1 = param_3;
      }
      iVar3 = iVar1;
      if (1 < iVar1) {
        while (iVar3 = iVar2, (param_2[iVar2] & 0xc0) == 0x80) {
          iVar2 = iVar2 + 1;
          if (iVar1 <= iVar2) {
            *param_1 = 0xfffd;
            return -iVar1;
          }
        }
      }
      goto LAB_0048f093;
    }
    if ((!bVar5) && (uVar4 < 0x110000)) {
      *param_1 = uVar4;
      return iVar3;
    }
  }
LAB_0048f093:
  *param_1 = 0xfffd;
  return -iVar3;
}


