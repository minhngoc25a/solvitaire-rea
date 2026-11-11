// Function: FUN_00473e40
// Entry: 00473e40
// Size: 71 bytes
// Thunk: false
// External: false


void __cdecl FUN_00473e40(int param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar3 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar2 = &DAT_0050dbb0;
    }
    else if (bVar1 == 2) {
      puVar2 = &DAT_0050dcb0;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar2 = &DAT_0050ddb0;
    }
    for (; param_2 < pbVar3; param_2 = param_2 + 1) {
      *param_2 = puVar2[*param_2];
    }
  }
  return;
}


