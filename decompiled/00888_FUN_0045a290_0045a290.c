// Function: FUN_0045a290
// Entry: 0045a290
// Size: 678 bytes
// Thunk: false
// External: false


int __cdecl FUN_0045a290(int param_1,int param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  int in_stack_00000028;
  uint in_stack_0000002c;
  uint *in_stack_00000044;
  
  iVar4 = param_3;
  iVar2 = param_2;
  iVar3 = FUN_00459bd0(param_1,param_2,param_3,(int)param_4);
  if ((((iVar3 == -0x1e) ||
       ((iVar3 = FUN_0048cbc0(param_3,param_4,100,*(DWORD *)(param_2 + 0xf4)), iVar3 != 0 &&
        (iVar3 = FUN_0045d500(param_1,*(int *)(param_2 + 0xf4)), iVar3 == -0x1e)))) ||
      ((iVar3 = FUN_0048cc10(param_3,(uint *)((int)param_4 + 0x109),0x20,*(DWORD *)(param_2 + 0xf4))
       , iVar3 != 0 && (iVar3 = FUN_0045d500(param_1,*(int *)(param_2 + 0xf4)), iVar3 == -0x1e))))
     || ((iVar3 = FUN_0048cb40(param_3,(uint *)((int)param_4 + 0x129),0x20,
                               *(DWORD *)(param_2 + 0xf4)), iVar3 != 0 &&
         (in_stack_00000028 = FUN_0045d500(param_1,*(int *)(param_2 + 0xf4)),
         in_stack_00000028 == -0x1e)))) {
    return -0x1e;
  }
  if (((char)param_4[0x27] == '3') || ((char)param_4[0x27] == '4')) {
    lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x149),8);
    FUN_0048c780(param_3,(int)lVar6);
    lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x151),8);
    FUN_0048c7a0(param_3,(int)lVar6);
  }
  else {
    FUN_0048c760(param_3,0);
  }
  *(undefined4 *)(param_2 + 0xa4) = 0;
  *(uint *)(param_2 + 0xa0) = -*(int *)(param_2 + 0x90) & 0x1ff;
  lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x159),0xc);
  if ((-1 < lVar6) && (lVar6 != 0)) {
    FUN_0048c2a0(param_3,(uint)lVar6,(int)((ulonglong)lVar6 >> 0x20),0);
  }
  lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x165),0xc);
  if ((-1 < lVar6) && (lVar6 != 0)) {
    FUN_0048c3e0(param_3,(uint)lVar6,(int)((ulonglong)lVar6 >> 0x20),0);
  }
  if (*(char *)((int)param_4 + 0x1e3) != '\0') {
    lVar6 = FUN_0045cc30((byte *)((int)param_4 + 0x1e3),0xc);
    param_2 = (int)lVar6;
    param_3 = (int)((ulonglong)lVar6 >> 0x20);
    *(longlong *)(iVar2 + 0xb0) = lVar6;
    FUN_0048c7c0(iVar4,param_2,param_3);
    *(undefined4 *)(iVar2 + 0x110) = 1;
  }
  if (*(char *)((int)param_4 + 0x182) != '\0') {
    iVar4 = FUN_00459950(param_1,iVar2,(byte *)((int)param_4 + 0x182),4);
    if (iVar4 != 0) {
      return -0x1e;
    }
    if (*(char *)((int)param_4 + 0x1e2) != '\0') {
      do {
        if (*in_stack_00000044 != 0) {
          FUN_00488f20(param_1,(ulonglong)*in_stack_00000044);
          *in_stack_00000044 = 0;
        }
        pbVar5 = (byte *)FUN_00488710(param_1,0x200,&stack0x0000002c);
        if ((int)in_stack_0000002c < 0) {
          return -0x1e;
        }
        if ((int)in_stack_0000002c < 0x200) {
          FUN_00487380(param_1,0x2a,0x5288f8);
          return -0x1e;
        }
        *in_stack_00000044 = 0x200;
        iVar4 = FUN_00459950(param_1,iVar2,pbVar5,0x15);
        if (iVar4 != 0) {
          return -0x1e;
        }
      } while (pbVar5[0x1f8] != 0);
      iVar4 = *(int *)(iVar2 + 0xbc);
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(iVar2 + 0x9c) = uVar1;
      }
    }
  }
  return in_stack_00000028;
}


