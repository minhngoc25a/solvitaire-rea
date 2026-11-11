// Function: FUN_0048d0a0
// Entry: 0048d0a0
// Size: 121 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048d0a0(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  UINT UVar4;
  byte *pbVar5;
  
  pbVar1 = (byte *)((uint)(param_3 != 0) * 4 + 2);
  if (param_1 == 0) {
    FUN_0048e150(0,param_2,&DAT_005236fc,pbVar1);
    return;
  }
  pbVar2 = *(byte **)(param_1 + 0x2c);
  if (((pbVar2 == (byte *)0x0) || (pbVar5 = pbVar2, *pbVar2 == 0)) &&
     (pbVar5 = &DAT_005236fc, pbVar2 == (byte *)0x0)) {
    pcVar3 = FUN_004894ef("");
    *(char **)(param_1 + 0x2c) = pcVar3;
    UVar4 = FUN_0048e4b0();
    *(UINT *)(param_1 + 0x30) = UVar4;
    UVar4 = FUN_0048e540();
    *(UINT *)(param_1 + 0x34) = UVar4;
  }
  FUN_0048e150(param_1,param_2,pbVar5,pbVar1);
  return;
}


