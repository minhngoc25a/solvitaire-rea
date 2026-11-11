// Function: FUN_004369f0
// Entry: 004369f0
// Size: 535 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_004369f0(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_1034;
  int local_1030;
  uint local_102c;
  int local_1028;
  undefined8 local_1024;
  int local_101c [7];
  uint local_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x4369fa;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a0a);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"frameCountInDeviceFormat > 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a0b);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFramesInDeviceFormat != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a0c);
  }
  if (*(char *)(param_1 + 0xb24) != '\0') {
    FUN_00436270(param_1,(void *)0x0,(int)param_3,param_2);
    return;
  }
  local_101c[0] = 0;
  local_101c[1] = 1;
  local_101c[2] = 2;
  local_101c[3] = 3;
  local_101c[4] = 4;
  local_101c[5] = 4;
  local_1024 = 0;
  local_102c = param_2;
  local_1028 = 0;
  local_1030 = 0;
  local_1034 = (uint)(0x1000 / (ulonglong)
                               (uint)(local_101c[*(int *)(param_1 + 0x818)] *
                                     *(int *)(param_1 + 0x81c)));
  local_101c[6] = local_1034;
  iVar2 = FUN_0042c1d0((uint *)(param_1 + 0xa40),param_3,&local_102c,local_1000,&local_1034);
  if (iVar2 == 0) {
    iVar2 = local_1024._4_4_;
    do {
      if ((local_1030 != 0) || (local_1034 != 0)) {
        FUN_00436270(param_1,(void *)0x0,(int)local_1000,local_1034);
      }
      local_101c[0] = 0;
      local_101c[1] = 1;
      local_101c[2] = 2;
      local_101c[3] = 3;
      local_101c[4] = 4;
      local_101c[5] = 4;
      param_3 = (uint *)((int)param_3 +
                        local_101c[*(int *)(param_1 + 0x920)] * *(int *)(param_1 + 0x924) *
                        local_102c);
      bVar4 = CARRY4((uint)local_1024,local_102c);
      uVar1 = (uint)local_1024 + local_102c;
      local_1024 = CONCAT44(local_1024._4_4_,uVar1);
      iVar2 = iVar2 + local_1028 + (uint)bVar4;
      if ((local_102c == 0 && local_1028 == 0) && (local_1034 == 0 && local_1030 == 0)) {
        return;
      }
      local_102c = param_2 - uVar1;
      local_1028 = -(uint)(param_2 < uVar1) - iVar2;
      local_1030 = 0;
      local_1034 = local_101c[6];
      iVar3 = FUN_0042c1d0((uint *)(param_1 + 0xa40),param_3,&local_102c,local_1000,&local_1034);
    } while (iVar3 == 0);
  }
  return;
}


