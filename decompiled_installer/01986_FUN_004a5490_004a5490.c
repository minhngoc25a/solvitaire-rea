// Function: FUN_004a5490
// Entry: 004a5490
// Size: 369 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a5490(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_4)) && (param_3 != 0)) {
    puVar3 = FUN_004a49b0(param_1,*(uint **)(param_2 + 0xf4),*(int *)(param_2 + 0xf8),param_4,0x10);
    if (puVar3 == (uint *)0x0) {
      FUN_0046f6d0(param_1,"too many sPLT chunks",1);
      return;
    }
    FUN_004a48e0(param_1,*(LPVOID *)(param_2 + 0xf4));
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x20;
    *(uint **)(param_2 + 0xf4) = puVar3;
    puVar3 = puVar3 + *(int *)(param_2 + 0xf8) * 4;
    puVar6 = (uint *)(param_3 + 0xc);
    do {
      if ((puVar6[-3] == 0) || (puVar6[-1] == 0)) {
        FUN_0046f670(param_1,"png_set_sPLT: invalid sPLT");
      }
      else {
        *(char *)(puVar3 + 1) = (char)puVar6[-2];
        pcVar4 = (char *)puVar6[-3];
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        puVar5 = (uint *)FUN_004a4910(param_1,(SIZE_T)(pcVar4 + (1 - (int)pcVar1)));
        *puVar3 = (uint)puVar5;
        if (puVar5 == (uint *)0x0) break;
        FUN_0044c490(puVar5,(uint *)puVar6[-3],(uint)(pcVar4 + (1 - (int)pcVar1)));
        puVar5 = (uint *)FUN_004a4950(param_1,*puVar6,10);
        puVar3[2] = (uint)puVar5;
        if (puVar5 == (uint *)0x0) {
          FUN_004a48e0(param_1,(LPVOID)*puVar3);
          *puVar3 = 0;
          break;
        }
        puVar3[3] = *puVar6;
        FUN_0044c490(puVar5,(uint *)puVar6[-1],*puVar6 * 10);
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
        *(int *)(param_2 + 0xf8) = *(int *)(param_2 + 0xf8) + 1;
        puVar3 = puVar3 + 4;
        puVar6 = puVar6 + 4;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (0 < param_4) {
      FUN_0046f6d0(param_1,"sPLT out of memory",1);
    }
  }
  return;
}


