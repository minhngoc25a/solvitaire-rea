// Function: FUN_00488570
// Entry: 00488570
// Size: 222 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00488570(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,1,"__archive_read_register_format");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  puVar2 = param_1 + 0x62;
  iVar1 = 0;
  while( true ) {
    if (*puVar2 == param_4) {
      return 0xffffffec;
    }
    if (*puVar2 == 0) break;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0xb;
    if (0xf < iVar1) {
      FUN_00487380((int)param_1,0xc,0x525b38);
      return 0xffffffe2;
    }
  }
  param_1[iVar1 * 0xb + 0x62] = param_4;
  param_1[(iVar1 + 9) * 0xb] = param_5;
  param_1[iVar1 * 0xb + 100] = param_6;
  param_1[iVar1 * 0xb + 0x65] = param_7;
  param_1[iVar1 * 0xb + 0x66] = param_8;
  param_1[iVar1 * 0xb + 0x67] = param_9;
  param_1[iVar1 * 0xb + 0x68] = param_10;
  param_1[iVar1 * 0xb + 0x60] = param_2;
  param_1[iVar1 * 0xb + 0x61] = param_3;
  param_1[iVar1 * 0xb + 0x69] = param_11;
  param_1[iVar1 * 0xb + 0x6a] = param_12;
  return 0;
}


