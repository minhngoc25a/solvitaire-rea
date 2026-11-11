// Function: FUN_0049b520
// Entry: 0049b520
// Size: 61 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049b520(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if ((*param_3 == param_1[2]) && (param_3[1] == param_1[3])) {
    if ((*param_3 & param_3[1]) == 0xffffffff) {
      return 0;
    }
    uVar1 = (*(code *)param_1[10])(*param_1,param_2,0,param_3);
    return uVar1;
  }
  return 0xb;
}


