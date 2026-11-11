// Function: FUN_0046971c
// Entry: 0046971c
// Size: 396 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046971c(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *lpDistanceToMoveHigh;
  DWORD dwMoveMethod;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  short local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  short local_8;
  
  puVar1 = param_1;
  iVar5 = 0;
  iVar6 = 0x40;
  if (param_1[3] != 0) {
    return;
  }
  pvVar2 = HeapAlloc(DAT_00542264,0,0x100);
  dwMoveMethod = 0;
  lpDistanceToMoveHigh = (PLONG)0x0;
  uVar8 = 4;
  puVar1[3] = pvVar2;
  puVar1[5] = 0;
  uVar4 = 4;
  do {
    SetFilePointer((HANDLE)*puVar1,uVar4,lpDistanceToMoveHigh,dwMoveMethod);
    if (puVar1[7] == 0x706c7a31) {
      ReadFile((HANDLE)*puVar1,&local_18,0x18,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if (param_1 != (undefined4 *)0x18) {
        return;
      }
      local_2c = local_18;
      local_24 = local_10;
      local_28 = local_14;
      local_20 = local_c;
      local_1c = local_8;
    }
    else {
      ReadFile((HANDLE)*puVar1,&local_2c,0x12,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if (param_1 != (undefined4 *)0x12) {
        return;
      }
    }
    if (iVar6 <= (int)puVar1[5]) {
      iVar6 = iVar6 + 0x40;
      pvVar2 = HeapReAlloc(DAT_00542264,8,(LPVOID)puVar1[3],iVar6 * 4);
      puVar1[3] = pvVar2;
    }
    puVar3 = HeapAlloc(DAT_00542264,0,(int)local_1c + 0x19);
    *puVar3 = local_2c;
    puVar3[1] = local_28;
    puVar3[2] = local_24;
    puVar3[3] = local_20;
    ReadFile((HANDLE)*puVar1,puVar3 + 6,(int)local_1c,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    *(undefined1 *)(local_1c + 0x18 + (int)puVar3) = 0;
    if (puVar1[7] == 0x706c7a31) {
      uVar4 = (int)local_1c + 0x18;
    }
    else {
      uVar4 = (int)local_1c + 0x12;
    }
    uVar7 = uVar8 + uVar4;
    puVar3[4] = uVar7;
    iVar5 = iVar5 + (uint)CARRY4(uVar8,uVar4);
    puVar3[5] = iVar5;
    uVar8 = uVar7 + local_24;
    iVar5 = iVar5 + local_20 + (uint)CARRY4(uVar7,local_24);
    dwMoveMethod = 1;
    *(undefined4 **)(puVar1[3] + puVar1[5] * 4) = puVar3;
    local_30 = local_20;
    puVar1[5] = puVar1[5] + 1;
    lpDistanceToMoveHigh = &local_30;
    uVar4 = local_24;
  } while( true );
}


