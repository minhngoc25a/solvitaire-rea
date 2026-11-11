// Function: FUN_0040317d
// Entry: 0040317d
// Size: 31 bytes
// Thunk: false
// External: false


void __cdecl FUN_0040317d(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    if (*pcVar2 != param_2) {
      *param_1 = *pcVar2;
      param_1 = param_1 + 1;
    }
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


