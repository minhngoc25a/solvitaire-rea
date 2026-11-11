// Function: FUN_0043de00
// Entry: 0043de00
// Size: 325 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0043de00(int param_1,uint param_2,int param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short local_18 [12];
  
  iVar1 = 5;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  uVar3 = 2;
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  iVar4 = 48000;
  if (param_3 != 0) {
    iVar4 = param_3;
  }
  switch(iVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
    uVar6 = DAT_0053fd00;
    uVar7 = DAT_0053fd04;
    uVar8 = uRam0053fd08;
    uVar9 = uRam0053fd0c;
    break;
  case 5:
    uVar6 = DAT_0053fd10;
    uVar7 = DAT_0053fd14;
    uVar8 = uRam0053fd18;
    uVar9 = uRam0053fd1c;
    break;
  default:
    return 0xffffff38;
  }
  if (param_5 == (undefined2 *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    *(undefined4 *)(param_5 + 10) = 0;
    *(undefined4 *)(param_5 + 0xc) = 0;
    *(undefined4 *)(param_5 + 0xe) = 0;
    *(undefined4 *)(param_5 + 0x10) = 0;
    *(undefined4 *)(param_5 + 0x12) = 0;
  }
  local_18[0] = 0;
  local_18[1] = 0;
  param_5[8] = 0x28;
  *param_5 = 0xfffe;
  local_18[2] = 1;
  local_18[3] = 0;
  local_18[4] = 2;
  local_18[5] = 0;
  local_18[6] = 3;
  local_18[7] = 0;
  local_18[8] = 4;
  local_18[9] = 0;
  local_18[10] = 4;
  local_18[0xb] = 0;
  uVar5 = local_18[iVar1 * 2] << 3;
  iVar1 = (uint)uVar5 * (uVar3 & 0xffff);
  param_5[1] = (short)uVar3;
  *(int *)(param_5 + 2) = iVar4;
  param_5[7] = uVar5;
  param_5[9] = uVar5;
  uVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  param_5[6] = (short)uVar2;
  *(uint *)(param_5 + 4) = (uVar2 & 0xffff) * iVar4;
  uVar3 = FUN_004390c0(param_4,uVar3);
  *(uint *)(param_5 + 10) = uVar3;
  *(undefined4 *)(param_5 + 0xc) = uVar6;
  *(undefined4 *)(param_5 + 0xe) = uVar7;
  *(undefined4 *)(param_5 + 0x10) = uVar8;
  *(undefined4 *)(param_5 + 0x12) = uVar9;
  return 0;
}


