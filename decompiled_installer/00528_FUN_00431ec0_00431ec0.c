// Function: FUN_00431ec0
// Entry: 00431ec0
// Size: 185 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00431ec0(uint *param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_18 [6];
  
  if (param_1 != param_2) {
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    lVar1 = (ulonglong)param_3 * (ulonglong)(uint)(local_18[param_5] * param_6);
    iVar3 = param_4 * local_18[param_5] * param_6 + (int)((ulonglong)lVar1 >> 0x20);
    for (uVar2 = (uint)lVar1; (iVar3 != 0 || (uVar2 != 0)); uVar2 = uVar2 - uVar4) {
      uVar4 = uVar2;
      if (iVar3 != 0) {
        uVar4 = 0xffffffff;
      }
      FUN_0044c490(param_1,param_2,uVar4);
      iVar3 = iVar3 - (uint)(uVar2 < uVar4);
      param_1 = (uint *)((int)param_1 + uVar4);
      param_2 = (uint *)((int)param_2 + uVar4);
    }
  }
  return;
}


