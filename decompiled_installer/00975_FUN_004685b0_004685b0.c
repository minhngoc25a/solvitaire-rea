// Function: FUN_004685b0
// Entry: 004685b0
// Size: 267 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004685b0(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  
  uVar4 = 0x80;
  local_c._0_1_ = 0;
  uVar5 = 1;
  while ((param_3 != 0 || (uVar4 <= param_2))) {
    *(byte *)((int)&local_c + uVar5) = (byte)param_2;
    uVar5 = uVar5 + 1;
    param_2 = param_2 >> 8 | param_3 << 0x18;
    local_c._0_1_ = (byte)local_c | (byte)uVar4;
    uVar4 = uVar4 >> 1;
    param_3 = param_3 >> 8;
    if (8 < (int)uVar5) {
LAB_004685ff:
      iVar2 = *(int *)(param_1 + 0xa4);
      if (((*(byte *)(iVar2 + 0x5c) & 1) != 0) && (uVar5 != 0)) {
        uVar4 = thunk_FUN_0048b320(*(uint *)(iVar2 + 0x54),&local_c,uVar5);
        *(uint *)(iVar2 + 0x54) = uVar4;
      }
      *(uint *)(iVar2 + 0x6c) = uVar5;
      *(int *)(iVar2 + 0x68) = (int)&local_c;
      do {
        if (((*(int *)(iVar2 + 0x90) != 0) &&
            (iVar3 = (**(code **)(iVar2 + 0x98))(param_1,(int *)(iVar2 + 0x68),1), iVar3 != 0)) &&
           (iVar3 != 1)) {
          return 0xffffffe2;
        }
        if (*(int *)(iVar2 + 0x7c) == 0) {
          puVar1 = (uint *)(iVar2 + 0xb0);
          iVar3 = FUN_00468e10(param_1,puVar1,0xf000);
          if (iVar3 != 0) {
            return 0xffffffe2;
          }
          *(uint **)(iVar2 + 0x78) = puVar1;
          *(undefined4 *)(iVar2 + 0x7c) = 0xf000;
          if ((*(byte *)(iVar2 + 0x5c) & 2) != 0) {
            uVar4 = thunk_FUN_0048b320(*(uint *)(iVar2 + 0x58),puVar1,0xf000);
            *(uint *)(iVar2 + 0x58) = uVar4;
          }
        }
      } while (*(int *)(iVar2 + 0x6c) != 0);
      return uVar5;
    }
  }
  local_c._0_1_ = (byte)local_c | (byte)param_2;
  goto LAB_004685ff;
}


