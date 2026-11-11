// Function: FUN_00467f10
// Entry: 00467f10
// Size: 503 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00467f10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            uint param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined4 *)(param_2 + 0x24);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    FUN_0047d191((LPVOID)*puVar1);
    *puVar1 = 0;
    (**(code **)(param_2 + 0x34))(param_1,param_2);
  }
  puVar2 = (undefined4 *)FUN_0047f911(1,0x4b08);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00487380((int)param_1,0xc,0x528014);
    return 0xffffffe2;
  }
  iVar3 = FUN_00482949(0x20);
  puVar2[0x12be] = iVar3;
  if (iVar3 == 0) {
    FUN_0047d191(puVar2);
    FUN_00487380((int)param_1,0xc,0x528014);
    return 0xffffffe2;
  }
  puVar2[0x12bf] = iVar3;
  puVar2[0x12c0] = iVar3 + 0x20;
  puVar4 = (undefined1 *)FUN_00482949(5);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = (char)param_5;
    puVar4[2] = (char)(param_6 >> 8);
    puVar4[3] = (char)(param_6 >> 0x10);
    puVar4[4] = (char)(param_6 >> 0x18);
    puVar4[1] = (char)param_6;
    (*(code *)PTR_FUN_00518f50)(puVar2 + 1);
    iVar3 = (*(code *)PTR_FUN_00518f54)(puVar2 + 1,param_6);
    if (iVar3 != 0) {
      (*(code *)PTR_FUN_00518f5c)(puVar2 + 1,param_5);
      puVar2[0x12bd] = &LAB_00469450;
      puVar2[0x12bc] = param_1;
      puVar2[0x12ba] = puVar2 + 0x12bc;
      (*(code *)PTR_FUN_00518f74)(puVar2 + 0x12b4);
      *puVar2 = 0;
      *(undefined4 **)(param_2 + 0x2c) = puVar2;
      *param_4 = &LAB_00468200;
      *(undefined4 *)(param_2 + 0x28) = 1;
      *puVar1 = 5;
      *(undefined1 **)(param_2 + 0x30) = &LAB_00468110;
      *param_1 = puVar4;
      return 0;
    }
    FUN_0047d191((LPVOID)puVar2[0x12be]);
    FUN_0047d191(puVar2);
    FUN_0047d191(puVar4);
    FUN_00487380((int)param_1,0xc,0x527ff0);
    return 0xffffffe2;
  }
  FUN_0047d191((LPVOID)puVar2[0x12be]);
  FUN_0047d191(puVar2);
  FUN_00487380((int)param_1,0xc,0x527ff0);
  return 0xffffffe2;
}


