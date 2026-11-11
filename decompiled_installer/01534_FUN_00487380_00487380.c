// Function: FUN_00487380
// Entry: 00487380
// Size: 59 bytes
// Thunk: false
// External: false


void __cdecl FUN_00487380(int param_1,undefined4 param_2,int param_3)

{
  char *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_004982c0((int *)(param_1 + 0x20),param_3,(int *)&stack0x00000010,unaff_ESI,unaff_EDI);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
  return;
}


