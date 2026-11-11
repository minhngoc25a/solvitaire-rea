// Function: ___acrt_fenv_get_control
// Entry: 004c74eb
// Size: 128 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_fenv_get_control
   
   Library: Visual Studio 2019 Release */

uint ___acrt_fenv_get_control(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort in_FPUControlWord;
  ushort local_24 [14];
  uint local_8;
  
  puVar4 = local_24;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  local_24[0] = in_FPUControlWord;
  uVar1 = FUN_004c7608(in_FPUControlWord & 7999);
  if (DAT_00544988 < 1) {
    uVar3 = 0;
  }
  else {
    local_8 = MXCSR;
    uVar3 = MXCSR & 0xffc0;
  }
  uVar3 = FUN_004c76b5(uVar3);
  return uVar3 | ((((uVar3 & 0x3f) << 2 | uVar3 & 0xffffff00) << 6 | uVar1 & 0x3f) << 2 |
                 uVar1 & 0x300) << 0xe | uVar1;
}


