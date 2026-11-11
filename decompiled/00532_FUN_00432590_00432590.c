// Function: FUN_00432590
// Entry: 00432590
// Size: 182 bytes
// Thunk: false
// External: false


void __cdecl FUN_00432590(int param_1,int param_2,uint param_3,uint param_4,float param_5)

{
  bool bVar1;
  uint local_8;
  uint uStack_4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_5 == DAT_0050c314) {
      if ((param_1 != param_2) && ((param_4 != 0 || (param_3 != 0)))) {
        uStack_4 = 0;
        local_8 = 0;
        do {
          do {
            *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_2 + local_8 * 4);
            bVar1 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar1;
          } while (uStack_4 < param_4);
        } while ((uStack_4 <= param_4) && (local_8 < param_3));
      }
    }
    else if ((param_4 != 0) || (param_3 != 0)) {
      uStack_4 = 0;
      local_8 = 0;
      while( true ) {
        do {
          *(float *)(param_1 + local_8 * 4) = param_5 * *(float *)(param_2 + local_8 * 4);
          bVar1 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar1;
        } while (uStack_4 < param_4);
        if (param_4 < uStack_4) break;
        if (param_3 <= local_8) {
          return;
        }
      }
    }
  }
  return;
}


