// Function: FUN_00439570
// Entry: 00439570
// Size: 271 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00439570(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  int *local_c;
  undefined4 uStack_8;
  
  if (param_2 == 3) {
    return 0xfffffffe;
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x38);
  }
  FUN_004277a0(iVar2,4,0x52b648);
  uVar1 = FUN_0043b740(param_1,param_2);
  if (uVar1 != 0) {
    if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*param_1 + 0x38);
    }
    FUN_004277a0(iVar2,2,0x52b7c8);
    return uVar1;
  }
  FUN_004373c0(param_1,param_2);
  local_c = param_1;
  uStack_8 = 2;
  local_18 = CONCAT44(2,param_1);
  local_10 = 0;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"notification.pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x48d2);
  }
  if (*(code **)((int)local_18 + 0x14) != (code *)0x0) {
    (**(code **)((int)local_18 + 0x14))(&local_18);
  }
  if ((*(code **)((int)local_18 + 0x18) != (code *)0x0) && (local_18._4_4_ == 1)) {
    (**(code **)((int)local_18 + 0x18))((int)local_18);
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x38);
  }
  FUN_004277a0(iVar2,4,0x52b664);
  return 0;
}


