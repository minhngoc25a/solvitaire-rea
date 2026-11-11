// Function: FUN_004078a0
// Entry: 004078a0
// Size: 361 bytes
// Thunk: false
// External: false


void __cdecl FUN_004078a0(undefined1 param_1 [10])

{
  int *in_EAX;
  char *_Str;
  size_t sVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 local_10;
  
  uVar3 = in_EAX[3];
  if ((int)uVar3 < 0) {
    in_EAX[3] = 6;
    uVar3 = 6;
  }
  else if (uVar3 == 0) {
    in_EAX[3] = 1;
    uVar3 = 1;
  }
  local_1c = param_1._0_4_;
  uStack_18 = param_1._4_4_;
  uStack_14 = param_1._8_2_;
  _Str = (char *)FUN_00406aa0(local_1c,uStack_18,CONCAT22(uStack_12,uStack_14),local_10,uVar3,
                              &local_20,&local_24);
  if (local_20 == -0x8000) {
    FUN_00406d90(in_EAX,(int)_Str);
  }
  else if ((local_20 < -3) || (in_EAX[3] < local_20)) {
    if ((*(byte *)((int)in_EAX + 5) & 8) == 0) {
      sVar1 = strlen(_Str);
      in_EAX[3] = sVar1 - 1;
    }
    else {
      in_EAX[3] = in_EAX[3] + -1;
    }
    FUN_00407640(local_20,_Str,in_EAX);
  }
  else {
    if ((*(byte *)((int)in_EAX + 5) & 8) == 0) {
      sVar1 = strlen(_Str);
      iVar2 = sVar1 - local_20;
      in_EAX[3] = iVar2;
      if ((iVar2 < 0) && (0 < in_EAX[2])) {
        in_EAX[2] = iVar2 + in_EAX[2];
      }
    }
    else {
      in_EAX[3] = in_EAX[3] - local_20;
    }
    FUN_00407310(local_20,_Str,in_EAX);
    iVar2 = in_EAX[2];
    in_EAX[2] = iVar2 + -1;
    iVar4 = extraout_ECX;
    if (0 < iVar2) {
      do {
        FUN_00406ba0(iVar4,in_EAX);
        iVar4 = in_EAX[2];
        in_EAX[2] = iVar4 + -1;
      } while (0 < iVar4);
      FUN_0040a500((undefined4 *)_Str);
      return;
    }
  }
  FUN_0040a500((undefined4 *)_Str);
  return;
}


