// Function: FUN_00402cce
// Entry: 00402cce
// Size: 337 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00402cce(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int _Value;
  char *pcVar4;
  ulonglong uVar5;
  
  iVar2 = FUN_004021ab(param_2);
  uVar3 = FUN_004021ab(param_3);
  uVar5 = FUN_0040b400((uint)((ulonglong)param_4 * (ulonglong)uVar3),
                       (int)((ulonglong)param_4 * (ulonglong)uVar3 >> 0x20) +
                       ((int)uVar3 >> 0x1f) * param_4 + param_5 * uVar3,0x6400000,0);
  _Value = (int)uVar5;
  if ((int)uVar5 < iVar2) {
    _Value = iVar2;
  }
  if (_Value < 1) {
    return;
  }
  if (((DAT_00418c4c._1_1_ & 1) == 0) && (0x400 < _Value)) {
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Heap limit:\tReduced %d MB heap size to 32-bit maximum %d MB\n",_Value,
              0x400);
    }
    _Value = 0x400;
  }
  if (DAT_00410a2c != (FILE *)0x0) {
    fprintf(DAT_00410a2c,"Heap %s:\tRequested %d MB / %d%%, Available: %d MB, Heap size: %d MB\n",
            param_6,iVar2,uVar3,param_4 >> 0x14 | param_5 << 0xc,_Value);
  }
  strcat(param_1,param_6);
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _itoa(_Value,param_1 + (~uVar3 - 1),10);
  strcat(param_1,"m ");
  return;
}


