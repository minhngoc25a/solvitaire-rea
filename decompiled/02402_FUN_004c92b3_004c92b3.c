// Function: FUN_004c92b3
// Entry: 004c92b3
// Size: 250 bytes
// Thunk: false
// External: false


undefined2 __cdecl FUN_004c92b3(undefined2 param_1,FILE *param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    param_3[6] = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) == 0) {
LAB_004c933a:
        LOCK();
        param_2->_flag = param_2->_flag | 2;
        UNLOCK();
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffff7;
        UNLOCK();
        param_2->_base = (char *)0x0;
        if (((param_2->_flag & 0x4c0U) == 0) && (uVar2 = FUN_00485a51(param_2), (char)uVar2 == '\0')
           ) {
          ___acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
        }
        bVar1 = FUN_004c947f(param_1,param_2,param_3);
        if (!bVar1) {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          param_1 = 0xffff;
        }
        return param_1;
      }
      bVar1 = stream_is_at_end_of_file_nolock(param_2);
      param_2->_base = (char *)0x0;
      if (bVar1) {
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
        goto LAB_004c933a;
      }
      goto LAB_004c92dd;
    }
    param_3[6] = 0x22;
  }
  *(undefined1 *)(param_3 + 7) = 1;
LAB_004c92dd:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return 0xffff;
}


