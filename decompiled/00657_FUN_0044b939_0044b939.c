// Function: FUN_0044b939
// Entry: 0044b939
// Size: 170 bytes
// Thunk: false
// External: false


undefined4 * FUN_0044b939(wchar_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *pFVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == (wchar_t *)0x0) {
    if (0 < DAT_005435a0) {
      do {
        puVar2 = (undefined4 *)(**(code **)(&DAT_005435c0)[iVar4])(0,param_2,param_3,param_4);
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = (&DAT_005435c0)[iVar4];
          puVar2[1] = 0;
          goto LAB_0044b9d8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_005435a0);
    }
  }
  else if (0 < DAT_005435a0) {
    do {
      pFVar1 = __wfopen(param_1,L"rb");
      if (pFVar1 != (FILE *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(&DAT_005435c0)[iVar4])(pFVar1,0,0,param_4);
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = (&DAT_005435c0)[iVar4];
          puVar2[1] = pFVar1;
LAB_0044b9d8:
          *puVar2 = uVar3;
          return puVar2;
        }
        FUN_0047ccbd(pFVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_005435a0);
  }
  return (undefined4 *)0x0;
}


