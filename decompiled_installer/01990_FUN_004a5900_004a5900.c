// Function: FUN_004a5900
// Entry: 004a5900
// Size: 277 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a5900(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint *puVar2;
  SIZE_T SVar3;
  SIZE_T *pSVar4;
  SIZE_T *pSVar5;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_4)) && (param_3 != 0)) {
    puVar2 = FUN_004a49b0(param_1,*(uint **)(param_2 + 0xec),*(int *)(param_2 + 0xf0),param_4,0x14);
    if (puVar2 == (uint *)0x0) {
      FUN_0046f6d0(param_1,"too many unknown chunks",1);
      return;
    }
    FUN_004a48e0(param_1,*(LPVOID *)(param_2 + 0xec));
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x200;
    pSVar5 = (SIZE_T *)(param_3 + 0xc);
    *(uint **)(param_2 + 0xec) = puVar2;
    pSVar4 = puVar2 + *(int *)(param_2 + 0xf0) * 5;
    do {
      *pSVar4 = pSVar5[-3];
      *(undefined1 *)(pSVar4 + 1) = 0;
      bVar1 = FUN_004a5d30(param_1,(byte)pSVar5[1]);
      *(byte *)(pSVar4 + 4) = bVar1;
      if (*pSVar5 == 0) {
        pSVar4[2] = 0;
        SVar3 = 0;
LAB_004a59f8:
        pSVar4[3] = SVar3;
        pSVar4 = pSVar4 + 5;
        *(int *)(param_2 + 0xf0) = *(int *)(param_2 + 0xf0) + 1;
      }
      else {
        puVar2 = (uint *)FUN_004a4910(param_1,*pSVar5);
        pSVar4[2] = (SIZE_T)puVar2;
        if (puVar2 != (uint *)0x0) {
          FUN_0044c490(puVar2,(uint *)pSVar5[-1],*pSVar5);
          SVar3 = *pSVar5;
          goto LAB_004a59f8;
        }
        FUN_0046f6d0(param_1,"unknown chunk: out of memory",1);
      }
      param_4 = param_4 + -1;
      pSVar5 = pSVar5 + 5;
    } while (0 < param_4);
  }
  return;
}


