// Function: FUN_00432650
// Entry: 00432650
// Size: 549 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00432650(uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5,uint param_6,
            float param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint local_8;
  uint uStack_4;
  
  switch(param_5) {
  case 1:
    if ((param_1 != 0) && (param_2 != 0)) {
      uVar1 = (uint)((ulonglong)param_3 * (ulonglong)param_6);
      uVar2 = param_4 * param_6 + (int)((ulonglong)param_3 * (ulonglong)param_6 >> 0x20);
      if ((uVar2 != 0) || (uVar1 != 0)) {
        uStack_4 = 0;
        local_8 = 0;
        while( true ) {
          do {
            *(char *)(local_8 + param_1) =
                 (char)(int)((float)*(byte *)(local_8 + param_2) * param_7);
            bVar3 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar3;
          } while (uStack_4 < uVar2);
          if (uVar2 < uStack_4) break;
          if (uVar1 <= local_8) {
            return;
          }
        }
      }
    }
    break;
  case 2:
    if ((param_1 != 0) && (param_2 != 0)) {
      uVar1 = (uint)((ulonglong)param_3 * (ulonglong)param_6);
      uVar2 = param_4 * param_6 + (int)((ulonglong)param_3 * (ulonglong)param_6 >> 0x20);
      if ((uVar2 != 0) || (uVar1 != 0)) {
        uStack_4 = 0;
        local_8 = 0;
        while( true ) {
          do {
            *(short *)(param_1 + local_8 * 2) =
                 (short)(int)((float)(int)*(short *)(param_2 + local_8 * 2) * param_7);
            bVar3 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar3;
          } while (uStack_4 < uVar2);
          if (uVar2 < uStack_4) break;
          if (uVar1 <= local_8) {
            return;
          }
        }
      }
    }
    break;
  case 3:
    FUN_004324d0(param_1,param_2,(uint)((ulonglong)param_3 * (ulonglong)param_6),
                 param_4 * param_6 + (int)((ulonglong)param_3 * (ulonglong)param_6 >> 0x20),param_7)
    ;
    return;
  case 4:
    if ((param_1 != 0) && (param_2 != 0)) {
      uVar1 = (uint)((ulonglong)param_3 * (ulonglong)param_6);
      uVar2 = param_4 * param_6 + (int)((ulonglong)param_3 * (ulonglong)param_6 >> 0x20);
      if ((uVar2 != 0) || (uVar1 != 0)) {
        uStack_4 = 0;
        local_8 = 0;
        while( true ) {
          do {
            *(int *)(param_1 + local_8 * 4) =
                 (int)((float)*(int *)(param_2 + local_8 * 4) * param_7);
            bVar3 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar3;
          } while (uStack_4 < uVar2);
          if (uVar2 < uStack_4) break;
          if (uVar1 <= local_8) {
            return;
          }
        }
      }
    }
    break;
  case 5:
    FUN_00432590(param_1,param_2,(uint)((ulonglong)param_3 * (ulonglong)param_6),
                 param_4 * param_6 + (int)((ulonglong)param_3 * (ulonglong)param_6 >> 0x20),param_7)
    ;
  }
  return;
}


