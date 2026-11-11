// Function: FUN_00467a30
// Entry: 00467a30
// Size: 302 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00467a30(int param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  if (((param_4 == 0) && (*(int *)(iVar2 + 0x70) == 0 && *(int *)(iVar2 + 0x74) == 0)) &&
     (param_3 == 0)) {
    return 0;
  }
  if (((*(byte *)(iVar2 + 0x5c) & 1) != 0) && (param_3 != 0)) {
    uVar3 = thunk_FUN_0048b320(*(uint *)(iVar2 + 0x54),param_2,param_3);
    *(uint *)(iVar2 + 0x54) = uVar3;
  }
  *(uint *)(iVar2 + 0x6c) = param_3;
  *(uint **)(iVar2 + 0x68) = param_2;
LAB_00467a8a:
  do {
    if (*(int *)(iVar2 + 0x90) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(iVar2 + 0x98))(param_1,iVar2 + 0x68,param_4);
      if ((iVar4 != 0) && (iVar4 != 1)) {
        return 0xffffffe2;
      }
    }
    if (*(int *)(iVar2 + 0x7c) == 0) {
      puVar1 = (uint *)(iVar2 + 0xb0);
      iVar5 = FUN_00468e10(param_1,puVar1,0xf000);
      if (iVar5 != 0) {
        return 0xffffffe2;
      }
      *(uint **)(iVar2 + 0x78) = puVar1;
      *(undefined4 *)(iVar2 + 0x7c) = 0xf000;
      if ((*(byte *)(iVar2 + 0x5c) & 2) != 0) {
        uVar3 = thunk_FUN_0048b320(*(uint *)(iVar2 + 0x58),puVar1,0xf000);
        *(uint *)(iVar2 + 0x58) = uVar3;
      }
      if ((param_4 == 0) && (iVar4 != 1)) goto LAB_00467a8a;
    }
    if (*(int *)(iVar2 + 0x6c) == 0) {
      if (param_4 == 0) {
        DVar6 = 0xf000 - *(int *)(iVar2 + 0x7c);
        iVar4 = FUN_00468e10(param_1,(uint *)(iVar2 + 0xb0),DVar6);
        if (iVar4 != 0) {
          return 0xffffffe2;
        }
        if (((*(byte *)(iVar2 + 0x5c) & 2) != 0) && (DVar6 != 0)) {
          uVar3 = thunk_FUN_0048b320(*(uint *)(iVar2 + 0x58),(uint *)(iVar2 + 0xb0),DVar6);
          *(uint *)(iVar2 + 0x58) = uVar3;
        }
      }
      return param_3;
    }
  } while( true );
}


