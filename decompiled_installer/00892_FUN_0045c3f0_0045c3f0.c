// Function: FUN_0045c3f0
// Entry: 0045c3f0
// Size: 221 bytes
// Thunk: false
// External: false


int __cdecl FUN_0045c3f0(int param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  DWORD DVar1;
  ushort *puVar2;
  int iVar3;
  
  if (((param_5 != 0x100) && (param_5 != 0x200)) && (param_5 != 0x3c00)) {
    FUN_00487380(param_1,0xffffffff,0x528524);
    return -0x1e;
  }
  DVar1 = *(DWORD *)(param_2 + 0xf8);
  if (DVar1 == 0) {
    DVar1 = FUN_0048d0a0(param_1,&DAT_005297a0,1);
    *(DWORD *)(param_2 + 0xf8) = DVar1;
    if (DVar1 == 0) {
      return -0x1e;
    }
  }
  puVar2 = (ushort *)FUN_0048c9f0(param_3);
  iVar3 = FUN_00492480(puVar2,param_4,param_5,DVar1);
  if (iVar3 != 0) {
    if (iVar3 == -0x1e) {
      FUN_00487380(param_1,0xc,0x524eb4);
      return -0x1e;
    }
    FUN_00487380(param_1,0xffffffff,0x524eb4);
  }
  return iVar3;
}


