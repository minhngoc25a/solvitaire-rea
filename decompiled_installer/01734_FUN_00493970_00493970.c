// Function: FUN_00493970
// Entry: 00493970
// Size: 129 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00493970(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,uint *param_5,
            SIZE_T param_6)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint *puVar3;
  
  puVar1 = (undefined4 *)FUN_00482949(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004873c0(1,"Out of memory");
  }
  pcVar2 = FUN_004894ef(param_4);
  puVar1[1] = pcVar2;
  if (pcVar2 == (char *)0x0) {
    FUN_004873c0(1,"Out of memory");
  }
  puVar3 = (uint *)FUN_00482949(param_6);
  puVar1[2] = puVar3;
  if (puVar3 == (uint *)0x0) {
    param_6 = 0;
  }
  else {
    FUN_0044c490(puVar3,param_5,param_6);
  }
  puVar1[3] = param_6;
  *puVar1 = *(undefined4 *)(param_3 + 0x300);
  *(undefined4 **)(param_3 + 0x300) = puVar1;
  return;
}


