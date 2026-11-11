// Function: FUN_0046baf0
// Entry: 0046baf0
// Size: 521 bytes
// Thunk: false
// External: false


undefined4 * __cdecl
FUN_0046baf0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_3d4 [16];
  code *local_394;
  undefined4 *local_390;
  undefined4 local_38c;
  uint local_35c;
  undefined1 *local_330;
  code *local_32c;
  undefined4 *local_328;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [136];
  undefined4 local_c4 [16];
  char local_84 [128];
  
  _memset(local_3d4,0,0x278);
  _memset(local_14c,0,0x88);
  local_15c = 1000000;
  local_158 = 1000000;
  local_154 = 1000;
  local_150 = 8000000;
  FUN_004a47c0((int)local_3d4,param_5,param_6,param_7);
  puVar6 = local_3d4;
  FUN_0046f160((int)puVar6,param_2,param_3,param_4);
  iVar2 = FUN_00474320(local_c4,0,puVar6,param_2);
  if (iVar2 == 0) {
    local_390 = local_c4;
    local_38c = 0;
    local_394 = _longjmp;
    if (param_1 == (char *)0x0) {
      uVar4 = local_35c | 0x20000;
      local_35c = uVar4;
    }
    else {
      pcVar5 = "";
      uVar4 = local_35c;
      iVar2 = 0;
      do {
        cVar1 = (param_1 + -0x5297ff)[(int)pcVar5];
        pcVar5 = pcVar5 + 1;
        if (cVar1 != *pcVar5) {
          uVar4 = uVar4 | 0x20000;
          local_35c = uVar4;
        }
        iVar3 = iVar2 + 1;
        if (cVar1 != '.') {
          iVar3 = iVar2;
        }
      } while (((iVar3 < 2) && (cVar1 != '\0')) && (iVar2 = iVar3, *pcVar5 != '\0'));
    }
    if ((uVar4 & 0x20000) == 0) {
      local_328 = (undefined4 *)FUN_004a4890((int)local_3d4,0x310);
      if (local_328 != (undefined4 *)0x0) {
        local_330 = &LAB_0046bd00;
        local_32c = thunk_FUN_004a48e0;
        local_390 = (undefined4 *)0x0;
        local_38c = 0;
        local_394 = (code *)0x0;
        puVar6 = local_3d4;
        puVar7 = local_328;
        for (iVar2 = 0xc4; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        return local_328;
      }
    }
    else {
      uVar4 = FUN_0046f470((int)local_84,0x80,0,"Application built with libpng-");
      uVar4 = FUN_0046f470((int)local_84,0x80,uVar4,param_1);
      uVar4 = FUN_0046f470((int)local_84,0x80,uVar4," but running with ");
      FUN_0046f470((int)local_84,0x80,uVar4,"1.6.37");
      FUN_0046f1c0((int)local_3d4,local_84);
    }
  }
  return (undefined4 *)0x0;
}


