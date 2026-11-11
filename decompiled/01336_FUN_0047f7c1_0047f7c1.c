// Function: FUN_0047f7c1
// Entry: 0047f7c1
// Size: 52 bytes
// Thunk: false
// External: false


void __thiscall FUN_0047f7c1(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004c2925(*(short **)this,*(int *)((int)this + 4),param_1,param_2);
  if (iVar1 == 0) {
    *(undefined1 *)((int)this + 0xc) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


