// Function: FUN_00406c00
// Entry: 00406c00
// Size: 239 bytes
// Thunk: false
// External: false


void __fastcall FUN_00406c00(int *param_1,int param_2)

{
  WCHAR *in_EAX;
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  LPSTR pCVar3;
  WCHAR *local_44;
  int local_40;
  CHAR local_2c [28];
  
  FUN_00409e80(local_2c,L'\0');
  iVar1 = param_1[3];
  local_40 = param_2;
  if ((-1 < iVar1) && (iVar1 < param_2)) {
    local_40 = iVar1;
  }
  uVar2 = extraout_ECX;
  local_44 = in_EAX;
  if (local_40 < param_1[2]) {
    iVar1 = param_1[2] - local_40;
    param_1[2] = iVar1;
    if ((0 < iVar1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
      param_1[2] = iVar1 + -1;
      do {
        FUN_00406ba0(uVar2,param_1);
        iVar1 = param_1[2];
        param_1[2] = iVar1 + -1;
        uVar2 = extraout_ECX_03;
      } while (iVar1 != 0);
    }
  }
  else {
    param_1[2] = -1;
  }
  for (; 0 < local_40; local_40 = local_40 + -1) {
    iVar1 = FUN_00409e80(local_2c,*local_44);
    uVar2 = extraout_ECX_00;
    if (iVar1 < 1) break;
    pCVar3 = local_2c;
    do {
      pCVar3 = pCVar3 + 1;
      FUN_00406ba0(uVar2,param_1);
      uVar2 = extraout_ECX_01;
    } while (pCVar3 != local_2c + iVar1);
    local_44 = local_44 + 1;
  }
  while (iVar1 = param_1[2], param_1[2] = iVar1 + -1, 0 < iVar1) {
    FUN_00406ba0(uVar2,param_1);
    uVar2 = extraout_ECX_02;
  }
  return;
}


