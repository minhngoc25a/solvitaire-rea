// Function: FUN_004521ec
// Entry: 004521ec
// Size: 105 bytes
// Thunk: false
// External: false


uint __fastcall FUN_004521ec(void *param_1)

{
  _locale_t plVar1;
  int iVar2;
  uint3 uVar4;
  uint uVar3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  undefined8 local_14;
  char local_5;
  
  local_5 = '\0';
  local_14 = 0;
  plVar1 = *(_locale_t *)((int)param_1 + 0x68);
  FUN_00452255(auStack_40,(int)param_1 + 8,*(undefined4 *)((int)param_1 + 0x30),
               *(undefined4 *)((int)param_1 + 0x34),&local_5);
  iVar2 = FUN_00452790(plVar1);
  uVar4 = (uint3)((uint)iVar2 >> 8);
  if ((local_5 == '\0') || (iVar2 == 1)) {
    uVar3 = (uint)uVar4 << 8;
  }
  else if (*(char *)((int)param_1 + 0x2e) == '\0') {
    uStack_24 = 0x45224d;
    uVar3 = FUN_0045281a(param_1,(undefined4 *)&local_14);
  }
  else {
    uVar3 = CONCAT31(uVar4,1);
  }
  return uVar3;
}


