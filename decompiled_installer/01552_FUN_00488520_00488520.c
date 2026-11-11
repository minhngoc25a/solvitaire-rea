// Function: FUN_00488520
// Entry: 00488520
// Size: 70 bytes
// Thunk: false
// External: false


void __cdecl FUN_00488520(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,0x7fff,"archive_read_extract_set_skip_file");
  if (iVar1 == 0) {
    param_1[0x1a] = param_2;
    param_1[0x1b] = param_3;
    param_1[0x19] = 1;
    param_1[0x1c] = param_4;
    param_1[0x1d] = param_5;
  }
  return;
}


