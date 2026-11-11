// Function: FUN_00488650
// Entry: 00488650
// Size: 178 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00488650(uint *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,1,"__archive_read_register_bidder");
  if (iVar1 != -0x1e) {
    iVar1 = 0;
    puVar2 = param_1 + 0x2c;
    while (*puVar2 != 0) {
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 3;
      if (0xf < iVar1) {
        FUN_00487380((int)param_1,0xc,0x525b64);
        return 0xffffffe2;
      }
    }
    (param_1 + iVar1 * 3 + 0x2a)[0] = 0;
    (param_1 + iVar1 * 3 + 0x2a)[1] = 0;
    param_1[iVar1 * 3 + 0x2c] = 0;
    puVar2 = param_1 + iVar1 * 3 + 0x2a;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = (uint)param_4;
    if ((*param_4 != 0) && (param_4[1] != 0)) {
      return 0;
    }
    FUN_00487380((int)param_1,0x16,0x525560);
  }
  return 0xffffffe2;
}


