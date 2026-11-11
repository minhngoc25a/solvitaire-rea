// Function: FUN_004245c7
// Entry: 004245c7
// Size: 72 bytes
// Thunk: false
// External: false


undefined4 * __thiscall FUN_004245c7(void *this,undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = PTR_PTR_00540748;
    puVar2 = PTR_DAT_0054074c;
    if (DAT_005441f0 != 0) {
      return this;
    }
  }
  else {
    puVar1 = (undefined *)*param_1;
    puVar2 = (undefined *)param_1[1];
  }
  *(undefined1 *)((int)this + 0x14) = 1;
  *(undefined **)((int)this + 0x10) = puVar2;
  *(undefined **)((int)this + 0xc) = puVar1;
  return this;
}


