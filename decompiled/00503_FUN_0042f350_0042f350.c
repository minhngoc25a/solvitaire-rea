// Function: FUN_0042f350
// Entry: 0042f350
// Size: 214 bytes
// Thunk: false
// External: false


undefined4 * __cdecl
FUN_0042f350(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    param_1[3] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  piVar1 = param_1 + 7;
  param_1[4] = param_4;
  param_1[2] = 0;
  param_1[6] = param_6;
  if (piVar1 == (int *)0x0) {
    return param_1;
  }
  if (param_7 == (int *)0x0) {
LAB_0042f407:
    *piVar1 = 0;
    param_1[8] = FUN_00435570;
    param_1[9] = &LAB_00435580;
    param_1[10] = FUN_004355a0;
    return param_1;
  }
  if (*param_7 == 0) {
    if (param_7[3] != 0) goto LAB_0042f3f1;
    if ((param_7[1] == 0) && (param_7[2] == 0)) goto LAB_0042f407;
  }
  if (param_7[3] == 0) {
    return param_1;
  }
LAB_0042f3f1:
  if ((param_7[1] == 0) && (param_7[2] == 0)) {
    return param_1;
  }
  iVar2 = param_7[1];
  iVar3 = param_7[2];
  iVar4 = param_7[3];
  *piVar1 = *param_7;
  param_1[8] = iVar2;
  param_1[9] = iVar3;
  param_1[10] = iVar4;
  return param_1;
}


