// Function: FUN_004077c0
// Entry: 004077c0
// Size: 214 bytes
// Thunk: false
// External: false


void __cdecl FUN_004077c0(undefined1 param_1 [10])

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  char *pcVar3;
  uint uVar4;
  int extraout_ECX;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 local_10;
  
  uVar4 = in_EAX[3];
  if ((int)uVar4 < 0) {
    in_EAX[3] = 6;
    uVar4 = 6;
  }
  local_1c = param_1._0_4_;
  uStack_18 = param_1._4_4_;
  uStack_14 = param_1._8_2_;
  pcVar3 = (char *)FUN_00406aa0(local_1c,uStack_18,CONCAT22(uStack_12,uStack_14),local_10,uVar4,
                                &local_20,&local_24);
  if (local_20 == -0x8000) {
    FUN_00406d90(in_EAX,(int)pcVar3);
    FUN_0040a500((undefined4 *)pcVar3);
    return;
  }
  FUN_00407310(local_20,pcVar3,in_EAX);
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + -1;
  iVar2 = extraout_ECX;
  while (0 < iVar1) {
    FUN_00406ba0(iVar2,in_EAX);
    iVar2 = in_EAX[2];
    in_EAX[2] = iVar2 + -1;
    iVar1 = iVar2;
  }
  FUN_0040a500((undefined4 *)pcVar3);
  return;
}


