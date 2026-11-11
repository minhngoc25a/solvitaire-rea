// Function: FUN_004437e0
// Entry: 004437e0
// Size: 170 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004437e0(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc3bd);
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    uVar2 = 0;
    *param_2 = 0;
    param_2[1] = 0xffffffff;
    if (param_1[2] != 0) {
      param_2[1] = 0;
      uVar2 = *param_1 + 7U & 0xfffffff8;
      *param_2 = uVar2;
    }
    param_2[2] = uVar2;
    uVar2 = uVar2 + (param_1[1] * 4 + 7U & 0xfffffff8);
    *param_2 = uVar2;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      param_2[3] = uVar2;
      *param_2 = iVar1 * 8 + uVar2;
      return 0;
    }
  }
  return 0xfffffffe;
}


