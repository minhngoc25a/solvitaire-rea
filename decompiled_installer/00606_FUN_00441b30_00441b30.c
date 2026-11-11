// Function: FUN_00441b30
// Entry: 00441b30
// Size: 234 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00441b30(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == (uint *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xb395);
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x18), uVar1 < 9)) {
    *param_2 = 0;
    uVar3 = 0;
    param_2[1] = 0;
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      do {
        if (*(int *)(param_1 + 4) == 0) {
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
        uVar2 = (*(int *)(param_1 + 4) * 4 + 7U & 0xfffffff8) + 0x18 + uVar2;
        *param_2 = uVar2;
      } while (uVar3 < (uVar1 & 1));
    }
    uVar3 = 0;
    param_2[2] = uVar2;
    if (uVar1 >> 1 != 0) {
      do {
        if (*(int *)(param_1 + 4) == 0) {
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
        uVar2 = *(int *)(param_1 + 4) * 8 + 0x2c + uVar2;
        *param_2 = uVar2;
      } while (uVar3 < uVar1 >> 1);
    }
    *param_2 = uVar2 + 7 & 0xfffffff8;
    return 0;
  }
  return 0xfffffffe;
}


