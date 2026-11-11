// Function: tls_callback_0
// Entry: 00404b30
// Size: 134 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00404b75) */
/* WARNING: Removing unreachable block (ram,0x00404b77) */
/* WARNING: Removing unreachable block (ram,0x00404b82) */
/* WARNING: Removing unreachable block (ram,0x00404b84) */
/* WARNING: Removing unreachable block (ram,0x00404b8b) */

undefined4 tls_callback_0(undefined4 param_1,int param_2)

{
  if (DAT_00410048 != 2) {
    DAT_00410048 = 2;
  }
  if ((param_2 != 2) && (param_2 == 1)) {
    FUN_00405220(param_1,1);
  }
  return 1;
}


