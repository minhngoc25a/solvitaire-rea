// Function: FUN_00417e6d
// Entry: 00417e6d
// Size: 156 bytes
// Thunk: false
// External: false


undefined8 FUN_00417e6d(LPCWSTR param_1,uint param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint local_8;
  int iStack_4;
  
  pcVar2 = (char *)FUN_00453575(param_1);
  if (pcVar2 == (char *)0x0) goto LAB_00417f03;
  for (; (cVar1 = *pcVar2, cVar1 == ' ' || (cVar1 == '\t')); pcVar2 = pcVar2 + 1) {
  }
  bVar4 = false;
  if (cVar1 == '-') {
    bVar4 = true;
LAB_00417ea5:
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  else if (cVar1 == '+') goto LAB_00417ea5;
  iStack_4 = 0;
  local_8 = 0;
  param_2 = local_8;
  if (cVar1 != '\0') {
    cVar1 = *pcVar2;
    do {
      if ((cVar1 < '0') || ('9' < cVar1)) break;
      lVar5 = __allmul(param_2,iStack_4,10,0);
      uVar3 = (uint)(lVar5 + (int)cVar1);
      param_2 = uVar3 - 0x30;
      iStack_4 = (int)((ulonglong)(lVar5 + (int)cVar1) >> 0x20) - (uint)(uVar3 < 0x30);
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    } while (cVar1 != '\0');
  }
  param_3 = iStack_4;
  if (bVar4) {
    bVar4 = param_2 != 0;
    param_2 = -param_2;
    param_3 = -(iStack_4 + (uint)bVar4);
  }
LAB_00417f03:
  return CONCAT44(param_3,param_2);
}


