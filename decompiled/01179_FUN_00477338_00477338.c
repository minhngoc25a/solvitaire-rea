// Function: FUN_00477338
// Entry: 00477338
// Size: 67 bytes
// Thunk: false
// External: false


void FUN_00477338(int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x90);
  if (pcVar1 == (code *)0x0) {
    iVar2 = 0;
    *param_2 = 0;
  }
  else {
    (*pcVar1)(param_1,param_2,param_3);
    iVar2 = FUN_0047737b(*param_2);
    *param_2 = iVar2;
    iVar2 = FUN_004761af(*param_3);
  }
  *param_3 = iVar2;
  return;
}


