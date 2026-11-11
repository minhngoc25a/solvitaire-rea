// Function: FUN_004c756b
// Entry: 004c756b
// Size: 123 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c756b(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 in_FPUControlWord;
  uint local_24 [7];
  uint local_8;
  
  uVar1 = FUN_004c7765(param_1);
  puVar3 = local_24;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_24[0] = CONCAT22(local_24[0]._2_2_,in_FPUControlWord);
  local_8 = uVar1 & 7999;
  local_24[0] = local_24[0] & 0xffffe0c0 | local_8;
  uVar1 = FUN_004c781b(param_1);
  if (0 < DAT_00544988) {
    MXCSR = MXCSR & 0xffff003f | uVar1 & 0xffc0;
  }
  return;
}


