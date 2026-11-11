// Function: FUN_00461580
// Entry: 00461580
// Size: 129 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_00461580(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  return CONCAT44((((uVar1 >> 0x18) << 8 | (uVar1 & 0xffffff) >> 0x10) << 8 |
                  (uVar1 << 8 & 0xffffff) >> 0x10) << 8 | (uVar1 << 8 & 0xffff) >> 8,*param_1);
}


