// Function: FUN_0048580d
// Entry: 0048580d
// Size: 312 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048580d(WCHAR param_1,FILE *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int local_14;
  byte local_10 [8];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if (((uint)param_2->_flag >> 0xc & 1) == 0) {
    iVar1 = __fileno(param_2);
    if ((iVar1 == -1) || (iVar1 = __fileno(param_2), iVar1 == -2)) {
      puVar3 = &DAT_00540760;
    }
    else {
      iVar1 = __fileno(param_2);
      uVar2 = __fileno(param_2);
      puVar3 = (undefined *)((&DAT_00544378)[iVar1 >> 6] + (uVar2 & 0x3f) * 0x38);
    }
    puVar4 = &DAT_00540760;
    if ((puVar3[0x29] != '\x02') && (puVar3[0x29] != '\x01')) {
      iVar1 = __fileno(param_2);
      if ((iVar1 != -1) && (iVar1 = __fileno(param_2), iVar1 != -2)) {
        iVar1 = __fileno(param_2);
        uVar2 = __fileno(param_2);
        puVar4 = (undefined *)((&DAT_00544378)[iVar1 >> 6] + (uVar2 & 0x3f) * 0x38);
      }
      if ((char)puVar4[0x28] < '\0') {
        iVar1 = FUN_004848ed(&local_14,local_10,5,param_1,param_3);
        if ((iVar1 == 0) && (iVar1 = 0, 0 < local_14)) {
          do {
            uVar2 = FUN_00485979(local_10[iVar1],param_2,param_3);
            if (uVar2 == 0xffffffff) break;
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_14);
        }
        goto LAB_00485937;
      }
    }
    FUN_00485945(param_1,param_2,param_3);
  }
  else {
    FUN_00485945(param_1,param_2,param_3);
  }
LAB_00485937:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


