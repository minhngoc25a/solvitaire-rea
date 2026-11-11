// Function: FUN_00420a6d
// Entry: 00420a6d
// Size: 167 bytes
// Thunk: false
// External: false


void FUN_00420a6d(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar6;
  
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07((int)DAT_005434a8);
  }
  else {
    puVar1 = (undefined4 *)FUN_004258d0((int)DAT_005434a8,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      if ((int)puVar1[4] < 2) {
        DVar3 = GetObjectType((HGDIOBJ)*puVar1);
        if (DVar3 == 7) {
          DeleteObject((HICON)*puVar1);
          iVar4 = extraout_ECX_01;
          iVar5 = extraout_EDX_01;
        }
        else {
          DestroyIcon((HICON)*puVar1);
          iVar4 = extraout_ECX_02;
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        iVar6 = 0;
        do {
          puVar2 = FUN_0047a30e((undefined4 *)puVar1[7],iVar6);
          DVar3 = GetObjectType((HGDIOBJ)*puVar2);
          if (DVar3 == 7) {
            DeleteObject((HICON)*puVar2);
            iVar4 = extraout_ECX;
            iVar5 = extraout_EDX;
          }
          else {
            DestroyIcon((HICON)*puVar2);
            iVar4 = extraout_ECX_00;
            iVar5 = extraout_EDX_00;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)puVar1[4]);
      }
      if (puVar1[7] != 0) {
        FUN_0046a4ef(iVar4,iVar5,(undefined4 *)puVar1[7]);
      }
      FUN_00425965(DAT_005434a8,(int)param_1);
    }
  }
  return;
}


