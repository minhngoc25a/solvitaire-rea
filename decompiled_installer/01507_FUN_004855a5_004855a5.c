// Function: FUN_004855a5
// Entry: 004855a5
// Size: 238 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004855a5(char *param_1,uint param_2,size_t param_3,int *param_4,char param_5,int *param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  
  bVar2 = false;
  iVar3 = param_4[1];
  if ((param_5 != '\0') && (iVar3 - 1U == param_3)) {
    iVar1 = *param_4;
    (param_1 + (uint)(iVar1 == 0x2d) + (iVar3 - 1U))[0] = '0';
    (param_1 + (uint)(iVar1 == 0x2d) + (iVar3 - 1U))[1] = '\0';
  }
  pcVar4 = param_1;
  if (*param_4 == 0x2d) {
    pcVar4 = param_1 + 1;
    *param_1 = '-';
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (*(char *)param_4[2] == '0')) {
      bVar2 = true;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      shift_bytes(param_1,param_2,pcVar4,1);
    }
    *pcVar4 = '0';
    iVar3 = 1;
  }
  pcVar4 = pcVar4 + iVar3;
  if (0 < (int)param_3) {
    shift_bytes(param_1,param_2,pcVar4,1);
    if ((char)param_6[5] == '\0') {
      FUN_0044ef90(param_6);
    }
    *pcVar4 = *(char *)**(undefined4 **)(param_6[3] + 0x88);
    if (param_4[1] < 0) {
      sVar5 = -param_4[1];
      if ((param_5 != '\0') || ((int)sVar5 < (int)param_3)) {
        param_3 = sVar5;
      }
      shift_bytes(param_1,param_2,pcVar4 + 1,param_3);
      _memset(pcVar4 + 1,0x30,param_3);
    }
  }
  return 0;
}


