// Function: FUN_0042f9c0
// Entry: 0042f9c0
// Size: 58 bytes
// Thunk: false
// External: false


char * __cdecl FUN_0042f9c0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "Unknown";
  case 1:
    return "8-bit Unsigned Integer";
  case 2:
    return "16-bit Signed Integer";
  case 3:
    return "24-bit Signed Integer (Tightly Packed)";
  case 4:
    return "32-bit Signed Integer";
  case 5:
    return "32-bit IEEE Floating Point";
  default:
    return "Invalid";
  }
}


