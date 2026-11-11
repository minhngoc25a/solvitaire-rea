// Function: FUN_00434d20
// Entry: 00434d20
// Size: 283 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00434d20(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float local_10;
  float local_c;
  float fStack_8;
  
  local_10 = DAT_0050c380;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x214), iVar1 != 1)) {
    uVar2 = 0;
    uVar4 = 0;
    if (iVar1 != 0) {
      piVar3 = (int *)(param_1 + 0x24c);
      if (iVar1 == 0) goto LAB_00434df9;
      do {
        if (piVar3 == (int *)0x34) {
          iVar1 = 0;
        }
        else {
          iVar1 = piVar3[9];
        }
        if (iVar1 != 0) {
          if (piVar3 == (int *)0x34) {
            local_c = 0.0;
            fStack_8 = 0.0;
            fVar5 = 0.0;
          }
          else {
            FUN_0042fa20(piVar3);
            fVar5 = (float)piVar3[-1];
            if (piVar3 != (int *)0x0) {
              LOCK();
              *piVar3 = 0;
              UNLOCK();
            }
            fStack_8 = (float)((ulonglong)*(undefined8 *)(piVar3 + -3) >> 0x20);
            local_c = (float)*(undefined8 *)(piVar3 + -3);
          }
          fVar5 = (fStack_8 - param_3) * (fStack_8 - param_3) +
                  (local_c - param_2) * (local_c - param_2) + (fVar5 - param_4) * (fVar5 - param_4);
          if (fVar5 < local_10) {
            uVar2 = uVar4;
            local_10 = fVar5;
          }
        }
LAB_00434df9:
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 0x19;
      } while (uVar4 < *(uint *)(param_1 + 0x214));
      if (0xfe < uVar2) {
        FID_conflict___assert
                  (L"iListenerClosest < 255",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x126fb);
      }
    }
    return uVar2;
  }
  return 0;
}


