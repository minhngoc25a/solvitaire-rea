// Function: FUN_004597d0
// Entry: 004597d0
// Size: 146 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004597d0(uint *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_support_format_tar");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  pvVar2 = (LPVOID)FUN_0047f911(1,0x118);
  if (pvVar2 == (LPVOID)0x0) {
    FUN_00487380((int)param_1,0xc,0x5287a4);
    return 0xffffffe2;
  }
  iVar1 = FUN_00488570(param_1,(uint)pvVar2,0x5256a4,0x45a540,0x45a6b0,0x45ac60,0x45a940,0x45ab30,0,
                       0x45a870,0,0);
  if (iVar1 != 0) {
    FUN_0047d191(pvVar2);
  }
  return 0;
}


