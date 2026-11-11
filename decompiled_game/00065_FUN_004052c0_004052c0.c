// Function: FUN_004052c0
// Entry: 004052c0
// Size: 495 bytes
// Thunk: false
// External: false


char * __fastcall FUN_004052c0(uint param_1,int param_2)

{
  char *in_EAX;
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  cVar1 = *in_EAX;
  iVar4 = (int)cVar1;
  if ((iVar4 == 0x5d) || (iVar4 == 0x2d)) {
    if (iVar4 == param_2) {
      pcVar3 = in_EAX + 1;
LAB_00405480:
      do {
        cVar1 = *pcVar3;
        if (cVar1 == ']') goto LAB_004054b5;
        if (cVar1 == '\x7f') {
          if ((param_1 & 0x20) != 0) {
            pcVar3 = pcVar3 + 1;
            goto LAB_00405480;
          }
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
        }
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return (char *)0x0;
        }
      } while( true );
    }
    cVar1 = in_EAX[1];
    in_EAX = in_EAX + 1;
  }
LAB_0040530e:
  iVar2 = (int)cVar1;
  pcVar3 = in_EAX + 1;
  if (iVar2 == 0x5d) {
    return (char *)0x0;
  }
  if (iVar2 == 0x2d) {
    if (in_EAX[1] == ']') {
      iVar4 = 0x2d;
      cVar1 = ']';
      in_EAX = pcVar3;
      if (param_2 == 0x2d) goto LAB_004053d8;
      goto LAB_0040530e;
    }
    iVar2 = (int)in_EAX[1];
    if (iVar2 == 0) {
      return (char *)0x0;
    }
    pcVar3 = in_EAX + 2;
    for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      if (iVar4 == param_2) {
        goto LAB_00405416;
      }
    }
    if (iVar4 <= iVar2) goto LAB_004052ed;
    if (param_2 == iVar4) {
LAB_0040537f:
      goto LAB_00405385;
    }
    while (iVar4 != iVar2 + 1) {
      iVar4 = iVar4 + -1;
      if (param_2 == iVar4) goto LAB_0040537f;
    }
  }
  else if (iVar2 == 0) {
    return (char *)0x0;
  }
LAB_004052ed:
  if (iVar2 == 0x5c) {
    return (char *)0x0;
  }
  if (iVar2 == 0x2f) {
    return (char *)0x0;
  }
  cVar1 = *pcVar3;
  in_EAX = pcVar3;
  iVar4 = iVar2;
  if (iVar2 == param_2) goto LAB_004053d8;
  goto LAB_0040530e;
LAB_00405416:
  cVar1 = *pcVar3;
  if (cVar1 != ']') {
    do {
      if (cVar1 == '\x7f') {
        if ((param_1 & 0x20) != 0) goto LAB_00405450;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3 = pcVar3 + 1;
      if (cVar1 == '\0') {
        return (char *)0x0;
      }
      cVar1 = *pcVar3;
      if (cVar1 == ']') break;
    } while( true );
  }
  goto LAB_00405433;
LAB_00405450:
  pcVar3 = pcVar3 + 1;
  goto LAB_00405416;
LAB_00405385:
  cVar1 = *pcVar3;
  if (cVar1 == ']') {
LAB_00405433:
    return pcVar3 + 1;
  }
  if (cVar1 == '\x7f') {
    if ((param_1 & 0x20) != 0) {
      pcVar3 = pcVar3 + 1;
      goto LAB_00405385;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = pcVar3 + 1;
  if (cVar1 == '\0') {
    return (char *)0x0;
  }
  goto LAB_00405385;
LAB_004053d8:
  do {
    if (cVar1 == ']') {
LAB_004054b5:
      return pcVar3 + 1;
    }
    if (cVar1 == '\x7f') {
      if ((param_1 & 0x20) == 0) {
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        goto LAB_004053e0;
      }
    }
    else {
LAB_004053e0:
      if (cVar1 == '\0') {
        return (char *)0x0;
      }
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  } while( true );
}


