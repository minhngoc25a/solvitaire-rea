// Function: FUN_0045e5b0
// Entry: 0045e5b0
// Size: 227 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0045e5b0(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  __acrt_ptd *p_Var3;
  uint *puVar4;
  char *pcVar5;
  
  uVar1 = FUN_0048c9d0(param_2);
  if ((uVar1 & 0x3c00) == 0) {
    if ((param_4 & 0x100) == 0) {
      if ((param_4 & 0x200) == 0) {
        return 0xffffffe2;
      }
      pcVar5 = "SCHILY.acl.default";
    }
    else {
      pcVar5 = "SCHILY.acl.access";
    }
  }
  else {
    pcVar5 = "SCHILY.acl.ace";
  }
  puVar2 = (uint *)FUN_0048cb30(param_2,0,param_4,*(undefined4 **)(param_3 + 0x40));
  if (puVar2 == (uint *)0x0) {
    p_Var3 = FUN_0042470e();
    if (*(int *)p_Var3 == 0xc) {
      FUN_00487380(param_5,0xc,0x524eb4);
      return 0xffffffe2;
    }
    FUN_00487380(param_5,0x2a,0x524ea8);
    return 0xffffffec;
  }
  if ((char)*puVar2 != '\0') {
    puVar4 = puVar2;
    do {
      uVar1 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar1 != '\0');
    FUN_0045e3f0((int *)(param_3 + 0x1c),(uint *)pcVar5,puVar2,(int)puVar4 - ((int)puVar2 + 1));
  }
  FUN_0047d191(puVar2);
  return 0;
}


