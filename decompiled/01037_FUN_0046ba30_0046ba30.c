// Function: FUN_0046ba30
// Entry: 0046ba30
// Size: 146 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046ba30(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x9c) == 0) {
    switch(param_2) {
    default:
      *(char **)(param_1 + 0x9c) = "unexpected zlib return code";
      break;
    case 1:
      *(char **)(param_1 + 0x9c) = "unexpected end of LZ stream";
      return;
    case 2:
      *(char **)(param_1 + 0x9c) = "missing LZ dictionary";
      return;
    case 0xfffffff9:
      *(char **)(param_1 + 0x9c) = "unexpected zlib return";
      return;
    case 0xfffffffa:
      *(char **)(param_1 + 0x9c) = "unsupported zlib version";
      return;
    case 0xfffffffb:
      *(char **)(param_1 + 0x9c) = "truncated";
      return;
    case 0xfffffffc:
      *(char **)(param_1 + 0x9c) = "insufficient memory";
      return;
    case 0xfffffffd:
      *(char **)(param_1 + 0x9c) = "damaged LZ stream";
      return;
    case 0xfffffffe:
      *(char **)(param_1 + 0x9c) = "bad parameters to zlib";
      return;
    case 0xffffffff:
      *(char **)(param_1 + 0x9c) = "zlib IO error";
      return;
    }
  }
  return;
}


