// Function: FUN_0048d120
// Entry: 0048d120
// Size: 139 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048d120(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  UINT UVar3;
  int *piVar4;
  byte *pbVar5;
  byte local_10 [15];
  undefined1 local_1;
  
  if (param_1 == 0) {
    pbVar5 = &DAT_005236fc;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x2c);
    if (((pbVar1 == (byte *)0x0) || (pbVar5 = pbVar1, *pbVar1 == 0)) &&
       (pbVar5 = &DAT_005236fc, pbVar1 == (byte *)0x0)) {
      pcVar2 = FUN_004894ef("");
      *(char **)(param_1 + 0x2c) = pcVar2;
      UVar3 = FUN_0048e4b0();
      *(UINT *)(param_1 + 0x30) = UVar3;
      UVar3 = FUN_0048e540();
      *(UINT *)(param_1 + 0x34) = UVar3;
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34))) {
    _snprintf((char *)local_10,0xf,"CP%d",*(undefined4 *)(param_1 + 0x34));
    local_1 = 0;
    piVar4 = FUN_0048e150(param_1,local_10,pbVar5,(byte *)0x2);
    return piVar4;
  }
  return (int *)0x0;
}


