// Function: FUN_00401ed3
// Entry: 00401ed3
// Size: 99 bytes
// Thunk: false
// External: false


void __cdecl FUN_00401ed3(char *param_1)

{
  if (DAT_00410020 == 0) {
    MessageBoxA((HWND)0x0,param_1,&DAT_004190e8,0);
  }
  else {
    if (DAT_004190e8 == '\0') {
      puts(param_1);
      return;
    }
    printf("%s: %s\n",&DAT_004190e8,param_1);
  }
  return;
}


