// Function: FUN_0046f470
// Entry: 0046f470
// Size: 61 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f470(int param_1,uint param_2,uint param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  
  if ((param_1 != 0) && (param_3 < param_2)) {
    uVar1 = param_3;
    if ((param_4 != (char *)0x0) && (cVar2 = *param_4, cVar2 != '\0')) {
      do {
        if (param_2 - 1 <= uVar1) break;
        *(char *)(param_1 + uVar1) = cVar2;
        uVar1 = uVar1 + 1;
        cVar2 = param_4[uVar1 - param_3];
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return;
}


