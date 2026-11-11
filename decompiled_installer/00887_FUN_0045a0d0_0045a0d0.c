// Function: FUN_0045a0d0
// Entry: 0045a0d0
// Size: 445 bytes
// Thunk: false
// External: false


int __cdecl FUN_0045a0d0(undefined4 param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  int iVar5;
  longlong lVar6;
  int in_stack_00000024;
  int in_stack_00000034;
  
  cVar2 = *(char *)((int)param_4 + 0x159);
  iVar5 = 0;
  piVar1 = (int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = 0;
  if ((cVar2 != '\0') &&
     (FUN_0048d570(piVar1,(uint *)((int)param_4 + 0x159),0x9b),
     *(char *)(*piVar1 + -1 + *(int *)(param_2 + 0x10)) != '/')) {
    FUN_0048cf00(piVar1,0x2f);
  }
  FUN_0048d570(piVar1,param_4,100);
  iVar3 = FUN_0048cbc0(param_3,(uint *)*piVar1,*(uint *)(param_2 + 0x10),*(DWORD *)(param_2 + 0xf4))
  ;
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_2 + 0xf4);
    p_Var4 = FUN_0042470e();
    if (*(int *)p_Var4 == 0xc) {
      FUN_00487380(param_5,0xc,0x524ebc);
      return -0x1e;
    }
    FUN_0048d2b0(iVar5);
    FUN_00487380(param_5,0x2a,0x52a264);
    iVar5 = -0x14;
  }
  iVar3 = FUN_00459bd0(param_5,param_2,param_3,(int)param_4);
  if (iVar3 == -0x1e) {
    return -0x1e;
  }
  if (iVar3 < iVar5) {
    iVar5 = iVar3;
  }
  iVar3 = FUN_0048cc10(param_3,(uint *)((int)param_4 + 0x109),0x20,*(DWORD *)(param_2 + 0xf4));
  if ((iVar3 != 0) &&
     (iVar5 = FUN_0045d500(in_stack_00000024,*(int *)(param_2 + 0xf4)), iVar5 == -0x1e)) {
    return -0x1e;
  }
  iVar3 = FUN_0048cb40(param_3,(uint *)((int)param_4 + 0x129),0x20,*(DWORD *)(param_2 + 0xf4));
  if ((iVar3 != 0) &&
     (iVar5 = FUN_0045d500(in_stack_00000034,*(int *)(param_2 + 0xf4)), iVar5 == -0x1e)) {
    return -0x1e;
  }
  if (((char)param_4[0x27] == '3') || ((char)param_4[0x27] == '4')) {
    lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x149),8);
    FUN_0048c780(param_3,(int)lVar6);
    lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x151),8);
    FUN_0048c7a0(param_3,(int)lVar6);
  }
  *(undefined4 *)(param_2 + 0xa4) = 0;
  *(uint *)(param_2 + 0xa0) = -*(int *)(param_2 + 0x90) & 0x1ff;
  return iVar5;
}


