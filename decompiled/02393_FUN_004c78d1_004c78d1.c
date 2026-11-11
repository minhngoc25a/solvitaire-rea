// Function: FUN_004c78d1
// Entry: 004c78d1
// Size: 250 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004c78d1(uint *param_1,uint param_2,int param_3,int *param_4,int param_5,int param_6,
            int *param_7)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  char cVar7;
  char *pcVar8;
  
  if (param_1 == (uint *)0x0) {
    *(undefined1 *)(param_7 + 7) = 1;
    param_7[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
    return 0x16;
  }
  if (param_2 != 0) {
    *(undefined1 *)param_1 = 0;
    iVar4 = param_3;
    if (param_3 < 1) {
      iVar4 = 0;
    }
    if (param_2 <= iVar4 + 1U) {
      iVar4 = 0x22;
      goto LAB_004c792a;
    }
    if (param_4 != (int *)0x0) {
      pcVar1 = (char *)param_4[2];
      pcVar8 = (char *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0x30;
      pcVar5 = pcVar1;
      for (; 0 < param_3; param_3 = param_3 + -1) {
        cVar7 = *pcVar5;
        if (cVar7 == '\0') {
          cVar7 = '0';
        }
        else {
          pcVar5 = pcVar5 + 1;
        }
        *pcVar8 = cVar7;
        pcVar8 = pcVar8 + 1;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) &&
         (bVar3 = FUN_004c79ee((int)pcVar1,pcVar5,*param_4,param_5,param_6), bVar3)) {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if ((char)*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        puVar6 = (uint *)((int)param_1 + 1);
        do {
          uVar2 = *puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while ((char)uVar2 != '\0');
        FUN_0044c490(param_1,(uint *)((int)param_1 + 1),(int)puVar6 + (1 - ((int)param_1 + 2)));
      }
      return 0;
    }
  }
  iVar4 = 0x16;
LAB_004c792a:
  param_7[6] = iVar4;
  *(undefined1 *)(param_7 + 7) = 1;
  FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  return iVar4;
}


