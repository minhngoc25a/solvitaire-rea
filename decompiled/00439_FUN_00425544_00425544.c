// Function: FUN_00425544
// Entry: 00425544
// Size: 130 bytes
// Thunk: false
// External: false


int * __thiscall FUN_00425544(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  __acrt_ptd *p_Var4;
  undefined *puVar5;
  
  *(undefined1 *)((int)this + 0xc) = 0;
  piVar1 = (int *)((int)this + 4);
  if (param_1 == (int *)0x0) {
    puVar3 = PTR_PTR_00540748;
    puVar5 = PTR_DAT_0054074c;
    if (DAT_005441f0 != 0) {
      p_Var4 = FUN_0047dbec();
      *(__acrt_ptd **)this = p_Var4;
      *piVar1 = *(int *)(p_Var4 + 0x4c);
      *(int *)((int)this + 8) = *(int *)(p_Var4 + 0x48);
      ___acrt_update_locale_info((int)p_Var4,piVar1);
      FUN_00481ecc(*(int *)this,(int *)((int)this + 8));
      uVar2 = *(uint *)(*(int *)this + 0x350);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar2 | 2;
      *(undefined1 *)((int)this + 0xc) = 1;
      return this;
    }
  }
  else {
    puVar3 = (undefined *)*param_1;
    puVar5 = (undefined *)param_1[1];
  }
  *piVar1 = (int)puVar3;
  *(undefined **)((int)this + 8) = puVar5;
  return this;
}


