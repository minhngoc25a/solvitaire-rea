// Function: FUN_004d2d23
// Entry: 004d2d23
// Size: 597 bytes
// Thunk: false
// External: false


undefined4 __thiscall FUN_004d2d23(void *this,char *param_1,byte param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  longlong lVar5;
  uint in_stack_00000020;
  char *in_stack_00000024;
  int local_c;
  void *local_8;
  
  iVar4 = 0;
  *in_stack_00000024 = '\0';
  if (-1 < *(char *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + ((uint)param_1 & 0x3f) * 0x38)) {
    return 0;
  }
  local_8 = this;
  if ((in_stack_00000020 & 0x74000) == 0) {
    local_8 = (void *)0x0;
    iVar1 = FUN_004e750a(&local_8);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (((uint)local_8 & 0x74000) == 0) {
      in_stack_00000020 = in_stack_00000020 | 0x4000;
    }
    else {
      in_stack_00000020 = in_stack_00000020 | (uint)local_8 & 0x74000;
    }
  }
  uVar2 = in_stack_00000020 & 0x74000;
  local_c = 2;
  if (uVar2 == 0x4000) {
    *in_stack_00000024 = '\0';
  }
  else if ((uVar2 == 0x10000) || (uVar2 == 0x14000)) {
    if ((in_stack_00000020 & 0x301) == 0x301) goto LAB_004d2dd8;
  }
  else if ((uVar2 == 0x20000) || (uVar2 == 0x24000)) {
LAB_004d2dd8:
    *in_stack_00000024 = '\x02';
  }
  else if ((uVar2 == 0x40000) || (uVar2 == 0x44000)) {
    *in_stack_00000024 = '\x01';
  }
  if ((in_stack_00000020 & 0x70000) == 0) {
    return 0;
  }
  if ((param_2 & 0x40) != 0) {
    return 0;
  }
  uVar2 = param_3 & 0xc0000000;
  if (uVar2 == 0x40000000) {
LAB_004d2e16:
    if ((param_4 != 1) && (param_4 != 2)) {
      if ((param_4 == 3) || (param_4 == 4)) {
        lVar5 = FUN_0049d4a3((uint)param_1,0,0,(PLARGE_INTEGER)0x2);
        if (lVar5 != 0) {
          lVar5 = FUN_0049d4a3((uint)param_1,0,0,(PLARGE_INTEGER)0x0);
          if (lVar5 == -1) goto LAB_004d2e6e;
          if ((param_3 & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_004d2e83;
        }
      }
      else if (param_4 != 5) {
        return 0;
      }
    }
    if (*in_stack_00000024 == '\x01') {
      local_c = 3;
      local_8 = (void *)0xbfbbef;
    }
    else {
      if (*in_stack_00000024 != '\x02') {
        return 0;
      }
      local_8 = (void *)0xfeff;
    }
    while (iVar1 = FUN_004f0e5e(param_1,(uint *)((int)&local_8 + iVar4),local_c - iVar4),
          iVar1 != -1) {
      iVar4 = iVar4 + iVar1;
      if (local_c <= iVar4) {
        return 0;
      }
    }
    goto LAB_004d2e6e;
  }
  if (uVar2 != 0x80000000) {
    if (uVar2 != 0xc0000000) {
      return 0;
    }
    goto LAB_004d2e16;
  }
LAB_004d2e83:
  local_8 = (void *)0x0;
  uVar2 = FUN_004a3c8d((uint)param_1,(LPWSTR)&local_8,3);
  if (((int)uVar2 < 1) && (uVar2 == 0xffffffff)) goto LAB_004d2e6e;
  if (uVar2 == 2) {
LAB_004d2ec1:
    if (((uint)local_8 & 0xffff) == 0xfffe) {
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 0x16;
      goto LAB_004d2e6e;
    }
    if (((uint)local_8 & 0xffff) == 0xfeff) {
      lVar5 = FUN_0049d4a3((uint)param_1,2,0,(PLARGE_INTEGER)0x0);
      if (lVar5 != -1) {
        *in_stack_00000024 = '\x02';
        return 0;
      }
      goto LAB_004d2e6e;
    }
  }
  else if (uVar2 == 3) {
    if (local_8 == (void *)0xbfbbef) {
      *in_stack_00000024 = '\x01';
      return 0;
    }
    goto LAB_004d2ec1;
  }
  lVar5 = FUN_0049d4a3((uint)param_1,0,0,(PLARGE_INTEGER)0x0);
  if (lVar5 != -1) {
    return 0;
  }
LAB_004d2e6e:
  p_Var3 = FUN_0042470e();
  return *(undefined4 *)p_Var3;
}


