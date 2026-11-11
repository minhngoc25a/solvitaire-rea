// Function: FUN_00479e30
// Entry: 00479e30
// Size: 405 bytes
// Thunk: false
// External: false


void FUN_00479e30(int param_1,int param_2,uint param_3,LPCWSTR param_4,int param_5)

{
  uint uVar1;
  WCHAR WVar2;
  uint *puVar3;
  LPCWSTR pWVar4;
  uint uVar5;
  uint *puVar6;
  uint unaff_EDI;
  uint local_90 [34];
  int iStack_8;
  
  if (((param_3 & 0x10000) != 0) && (param_1 != 0)) {
    uVar1 = *(uint *)(param_1 + 4);
    if (param_4 == (LPCWSTR)0x0) {
      param_4 = L"";
    }
    if (param_5 == 0x18) {
      param_4 = (LPCWSTR)FUN_0044e510(param_4);
      pWVar4 = param_4;
      do {
        WVar2 = *pWVar4;
        pWVar4 = (LPCWSTR)((int)pWVar4 + 1);
      } while ((char)WVar2 != '\0');
      uVar5 = (int)pWVar4 - (int)((int)param_4 + 1);
    }
    else if (param_5 == 0x19) {
      pWVar4 = param_4;
      do {
        WVar2 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar2 != L'\0');
      uVar5 = ((int)pWVar4 - (int)(param_4 + 1) >> 1) * 2;
    }
    else {
      param_4 = (LPCWSTR)FUN_0044e6a0(param_4);
      pWVar4 = param_4;
      do {
        WVar2 = *pWVar4;
        pWVar4 = (LPCWSTR)((int)pWVar4 + 1);
      } while ((char)WVar2 != '\0');
      uVar5 = (int)pWVar4 - (int)((int)param_4 + 1);
    }
    if ((int)uVar1 < (int)uVar5) {
      (**(code **)(param_2 + 0xc))(param_1);
      (**(code **)(param_2 + 0x10))(param_1);
      FUN_0044c490((uint *)&stack0xffffff60,(uint *)(param_1 + 8),unaff_EDI);
      _memset((void *)((int)local_90 + (unaff_EDI - 0x10)),0,uVar1 - unaff_EDI);
      (**(code **)(iStack_8 + 8))(param_1,1);
    }
    else {
      FUN_0044c490(local_90,(uint *)param_4,uVar5);
      _memset((void *)((int)local_90 + uVar5),0,uVar1 - uVar5);
    }
    puVar6 = (uint *)(param_1 + 0x48);
    FUN_0044c490(puVar6,local_90,uVar1);
    if (0 < (int)uVar1) {
      puVar3 = local_90;
      uVar5 = uVar1;
      do {
        *(byte *)puVar3 = (byte)*puVar3 ^ 0x36;
        puVar3 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar6 = (byte)*puVar6 ^ 0x5c;
        puVar6 = (uint *)((int)puVar6 + 1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    (**(code **)(param_2 + 0xc))(param_1,local_90,uVar1);
    if (param_2 == 0x18) {
      FUN_0044e5a0(param_4);
      return;
    }
    if (param_2 != 0x19) {
      FUN_0044e5a0(param_4);
    }
  }
  return;
}


