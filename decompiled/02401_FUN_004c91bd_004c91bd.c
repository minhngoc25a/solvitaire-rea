// Function: FUN_004c91bd
// Entry: 004c91bd
// Size: 246 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004c91bd(byte param_1,FILE *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  
  __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    param_3[6] = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) == 0) {
LAB_004c9242:
        LOCK();
        param_2->_flag = param_2->_flag | 2;
        UNLOCK();
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffff7;
        UNLOCK();
        param_2->_base = (char *)0x0;
        if ((param_2->_flag & 0x4c0U) == 0) {
          uVar3 = FUN_00485a51(param_2);
          if ((char)uVar3 == '\0') {
            ___acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
          }
        }
        cVar2 = FUN_004c93ad(param_1,param_2,param_3);
        if (cVar2 == '\0') {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)param_1;
        }
        return uVar4;
      }
      bVar1 = stream_is_at_end_of_file_nolock(param_2);
      param_2->_base = (char *)0x0;
      if (bVar1) {
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
        goto LAB_004c9242;
      }
      goto LAB_004c91e7;
    }
    param_3[6] = 0x22;
  }
  *(undefined1 *)(param_3 + 7) = 1;
LAB_004c91e7:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return 0xffffffff;
}


