// Function: ___libm_error_support
// Entry: 004a340f
// Size: 500 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2019 Release */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  undefined4 local_24;
  char *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  if (DAT_005449c0 == 0) {
    pcVar2 = FUN_004f071c;
  }
  else {
    pcVar2 = DecodePointer(DAT_005449c4);
  }
  if (0x1a < param_4) {
    if (param_4 != 0x1b) {
      if (param_4 == 0x1c) {
        local_20 = "pow";
      }
      else if (param_4 == 0x31) {
        local_20 = "sqrt";
      }
      else if (param_4 == 0x3a) {
        local_20 = "acos";
      }
      else {
        if (param_4 != 0x3d) {
          if ((param_4 != 1000) && (param_4 != 0x3e9)) {
            return;
          }
          uVar1 = *param_1;
          goto LAB_004a3517;
        }
        local_20 = "asin";
      }
      goto LAB_004a3577;
    }
    local_24 = 2;
LAB_004a35bd:
    local_20 = "pow";
    goto LAB_004a35c4;
  }
  if (param_4 == 0x1a) {
    uVar1 = 0x3ff0000000000000;
LAB_004a3517:
    *param_3 = uVar1;
    return;
  }
  if (0xe < param_4) {
    if (param_4 == 0xf) {
      local_20 = "exp";
    }
    else {
      if (param_4 == 0x18) {
        local_24 = 3;
        goto LAB_004a35bd;
      }
      if (param_4 != 0x19) {
        return;
      }
      local_20 = "pow";
    }
    local_24 = 4;
    local_1c = *param_1;
    local_14 = *param_2;
    local_c = *param_3;
    (*(code *)PTR_guard_check_icall_00532084)(&local_24);
    (*pcVar2)();
    goto LAB_004a35fa;
  }
  if (param_4 == 0xe) {
    local_24 = 3;
    local_20 = "exp";
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 3) {
        local_20 = "log";
      }
      else {
        if (param_4 == 8) {
          local_24 = 2;
          local_20 = "log10";
          goto LAB_004a35c4;
        }
        if (param_4 != 9) {
          return;
        }
        local_20 = "log10";
      }
LAB_004a3577:
      local_24 = 1;
      local_1c = *param_1;
      local_14 = *param_2;
      local_c = *param_3;
      (*(code *)PTR_guard_check_icall_00532084)(&local_24);
      iVar3 = (*pcVar2)();
      if (iVar3 == 0) {
        p_Var4 = FUN_0042470e();
        *(undefined4 *)p_Var4 = 0x21;
      }
      goto LAB_004a35fa;
    }
    local_24 = 2;
    local_20 = "log";
  }
LAB_004a35c4:
  local_1c = *param_1;
  local_14 = *param_2;
  local_c = *param_3;
  (*(code *)PTR_guard_check_icall_00532084)(&local_24);
  iVar3 = (*pcVar2)();
  if (iVar3 == 0) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x22;
  }
LAB_004a35fa:
  *param_3 = local_c;
  return;
}


