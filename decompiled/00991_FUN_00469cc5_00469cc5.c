// Function: FUN_00469cc5
// Entry: 00469cc5
// Size: 104 bytes
// Thunk: false
// External: false


int __cdecl FUN_00469cc5(int *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = -1;
  if (*param_1 == 0x626c7a31) {
    piVar4 = param_1 + 6;
    if ((param_1[3] <= (int)param_3 >> 0x1f) &&
       ((param_1[3] < (int)param_3 >> 0x1f || ((uint)param_1[2] <= param_3)))) {
      for (uVar2 = param_1[2]; uVar2 != 0; uVar2 = uVar2 - uVar3) {
        if ((param_1[5] < (int)uVar2 >> 0x1f) ||
           ((uVar3 = uVar2, param_1[5] <= (int)uVar2 >> 0x1f && ((uint)param_1[4] <= uVar2)))) {
          uVar3 = param_1[4];
        }
        iVar1 = FUN_004a1fab((undefined1 *)piVar4,param_2,uVar3);
        param_2 = param_2 + uVar3;
        piVar4 = (int *)((int)piVar4 + iVar1);
      }
      iVar1 = param_1[2];
    }
  }
  return iVar1;
}


