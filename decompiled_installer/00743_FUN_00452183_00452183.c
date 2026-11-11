// Function: FUN_00452183
// Entry: 00452183
// Size: 105 bytes
// Thunk: false
// External: false


uint __fastcall FUN_00452183(void *param_1)

{
  _locale_t plVar1;
  int iVar2;
  uint3 uVar4;
  uint uVar3;
  undefined1 auStack_3c [28];
  undefined4 uStack_20;
  undefined4 local_c;
  char local_5;
  
  local_5 = '\0';
  local_c = 0;
  plVar1 = *(_locale_t *)((int)param_1 + 0x68);
  FUN_00452255(auStack_3c,(int)param_1 + 8,*(undefined4 *)((int)param_1 + 0x30),
               *(undefined4 *)((int)param_1 + 0x34),&local_5);
  iVar2 = FUN_004526d1(plVar1);
  uVar4 = (uint3)((uint)iVar2 >> 8);
  if ((local_5 == '\0') || (iVar2 == 1)) {
    uVar3 = (uint)uVar4 << 8;
  }
  else if (*(char *)((int)param_1 + 0x2e) == '\0') {
    uStack_20 = 0x4521e4;
    uVar3 = FUN_0045275b(param_1,&local_c);
  }
  else {
    uVar3 = CONCAT31(uVar4,1);
  }
  return uVar3;
}


