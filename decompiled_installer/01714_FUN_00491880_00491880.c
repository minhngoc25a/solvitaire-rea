// Function: FUN_00491880
// Entry: 00491880
// Size: 55 bytes
// Thunk: false
// External: false


int __cdecl FUN_00491880(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return iVar2;
    }
    if ((cVar1 < '0') || ('9' < cVar1)) break;
    param_1 = param_1 + 1;
    iVar2 = (int)cVar1 + (iVar2 * 5 + -0x18) * 2;
    cVar1 = *param_1;
  }
  return -1;
}


