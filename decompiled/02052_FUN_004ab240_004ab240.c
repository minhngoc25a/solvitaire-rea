// Function: FUN_004ab240
// Entry: 004ab240
// Size: 68 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ab240(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined4 **)(param_1 + 0x1a8) = puVar1;
  *puVar1 = &LAB_004ab290;
  puVar1[1] = &LAB_004abb80;
  puVar1[2] = FUN_004ab8d0;
  puVar1[3] = &LAB_004abb50;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[5] = 1;
  return;
}


