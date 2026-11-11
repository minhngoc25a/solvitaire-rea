// Function: FUN_0041e1cd
// Entry: 0041e1cd
// Size: 223 bytes
// Thunk: false
// External: false


void FUN_0041e1cd(int *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  uint uVar4;
  int nCmdShow;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      if ((param_3 & 3) != 0) {
        pHVar2 = GetWindow((HWND)*puVar1,4);
        FUN_00477652((HWND)*puVar1,param_3,pHVar2);
      }
      if (puVar1[0xf] == -1) {
        uVar3 = IsZoomed((HWND)*puVar1);
        uVar4 = IsIconic((HWND)*puVar1);
      }
      else {
        uVar3 = (uint)(puVar1[0xf] == 0x1000000);
        uVar4 = (uint)(puVar1[0xf] == 0x20000000);
        puVar1[0xf] = 0xffffffff;
      }
      if ((param_3 & 0x2000000) == 0) {
        if (uVar3 == 0) {
          nCmdShow = (uVar4 != 0) + 1;
        }
        else {
          nCmdShow = 3;
        }
      }
      else if (uVar3 == 0) {
        nCmdShow = (-(uint)(uVar4 != 0) & 3) + 4;
      }
      else {
        nCmdShow = 8;
      }
      ShowWindow((HWND)*puVar1,nCmdShow);
    }
    else {
      pHVar2 = GetWindow((HWND)*puVar1,4);
      if ((pHVar2 != (HWND)0x0) && (puVar1[7] == 0)) {
        SetActiveWindow(pHVar2);
      }
      ShowWindow((HWND)*puVar1,0);
    }
  }
  return;
}


