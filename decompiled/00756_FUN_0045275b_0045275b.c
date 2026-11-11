// Function: FUN_0045275b
// Entry: 0045275b
// Size: 53 bytes
// Thunk: false
// External: false


uint __thiscall FUN_0045275b(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  
  piVar1 = *(int **)((int)this + 0x6c);
  *(int **)((int)this + 0x6c) = piVar1 + 1;
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 == (undefined4 *)0x0) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x16;
    uVar5 = FUN_004243be();
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    uVar3 = *param_1;
    *puVar2 = uVar3;
    uVar5 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar5;
}


