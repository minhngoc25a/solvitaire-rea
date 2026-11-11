// Function: FUN_0041b85d
// Entry: 0041b85d
// Size: 154 bytes
// Thunk: false
// External: false


void FUN_0041b85d(undefined4 *param_1,int param_2,int param_3)

{
  LPARAM lParam;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_48;
  
  if (param_2 == 2) {
    lParam = param_3;
    if (param_3 == -1) {
      lParam = 0;
    }
    SendMessageW((HWND)*param_1,0x443,(uint)(param_3 == -1),lParam);
    param_1[5] = param_3;
  }
  else if (param_2 == 1) {
    local_5c = 0x5c;
    local_58 = 0x40000000;
    local_48 = param_3;
    if (param_3 == -1) {
      local_54 = 0x40000000;
    }
    else {
      local_54 = 0;
    }
    SendMessageW((HWND)*param_1,0x444,4,(LPARAM)&local_5c);
    SendMessageW((HWND)*param_1,0x444,0,(LPARAM)&local_5c);
    param_1[6] = param_3;
  }
  return;
}


