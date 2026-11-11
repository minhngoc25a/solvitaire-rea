// Function: FUN_00475aa0
// Entry: 00475aa0
// Size: 51 bytes
// Thunk: false
// External: false


void __cdecl FUN_00475aa0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  param_1[0x66] = (int)puVar1;
  *puVar1 = &LAB_00475e50;
  puVar1[1] = &LAB_00475fb0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_00475b90(param_1);
  return;
}


