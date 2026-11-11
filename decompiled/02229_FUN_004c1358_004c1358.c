// Function: FUN_004c1358
// Entry: 004c1358
// Size: 341 bytes
// Thunk: false
// External: false


int __cdecl FUN_004c1358(int param_1,char param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  __acrt_ptd *p_Var4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_248 [137];
  int *local_24;
  undefined4 **local_20;
  int local_1c;
  __crt_seh_guarded_call<void> local_15;
  undefined4 *local_14;
  
  FUN_004c12b8(param_3,param_4);
  local_1c = getSystemCP(param_1);
  if (local_1c == *(int *)(*(int *)(param_3 + 0x48) + 4)) {
    iVar2 = 0;
  }
  else {
    puVar3 = __malloc_base(0x220);
    iVar2 = local_1c;
    local_14 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004247be((LPVOID)0x0);
      iVar2 = -1;
    }
    else {
      puVar6 = *(undefined4 **)(param_3 + 0x48);
      puVar7 = local_248;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = local_248;
      puVar7 = puVar3;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *puVar3 = 0;
      iVar2 = FUN_004c0fdf(iVar2,(int)puVar3);
      if (iVar2 == -1) {
        p_Var4 = FUN_0042470e();
        *(undefined4 *)p_Var4 = 0x16;
        FUN_004247be(local_14);
        iVar2 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_0047e22f();
        }
        piVar1 = *(int **)(param_3 + 0x48);
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (*(undefined **)(param_3 + 0x48) != &DAT_00540e48)) {
          FUN_004247be(*(LPVOID *)(param_3 + 0x48));
        }
        *local_14 = 1;
        *(undefined4 **)(param_3 + 0x48) = local_14;
        if ((*(uint *)(param_3 + 0x350) & DAT_00540e44) == 0) {
          local_24 = &param_3;
          local_20 = &param_4;
          local_1c = 5;
          local_14 = (undefined4 *)0x5;
          __crt_seh_guarded_call<void>::
          operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>
                    (&local_15,(<lambda_ceb1ee4838e85a9d631eb091e2fbe199> *)&local_14,
                     (<lambda_ae742caa10f662c28703da3d2ea5e57e> *)&local_24,
                     (<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> *)&local_1c);
          if (param_2 != '\0') {
            PTR_DAT_0054074c = (undefined *)*param_4;
          }
        }
        FUN_004247be((LPVOID)0x0);
      }
    }
  }
  return iVar2;
}


