// Function: FUN_004a3931
// Entry: 004a3931
// Size: 261 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_004a3931(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  iVar2 = *param_4;
  do {
    if (iVar2 == -1) {
      return in_EAX;
    }
    piVar3 = param_4 + 1;
    if (iVar2 == -7) {
      uVar6 = *(undefined4 *)(*piVar3 + param_3);
      piVar3 = param_4 + 2 + param_4[2] + 4;
LAB_004a3a1d:
      (*DAT_0054415c)(uVar6);
      param_1 = extraout_ECX_03;
      param_2 = extraout_EDX_03;
    }
    else if (iVar2 == -6) {
      iVar2 = *piVar3;
      piVar3 = param_4 + 6;
      (*DAT_00544164)(*(undefined4 *)(iVar2 + param_3));
      param_1 = extraout_ECX_02;
      param_2 = extraout_EDX_02;
    }
    else if (iVar2 == -5) {
      iVar2 = *piVar3;
      piVar3 = param_4 + 5;
      (*DAT_00544160)(*(undefined4 *)(iVar2 + param_3));
      param_1 = extraout_ECX_01;
      param_2 = extraout_EDX_01;
    }
    else {
      if (iVar2 == -4) {
        iVar2 = *piVar3;
        piVar3 = param_4 + 6;
        uVar6 = *(undefined4 *)(iVar2 + param_3);
        goto LAB_004a3a1d;
      }
      if (iVar2 == -3) {
        iVar2 = *piVar3;
        piVar3 = param_4 + 4;
        FUN_004a3931(iVar2,param_2,iVar2 + param_3,(int *)param_4[3]);
        param_1 = extraout_ECX_00;
        param_2 = extraout_EDX_00;
      }
      else if (iVar2 == -2) {
        iVar2 = *piVar3;
        iVar1 = param_4[3];
        param_1 = param_4[4];
        param_2 = param_4[2];
        piVar3 = param_4 + 5;
        if (0 < iVar2) {
          iVar4 = param_2 + param_3;
          do {
            FUN_004a3931(param_1,param_2,iVar4,(int *)param_1);
            iVar4 = iVar4 + iVar1;
            iVar2 = iVar2 + -1;
            param_2 = extraout_EDX;
          } while (iVar2 != 0);
        }
      }
      else if (*(int *)(iVar2 + param_3) != 0) {
        uVar5 = FUN_00424120(param_1,param_2,*(LPVOID *)(iVar2 + param_3));
        param_2 = (int)((ulonglong)uVar5 >> 0x20);
        param_1 = extraout_ECX;
      }
    }
    iVar2 = *piVar3;
    param_4 = piVar3;
  } while( true );
}


