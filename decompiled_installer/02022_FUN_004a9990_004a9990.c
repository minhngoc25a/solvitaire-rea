// Function: FUN_004a9990
// Entry: 004a9990
// Size: 349 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a9990(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x238) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x23c);
    }
    if ((param_4 == 3) || ((param_4 == 2 && ((*(uint *)(param_1 + 0x11c) & 0x20000000) != 0)))) {
      iVar2 = FUN_004aa200(param_1,param_3);
      if (iVar2 == 0) goto LAB_004a9a99;
LAB_004a9a48:
      if (param_4 != 3) goto LAB_004a9a4d;
LAB_004a9a5e:
      iVar2 = *(int *)(param_1 + 0x280);
      if (iVar2 == 0) {
LAB_004a9a7e:
        FUN_004a5900(param_1,param_2,param_1 + 0x288,1);
        goto LAB_004a9a94;
      }
      if (iVar2 != 1) {
        if (iVar2 != 2) {
          *(int *)(param_1 + 0x280) = iVar2 + -1;
          goto LAB_004a9a7e;
        }
        *(undefined4 *)(param_1 + 0x280) = 1;
        FUN_0046f3d0(param_1,0x52744c);
      }
    }
    else {
      FUN_004a5f90(param_1,param_3);
LAB_004a9a4d:
      if (param_4 == 2) {
LAB_004a9a52:
        if ((*(uint *)(param_1 + 0x11c) & 0x20000000) != 0) goto LAB_004a9a5e;
      }
    }
  }
  else {
    iVar2 = FUN_004aa200(param_1,param_3);
    if (iVar2 == 0) goto LAB_004a9a99;
    iVar2 = (**(code **)(param_1 + 0x238))(param_1,param_1 + 0x288);
    if (iVar2 < 0) goto LAB_004a9ae7;
    if (iVar2 == 0) {
      if (1 < param_4) goto LAB_004a9a48;
      if (*(int *)(param_1 + 0x23c) < 2) {
        FUN_0046f210(param_1,0x5296a4);
        FUN_0046f610(param_1,
                     "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks");
      }
      goto LAB_004a9a52;
    }
LAB_004a9a94:
    bVar1 = true;
  }
LAB_004a9a99:
  if (*(LPVOID *)(param_1 + 0x290) != (LPVOID)0x0) {
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x290));
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if ((bVar1) || ((*(uint *)(param_1 + 0x11c) & 0x20000000) != 0)) {
    return;
  }
LAB_004a9ae7:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


