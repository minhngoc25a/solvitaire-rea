// Function: FUN_004a4ee0
// Entry: 004a4ee0
// Size: 51 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a4ee0(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = *param_3;
    uVar2 = *(undefined2 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined8 *)(param_2 + 0xaa) = uVar1;
    *(undefined2 *)(param_2 + 0xb2) = uVar2;
  }
  return;
}


