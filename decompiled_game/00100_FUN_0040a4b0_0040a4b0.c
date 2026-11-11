// Function: FUN_0040a4b0
// Entry: 0040a4b0
// Size: 67 bytes
// Thunk: false
// External: false


void __cdecl FUN_0040a4b0(char *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = FUN_0040a470(param_3);
  cVar1 = *param_1;
  *(char *)piVar2 = cVar1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    piVar2 = (int *)((int)piVar2 + 1);
    *(char *)piVar2 = cVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = piVar2;
  }
  return;
}


