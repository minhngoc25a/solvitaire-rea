// Function: FUN_004a44f4
// Entry: 004a44f4
// Size: 410 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a44f4(FILE *param_1)

{
  byte bVar1;
  LPWSTR pWVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_004243be();
  }
  else if ((((uint)param_1->_flag >> 0xd & 1) != 0) && (((uint)param_1->_flag >> 0xc & 1) == 0)) {
    if (((uint)param_1->_flag >> 1 & 1) == 0) {
      LOCK();
      param_1->_flag = param_1->_flag | 1;
      UNLOCK();
      if ((param_1->_flag & 0x4c0U) == 0) {
        ___acrt_stdio_allocate_buffer_nolock(&param_1->_ptr);
      }
      param_1->_ptr = (char *)param_1->_cnt;
      uVar7 = param_1->_bufsiz;
      pWVar2 = (LPWSTR)param_1->_cnt;
      uVar4 = __fileno(param_1);
      pcVar5 = (char *)FUN_004a3b74(uVar4,pWVar2,uVar7);
      param_1->_base = pcVar5;
      pcVar5 = param_1->_base;
      if ((pcVar5 != (char *)0x0) && (pcVar5 != (char *)0xffffffff)) {
        if ((param_1->_flag & 6U) == 0) {
          iVar6 = __fileno(param_1);
          if ((iVar6 == -1) || (iVar6 = __fileno(param_1), iVar6 == -2)) {
            puVar8 = &DAT_00540760;
          }
          else {
            iVar6 = __fileno(param_1);
            uVar7 = __fileno(param_1);
            puVar8 = (undefined *)((&DAT_00544378)[iVar6 >> 6] + (uVar7 & 0x3f) * 0x38);
          }
          if ((puVar8[0x28] & 0x82) == 0x82) {
            LOCK();
            param_1->_flag = param_1->_flag | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_bufsiz == 0x200) && (((uint)param_1->_flag >> 6 & 1) != 0)) &&
           ((param_1->_flag & 0x100U) == 0)) {
          param_1->_bufsiz = 0x1000;
        }
        param_1->_base = param_1->_base + -1;
        bVar1 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (uint)bVar1;
      }
      LOCK();
      param_1->_flag = param_1->_flag | (uint)(pcVar5 != (char *)0x0) * 8 + 8;
      UNLOCK();
      param_1->_base = (char *)0x0;
    }
    else {
      LOCK();
      param_1->_flag = param_1->_flag | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}


