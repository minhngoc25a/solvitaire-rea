// Function: FUN_0050b23a
// Entry: 0050b23a
// Size: 60 bytes
// Thunk: false
// External: false


int __thiscall FUN_0050b23a(void *this,uint param_1)

{
  int iVar1;
  
  __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(this);
  iVar1 = __crt_win32_buffer_internal_dynamic_resizing::allocate
                    ((void **)((int)this + 8),param_1,this);
  if (iVar1 == 0) {
    *(undefined1 *)((int)this + 0x14) = 1;
    iVar1 = 0;
    *(uint *)((int)this + 0xc) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  return iVar1;
}


