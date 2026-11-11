// Function: FUN_004620d0
// Entry: 004620d0
// Size: 128 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004620d0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  switch(*(undefined1 *)((int)param_1 + 5)) {
  case 0x1c:
    if ((*param_1 == -0x504385c9) && ((short)param_1[1] == 0x1c27)) {
      uVar1 = thunk_FUN_0048b320(0,(uint *)(param_1 + 3),0x14);
      uVar2 = FUN_00461550(param_1 + 2);
      if (uVar1 == uVar2) {
        return 0;
      }
    }
    break;
  case 0x27:
    return 1;
  case 0x37:
    return 5;
  case 0x7a:
    return 4;
  case 0xaf:
    return 2;
  case 0xbc:
    return 3;
  }
  return 6;
}


