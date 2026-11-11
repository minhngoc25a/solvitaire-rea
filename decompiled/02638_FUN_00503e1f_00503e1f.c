// Function: FUN_00503e1f
// Entry: 00503e1f
// Size: 340 bytes
// Thunk: false
// External: false


void __cdecl FUN_00503e1f(uint param_1,undefined2 *param_2,int param_3)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  undefined2 *local_2c;
  int local_28;
  undefined2 *local_24;
  int local_20;
  undefined4 local_1c;
  char local_18;
  short *local_14;
  short local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if (param_3 < 0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    goto LAB_00503f65;
  }
  if (param_1 == 0) {
    param_1 = __getdrive();
    if (param_1 != 0) goto LAB_00503e8d;
    local_10 = 0x2e;
    local_e = 0;
LAB_00503eb7:
    if (param_2 == (undefined2 *)0x0) {
      local_2c = (undefined2 *)0x0;
      local_28 = 0;
      local_24 = (undefined2 *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_18 = '\0';
      allocate(&local_2c,param_3);
      local_14 = &local_10;
      iVar2 = call_win32_function<>(&local_2c,&local_14);
      if (iVar2 == 0) {
        FUN_004e6f83(&local_2c);
        if (local_18 != '\0') {
          FUN_0047d191(local_24);
        }
      }
      else if (local_18 != '\0') {
        FUN_0047d191(local_24);
      }
      goto LAB_00503f65;
    }
    if (0 < param_3) {
      local_2c = param_2;
      *param_2 = 0;
      local_1c = 0;
      local_18 = '\0';
      local_14 = &local_10;
      local_28 = param_3;
      local_24 = param_2;
      local_20 = param_3;
      __crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::
      call_win32_function<<lambda_33d632c04396b3de813369f94278cf6d>_>
                ((__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing> *)&local_2c,
                 (<lambda_33d632c04396b3de813369f94278cf6d> *)&local_14);
      goto LAB_00503f65;
    }
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
  }
  else {
    iVar2 = FUN_00503da0(param_1);
    if (iVar2 != 0) {
LAB_00503e8d:
      local_10 = (short)param_1 + 0x40;
      local_e = 0x3a;
      local_c = 0x2e;
      local_a = 0;
      goto LAB_00503eb7;
    }
    p_Var1 = FUN_00424721();
    *(undefined4 *)p_Var1 = 0xf;
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0xd;
  }
  FUN_004243be();
LAB_00503f65:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


