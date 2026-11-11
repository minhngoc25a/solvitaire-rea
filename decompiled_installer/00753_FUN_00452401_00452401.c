// Function: FUN_00452401
// Entry: 00452401
// Size: 354 bytes
// Thunk: false
// External: false


uint __thiscall FUN_00452401(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  bool bVar11;
  undefined1 *local_1c;
  int local_8;
  
  puVar9 = (undefined1 *)0x0;
  if (*(char *)((int)this + 0x2e) == '\0') {
    puVar1 = *(undefined4 **)((int)this + 0x6c);
    *(undefined4 **)((int)this + 0x6c) = puVar1 + 1;
    puVar9 = (undefined1 *)*puVar1;
    if (puVar9 == (undefined1 *)0x0) {
      p_Var4 = FUN_0042470e();
      *(undefined4 *)p_Var4 = 0x16;
      p_Var4 = (__acrt_ptd *)FUN_004243be();
      goto LAB_00452436;
    }
    if ((*(uint *)this & 1) == 0) goto LAB_00452478;
    *(undefined4 **)((int)this + 0x6c) = puVar1 + 2;
    iVar10 = puVar1[1];
    if (iVar10 == 0) {
      if ((*(uint *)this & 4) != 0) {
        __crt_stdio_input::string_input_adapter<char>::get
                  ((string_input_adapter<char> *)((int)this + 8));
        *puVar9 = 0;
      }
LAB_0045246b:
      p_Var4 = FUN_0042470e();
      *(undefined4 *)p_Var4 = 0xc;
      goto LAB_00452436;
    }
  }
  else {
LAB_00452478:
    iVar10 = -1;
  }
  uVar2 = *(uint *)((int)this + 0x30);
  uVar3 = *(uint *)((int)this + 0x34);
  local_8 = iVar10;
  if ((param_1 != 0) && (iVar10 != -1)) {
    local_8 = iVar10 + -1;
  }
  uVar8 = 0;
  uVar7 = 0;
  local_1c = puVar9;
  while( true ) {
    if (((uVar2 != 0 || uVar3 != 0) && (uVar8 == uVar2)) && (uVar7 == uVar3)) goto LAB_00452522;
    uVar5 = __crt_stdio_input::string_input_adapter<char>::get
                      ((string_input_adapter<char> *)((int)this + 8));
    uVar6 = FUN_00451fe8(this,param_1,uVar5);
    if ((char)uVar6 == '\0') break;
    if (*(char *)((int)this + 0x2e) == '\0') {
      if (local_8 == 0) {
        if (iVar10 != -1) {
          *puVar9 = 0;
        }
        goto LAB_0045246b;
      }
      *local_1c = (char)uVar5;
      local_1c = local_1c + 1;
      local_8 = local_8 + -1;
    }
    bVar11 = 0xfffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar7 = uVar7 + bVar11;
  }
  __crt_stdio_input::string_input_adapter<char>::unget
            ((string_input_adapter<char> *)((int)this + 8),uVar5);
LAB_00452522:
  puVar9 = (undefined1 *)(uVar8 | uVar7);
  p_Var4 = (__acrt_ptd *)0x0;
  if (puVar9 == (undefined1 *)0x0) {
LAB_00452436:
    return (uint)p_Var4 & 0xffffff00;
  }
  if ((param_1 == 0) && ((uVar8 != uVar2 || (uVar7 != uVar3)))) {
    puVar9 = (undefined1 *)(*(uint *)this & 4);
    p_Var4 = (__acrt_ptd *)0x0;
    if (puVar9 == (undefined1 *)0x0) goto LAB_00452436;
  }
  if ((*(char *)((int)this + 0x2e) == '\0') && (param_1 != 0)) {
    *local_1c = 0;
    puVar9 = local_1c;
  }
  return CONCAT31((int3)((uint)puVar9 >> 8),1);
}


