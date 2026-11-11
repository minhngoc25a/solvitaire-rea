// Function: FUN_00407710
// Entry: 00407710
// Size: 169 bytes
// Thunk: false
// External: false


void __cdecl FUN_00407710(undefined1 param_1 [10])

{
  int *in_EAX;
  uint uVar1;
  char *pcVar2;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 local_10;
  
  if (in_EAX[3] < 0) {
    in_EAX[3] = 6;
    uVar1 = 7;
  }
  else {
    uVar1 = in_EAX[3] + 1;
  }
  local_1c = param_1._0_4_;
  uStack_18 = param_1._4_4_;
  uStack_14 = param_1._8_2_;
  pcVar2 = (char *)FUN_00406aa0(local_1c,uStack_18,CONCAT22(uStack_12,uStack_14),local_10,uVar1,
                                &local_20,&local_24);
  if (local_20 != -0x8000) {
    FUN_00407640(local_20,pcVar2,in_EAX);
    FUN_0040a500((undefined4 *)pcVar2);
    return;
  }
  FUN_00406d90(in_EAX,(int)pcVar2);
  FUN_0040a500((undefined4 *)pcVar2);
  return;
}


