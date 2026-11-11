// Function: FUN_00493af0
// Entry: 00493af0
// Size: 333 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00493b6e) */

void __cdecl FUN_00493af0(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((-1 < param_3) && (-1 < param_5)) {
    if ((param_3 <= 0x7fffffff - param_5) &&
       (((param_3 < 0x7fffffff - param_5 || (param_2 <= -param_4 - 1)) &&
        (lVar6 = FUN_0048c180(param_1),
        CONCAT44(param_3 + param_5 + (uint)CARRY4(param_2,param_4),param_2 + param_4) <= lVar6)))) {
      iVar2 = *(int *)(param_1 + 0x30c);
      if (iVar2 != 0) {
        uVar5 = *(uint *)(iVar2 + 0x10) + *(uint *)(iVar2 + 8);
        iVar3 = *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x14) +
                (uint)CARRY4(*(uint *)(iVar2 + 0x10),*(uint *)(iVar2 + 8));
        if (param_3 < iVar3) {
          return;
        }
        if ((param_3 <= iVar3) && (param_2 < uVar5)) {
          return;
        }
        if ((uVar5 == param_2) && (iVar3 == param_3)) {
          if ((int)(iVar3 + param_5 + (uint)CARRY4(uVar5,param_4)) < 0) {
            return;
          }
          puVar1 = (uint *)(iVar2 + 0x10);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 + param_4;
          *(uint *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + param_5 + (uint)CARRY4(uVar5,param_4);
          return;
        }
      }
      puVar4 = (undefined4 *)FUN_00482949(0x18);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[2] = param_2;
        puVar4[3] = param_3;
        puVar4[4] = param_4;
        puVar4[5] = param_5;
        *puVar4 = 0;
        if (*(int *)(param_1 + 0x308) == 0) {
          *(undefined4 **)(param_1 + 0x308) = puVar4;
          *(undefined4 **)(param_1 + 0x30c) = puVar4;
          return;
        }
        if (*(undefined4 **)(param_1 + 0x30c) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x30c) = puVar4;
        }
        *(undefined4 **)(param_1 + 0x30c) = puVar4;
      }
    }
  }
  return;
}


