// Function: FUN_0046f4b0
// Entry: 0046f4b0
// Size: 327 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_0046f4b0(char *param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  pcVar2 = (char *)(param_2 + -1);
  iVar4 = 0;
  local_8 = 1;
  bVar1 = false;
  *pcVar2 = '\0';
  if (pcVar2 <= param_1) {
    return CONCAT44(1,pcVar2);
  }
  while ((param_4 != 0 || (uVar3 = local_8, iVar4 < (int)local_8))) {
    do {
      iVar5 = iVar4;
      uVar3 = local_8;
      switch(param_3) {
      case 2:
        local_8 = 2;
      case 1:
        pcVar2 = pcVar2 + -1;
        uVar3 = param_4 / 10;
        *pcVar2 = "0123456789ABCDEF"[param_4 % 10];
        param_4 = uVar3;
        break;
      case 4:
        local_8 = 2;
      case 3:
        pcVar2 = pcVar2 + -1;
        *pcVar2 = "0123456789ABCDEF"[param_4 & 0xf];
        param_4 = param_4 >> 4;
        break;
      case 5:
        local_8 = 5;
        if ((bVar1) ||
           (uVar3 = (uint)((ulonglong)param_4 * 0xcccccccd >> 0x20), param_4 != (param_4 / 10) * 10)
           ) {
          bVar1 = true;
          pcVar2 = pcVar2 + -1;
          uVar3 = (param_4 / 10) * 10;
          *pcVar2 = "0123456789ABCDEF"[param_4 % 10];
        }
        param_4 = param_4 / 10;
        goto LAB_0046f5ac;
      default:
        param_4 = 0;
      }
      if (param_3 != 5) goto LAB_0046f5d3;
LAB_0046f5ac:
      if (iVar5 != 4) goto LAB_0046f5d3;
      if (pcVar2 <= param_1) goto LAB_0046f5e4;
      if (bVar1) {
        pcVar2 = pcVar2 + -1;
        *pcVar2 = '.';
        goto LAB_0046f5d3;
      }
      iVar4 = 5;
    } while (param_4 != 0);
    pcVar2 = pcVar2 + -1;
    *pcVar2 = '0';
    uVar3 = local_8;
LAB_0046f5d3:
    iVar4 = iVar5 + 1;
    if (pcVar2 <= param_1) break;
  }
LAB_0046f5e4:
  return CONCAT44(uVar3,pcVar2);
}


