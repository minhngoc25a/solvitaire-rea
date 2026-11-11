// Function: FUN_00429a80
// Entry: 00429a80
// Size: 514 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00429a80(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_30;
  uint uStack_2c;
  
  if (((param_3 != (uint *)0x0) && (_memset(param_3,0,100), param_1 != (uint *)0x0)) &&
     (*param_1 != 0)) {
    uVar3 = *param_1 + 7 & 0xfffffff8;
    param_3[0x18] = (uint)param_2;
    if (param_2 == (uint *)0x0) {
      if (uVar3 != 0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
    }
    else if (uVar3 != 0) {
      _memset(param_2,0,uVar3);
    }
    uVar3 = param_1[1];
    uVar5 = param_1[2];
    uVar4 = param_1[3];
    *param_3 = *param_1;
    param_3[1] = uVar3;
    param_3[2] = uVar5;
    param_3[3] = uVar4;
    uVar3 = param_1[5];
    uVar5 = param_1[6];
    uVar4 = param_1[7];
    param_3[4] = param_1[4];
    param_3[5] = uVar3;
    param_3[6] = uVar5;
    param_3[7] = uVar4;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0xbf800000;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 1;
    if (param_3[2] == 1) {
      FUN_0042fa20((int *)(param_3 + 0x11));
      puVar1 = param_3 + 0x11;
      if (puVar1 != (uint *)0x0) {
        LOCK();
        *puVar1 = 0;
        UNLOCK();
      }
      local_30 = (uint)*(undefined8 *)(param_3 + 0xe);
      local_30 = local_30 ^ DAT_0050c400;
      uStack_2c = (uint)((ulonglong)*(undefined8 *)(param_3 + 0xe) >> 0x20);
      uStack_2c = uStack_2c ^ DAT_0050c400;
      uVar3 = param_3[0x10] ^ DAT_0050c400;
      FUN_0042fa20((int *)puVar1);
      *(ulonglong *)(param_3 + 0xe) = CONCAT44(uStack_2c,local_30);
      param_3[0x10] = uVar3;
      if (param_3 + 0x11 != (uint *)0x0) {
        LOCK();
        param_3[0x11] = 0;
        UNLOCK();
      }
    }
    param_3[1] = (uint)param_2;
    uVar3 = *param_1;
    if ((uint *)param_1[1] == (uint *)0x0) {
      if (uVar3 == 2) {
        *(undefined2 *)param_2 = 0xc0b;
        return 0;
      }
      if (((param_2 != (uint *)0x0) && (uVar3 != 0)) && (uVar4 = 0, uVar5 = uVar3, uVar3 != 0)) {
        while (uVar5 != 0) {
          cVar2 = FUN_00448a20(0,uVar3,uVar4);
          uVar5 = uVar5 - 1;
          *(char *)(uVar4 + (int)param_2) = cVar2;
          uVar4 = uVar4 + 1;
          if (uVar3 <= uVar4) {
            return 0;
          }
        }
      }
    }
    else if ((param_2 != (uint *)0x0) && (uVar3 != 0)) {
      FUN_0044c490(param_2,(uint *)param_1[1],uVar3);
    }
    return 0;
  }
  return 0xfffffffe;
}


