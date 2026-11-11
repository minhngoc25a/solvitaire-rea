// Function: FUN_0048037c
// Entry: 0048037c
// Size: 146 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048037c(UINT param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c [2];
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0050bad1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    uVar2 = FUN_0047d9e8();
    if ((char)uVar2 != '\0') {
      FUN_00480291(param_1);
    }
  }
  local_28 = &param_2;
  local_11 = 0;
  local_24 = &param_3;
  local_20 = &local_11;
  local_8 = 0;
  local_1c[1] = 2;
  local_1c[0] = 2;
  operator()<>(local_1c,&local_28);
  if (param_3 != 0) {
    ExceptionList = local_10;
    return;
  }
  FUN_0048032c(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


