// Function: FUN_0041c39a
// Entry: 0041c39a
// Size: 98 bytes
// Thunk: false
// External: false


int FUN_0041c39a(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  tagRECT local_18;
  int local_8;
  
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 == 1) {
      FUN_00477338((int)puVar1,&local_8,(int *)&param_1);
    }
    else {
      if (*(code **)(puVar1[1] + 0x54) == (code *)0x0) {
        GetWindowRect((HWND)*puVar1,&local_18);
        iVar2 = local_18.right - local_18.left;
      }
      else {
        iVar2 = (**(code **)(puVar1[1] + 0x54))(puVar1);
      }
      local_8 = FUN_0047737b(iVar2);
    }
  }
  return local_8;
}


