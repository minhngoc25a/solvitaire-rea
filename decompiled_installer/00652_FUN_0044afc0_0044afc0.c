// Function: FUN_0044afc0
// Entry: 0044afc0
// Size: 622 bytes
// Thunk: false
// External: false


int __cdecl FUN_0044afc0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_100;
  uint local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint *local_e8;
  uint *puStack_e4;
  uint local_e0 [8];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 local_48 [18];
  
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x12332);
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
    param_2[4] = 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return -2;
  }
  *param_2 = 0;
  local_100 = param_1[2];
  if (local_100 == 0) {
    iVar3 = *param_1;
    local_100 = 0;
    if ((iVar3 != 0) && (local_100 = 0, iVar3 != -0x100)) {
      if (*(int *)(iVar3 + 0x134) == 0) {
        local_100 = 0;
      }
      else {
        local_100 = (uint)*(byte *)(*(int *)(iVar3 + 0x13c) + 5);
      }
    }
  }
  local_fc = param_1[3];
  if (local_fc == 0) {
    iVar3 = *param_1;
    local_fc = 0;
    if ((iVar3 != 0) && (local_fc = 0, iVar3 != -0x100)) {
      if (*(int *)(iVar3 + 0x134) == 0) {
        local_fc = 0;
      }
      else {
        local_fc = (uint)*(byte *)(*(int *)(iVar3 + 0x13c) + 5);
      }
    }
  }
  piVar2 = FUN_0044aec0(local_e0,(int)param_1);
  local_f8 = *piVar2;
  iStack_f4 = piVar2[1];
  iStack_f0 = piVar2[2];
  iStack_ec = piVar2[3];
  _local_e8 = CONCAT44(&local_fc,&local_100);
  iVar3 = FUN_0044a330(*param_1,&local_f8,local_e0);
  if (iVar3 == 0) {
    param_2[1] = *param_2;
    *param_2 = (local_e0[0] + 7 & 0xfffffff8) + *param_2;
    piVar2 = FUN_0042b000(local_e0,5,local_100,1,1);
    local_c0 = *piVar2;
    iStack_bc = piVar2[1];
    iStack_b8 = piVar2[2];
    iStack_b4 = piVar2[3];
    iStack_ac = piVar2[5];
    iStack_a8 = piVar2[6];
    iStack_a4 = piVar2[7];
    local_b0 = 0;
    iVar3 = FUN_00443ae0(&local_c0,local_e0);
    if (iVar3 == 0) {
      param_2[2] = *param_2;
      *param_2 = (local_e0[0] + 7 & 0xfffffff8) + *param_2;
      piVar2 = FUN_0044af30(local_48,(int)&local_f8);
      iVar3 = *piVar2;
      iVar1 = piVar2[1];
      puVar5 = &local_fc;
      if (iVar3 != 2) {
        puVar5 = (uint *)piVar2[2];
      }
      if ((iVar3 != 0) && (iVar1 != 0)) {
        uVar4 = 0;
        if (puVar5 != (uint *)0x0) {
          uVar4 = iVar3 + 7U & 0xfffffff8;
        }
        if (iVar1 != 0) {
          param_2[3] = *param_2;
          iVar3 = *param_2 + iVar1 * 8 + (iVar1 * 4 + 7U & 0xfffffff8) + uVar4;
          *param_2 = iVar3;
          if (param_1[5] != 0) {
            if (local_100 == 0) {
              return -2;
            }
            param_2[4] = iVar3;
            *param_2 = local_100 * 8 + iVar3;
          }
          return 0;
        }
      }
      return -2;
    }
  }
  return iVar3;
}


