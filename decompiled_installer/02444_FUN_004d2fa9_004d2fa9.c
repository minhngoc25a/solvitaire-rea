// Function: FUN_004d2fa9
// Entry: 004d2fa9
// Size: 254 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004d2fa9(uint param_1,int *param_2)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  uint uVar3;
  int local_1c;
  int *local_18 [2];
  char local_10;
  undefined4 local_c;
  char local_8;
  char local_7;
  undefined1 local_6;
  
  uVar3 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    FUN_00425544(&local_1c,param_2);
    if (param_1 < 0x100) {
      uVar3 = (uint)*(byte *)(local_18[0][0x25] + (param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
    else {
      local_6 = 0;
      if ((local_18[0][1] < 2) ||
         (local_c = (int)param_1 >> 8, -1 < *(short *)(*local_18[0] + (local_c & 0xff) * 2))) {
        p_Var1 = FUN_0042470e();
        *(undefined4 *)p_Var1 = 0x2a;
        iVar2 = 1;
        local_7 = '\0';
        local_8 = (char)param_1;
      }
      else {
        iVar2 = 2;
        local_8 = (char)(param_1 >> 8);
        local_7 = (char)param_1;
      }
      local_c = local_c & 0xff000000;
      iVar2 = ___acrt_LCMapStringA
                        ((int *)local_18,(wchar_t *)local_18[0][0x2a],0x100,&local_8,iVar2,
                         (wchar_t *)&local_c,3,local_18[0][2],1);
      if (iVar2 != 0) {
        param_1 = local_c & 0xff;
        if (iVar2 != 1) {
          param_1 = (uint)CONCAT11((undefined1)local_c,local_c._1_1_);
        }
      }
      uVar3 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}


