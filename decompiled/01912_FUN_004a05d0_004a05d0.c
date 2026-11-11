// Function: FUN_004a05d0
// Entry: 004a05d0
// Size: 817 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a05d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = (int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c1c) >> 4) * 4);
  piVar2 = (int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c1a) >> 4) * 4);
  iVar5 = *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c20) >> 4) * 4) + *piVar1 +
          *piVar2;
  piVar3 = (int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c1a) ^ 0x7f0) >> 4) * 4);
  *(int *)(param_1 + 0xfd8) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c28) >> 4) * 4) + iVar5;
  *(int *)(param_1 + 0xff8) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c28) ^ 0x7f0) >> 4) * 4) + iVar5;
  piVar4 = (int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c1e) >> 4) * 4);
  iVar5 = *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c24) >> 4) * 4) + *piVar4 +
          *piVar3;
  *(int *)(param_1 + 0xfdc) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c30) >> 4) * 4) + iVar5;
  *(int *)(param_1 + 0xffc) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c30) ^ 0x7f0) >> 4) * 4) + iVar5;
  piVar7 = (int *)(param_1 + ((*(ushort *)(param_1 + 0x1c1c) ^ 0x7f0) >> 4) * 4 + 0x548);
  iVar5 = *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c22) >> 4) * 4) + *piVar2 +
          *piVar7;
  *(int *)(param_1 + 0xfe0) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c2c) >> 4) * 4) + iVar5;
  *(int *)(param_1 + 0x1000) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c2c) ^ 0x7f0) >> 4) * 4) + iVar5;
  iVar5 = param_1 + ((*(ushort *)(param_1 + 0x1c1e) ^ 0x7f0) >> 4) * 4;
  iVar6 = *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c26) >> 4) * 4) + *piVar3 +
          *(int *)(iVar5 + 0x548);
  *(int *)(param_1 + 0xfe4) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c34) >> 4) * 4) + iVar6;
  *(int *)(param_1 + 0x1004) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c34) ^ 0x7f0) >> 4) * 4) + iVar6;
  iVar6 = *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c20) ^ 0x7f0) >> 4) * 4) + *piVar2 +
          *piVar1;
  *(int *)(param_1 + 0xfe8) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c2a) >> 4) * 4) + iVar6;
  *(int *)(param_1 + 0x1008) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c2a) ^ 0x7f0) >> 4) * 4) + iVar6;
  iVar6 = *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c24) ^ 0x7f0) >> 4) * 4) + *piVar3 +
          *piVar4;
  *(int *)(param_1 + 0xfec) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c32) >> 4) * 4) + iVar6;
  *(int *)(param_1 + 0x100c) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c32) ^ 0x7f0) >> 4) * 4) + iVar6;
  iVar6 = *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c22) ^ 0x7f0) >> 4) * 4) + *piVar2 +
          *piVar7;
  *(int *)(param_1 + 0xff0) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c2e) >> 4) * 4) + iVar6;
  *(int *)(param_1 + 0x1010) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c2e) ^ 0x7f0) >> 4) * 4) + iVar6;
  iVar5 = *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c26) ^ 0x7f0) >> 4) * 4) + *piVar3 +
          *(int *)(iVar5 + 0x548);
  *(int *)(param_1 + 0xff4) =
       *(int *)(param_1 + 0x548 + (uint)(*(ushort *)(param_1 + 0x1c36) >> 4) * 4) + iVar5;
  *(int *)(param_1 + 0x1014) =
       *(int *)(param_1 + 0x548 + ((*(ushort *)(param_1 + 0x1c36) ^ 0x7f0) >> 4) * 4) + iVar5;
  return;
}


