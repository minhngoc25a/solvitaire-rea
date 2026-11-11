// Function: FUN_004ffd1c
// Entry: 004ffd1c
// Size: 13 bytes
// Thunk: false
// External: false


char * __fastcall FUN_004ffd1c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


