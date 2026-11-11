// Function: FUN_00435440
// Entry: 00435440
// Size: 194 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00435440(uint param_1,char *param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  
  pcVar5 = param_2;
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    if (param_4 - 2 < 0x23) {
      if ((-1 < (int)param_1) || (param_2 = (char *)0xffffffff, param_4 != 10)) {
        param_2 = (char *)0x1;
      }
      uVar6 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
      pcVar4 = pcVar5;
      do {
        pcVar3 = pcVar4;
        uVar1 = (ulonglong)uVar6;
        uVar6 = uVar6 / param_4;
        cVar2 = 'W';
        if ((int)(uVar1 % (ulonglong)param_4) < 10) {
          cVar2 = '0';
        }
        *pcVar3 = cVar2 + (char)(uVar1 % (ulonglong)param_4);
        pcVar4 = pcVar3 + 1;
        param_3 = param_3 + -1;
      } while ((param_3 != 0) && (uVar6 != 0));
      if (param_3 != 0) {
        if (-1 < (int)param_2) {
LAB_004354d8:
          *pcVar4 = '\0';
          pcVar4 = pcVar4 + -1;
          if (pcVar5 < pcVar4) {
            do {
              cVar2 = *pcVar5;
              *pcVar5 = *pcVar4;
              pcVar5 = pcVar5 + 1;
              *pcVar4 = cVar2;
              pcVar4 = pcVar4 + -1;
            } while (pcVar5 < pcVar4);
          }
          return 0;
        }
        *pcVar4 = '-';
        pcVar4 = pcVar3 + 2;
        if (param_3 != 1) goto LAB_004354d8;
      }
    }
    *pcVar5 = '\0';
  }
  return 0x16;
}


