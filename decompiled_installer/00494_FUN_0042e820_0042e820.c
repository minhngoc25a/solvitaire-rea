// Function: FUN_0042e820
// Entry: 0042e820
// Size: 66 bytes
// Thunk: false
// External: false


void __cdecl FUN_0042e820(undefined4 param_1,char *param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  
  if ((((param_2 != (char *)0x0) && (param_3 != 0)) && (param_4 != 0)) && (uVar2 = 0, param_4 != 0))
  {
    do {
      if (param_3 == 0) {
        return;
      }
      cVar1 = FUN_00448a20(param_1,param_4,uVar2);
      *param_2 = cVar1;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (uVar2 < param_4);
  }
  return;
}


