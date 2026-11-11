// Function: FUN_004e7610
// Entry: 004e7610
// Size: 92 bytes
// Thunk: false
// External: false


int __cdecl FUN_004e7610(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00482949(4);
  if (puVar1 == (uint *)0x0) {
    FUN_00487380((int)param_1,0xc,0x5237ac);
    return -0x1e;
  }
  *puVar1 = param_2;
  FUN_004e73ad(param_2,0x8000);
  iVar2 = FUN_00494670(param_1,(uint)puVar1,0x4e7690,0x49abc0,0,0x4e7670);
  return iVar2;
}


