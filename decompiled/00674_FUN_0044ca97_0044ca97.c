// Function: FUN_0044ca97
// Entry: 0044ca97
// Size: 617 bytes
// Thunk: false
// External: false


undefined4 FUN_0044ca97(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *_Str;
  bool bVar2;
  HANDLE hObject;
  uint *puVar3;
  size_t sVar4;
  size_t sVar5;
  uint *_Str_00;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint *_Str_01;
  DWORD local_4;
  
  uVar9 = 0;
  hObject = (HANDLE)*param_1;
  if (((hObject != (HANDLE)0x0) && (param_1[2] != 0)) && (param_1[3] != 0)) {
    CloseHandle(hObject);
    *param_1 = 0;
    hObject = (HANDLE)0x0;
  }
  if ((param_1[2] != 0) && (hObject == (HANDLE)0x0)) {
    if (param_1[1] == 0) {
      return 0;
    }
    hObject = CreateFileW((LPCWSTR)param_1[1],0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
    *param_1 = hObject;
    if (hObject == (HANDLE)0xffffffff) {
      *param_1 = 0;
      return 0;
    }
  }
  if ((hObject != (HANDLE)0x0) && (param_1[2] != 0)) {
    puVar3 = (uint *)&DAT_0052b26c;
    if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
      puVar3 = (uint *)&DAT_0052968c;
    }
    puVar1 = (undefined4 *)param_1[7];
    iVar7 = 5;
    if (param_1[6] != 0xfde9) {
      iVar7 = 0;
    }
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      _Str = (char *)puVar1[3];
      if (puVar1[2] == 1) {
        sVar4 = _strlen(_Str);
        iVar7 = iVar7 + 4 + sVar4;
        if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
          sVar5 = _strlen("\r\n");
          goto LAB_0044cb8f;
        }
      }
      else {
        if (puVar1[2] == 2) {
          sVar5 = _strlen(_Str);
          iVar7 = iVar7 + 4;
        }
        else {
          sVar4 = _strlen(_Str);
          sVar5 = _strlen((char *)puVar1[2]);
          sVar5 = sVar5 + sVar4;
          iVar7 = iVar7 + 5;
        }
LAB_0044cb8f:
        iVar7 = iVar7 + sVar5;
      }
    }
    if (iVar7 == 0) {
      SetFilePointer((HANDLE)*param_1,0,(PLONG)0x0,0);
      SetEndOfFile((HANDLE)*param_1);
    }
    else {
      _Str_00 = HeapAlloc(DAT_00542264,0,iVar7 + 1);
      if (_Str_00 != (uint *)0x0) {
        _Str_01 = _Str_00;
        if ((param_1[6] == 0xfde9) && ((*(byte *)(param_1 + 0xb) & 4) == 0)) {
          FUN_0044e380(_Str_00,(uint *)&DAT_00523700);
          FUN_0044e390(_Str_00,(uint *)&DAT_0052b9c4);
          sVar4 = _strlen((char *)_Str_00);
          _Str_01 = (uint *)((int)_Str_00 + sVar4);
        }
        piVar8 = (int *)param_1[7];
        if (piVar8 != (int *)0x0) {
          bVar2 = true;
          do {
            if (piVar8[2] == 1) {
              if (((*(byte *)(param_1 + 0xb) & 2) != 0) && (!bVar2)) {
                FUN_0044e380(_Str_01,(uint *)&DAT_0052b9c4);
                sVar4 = _strlen((char *)_Str_01);
                _Str_01 = (uint *)((int)_Str_01 + sVar4);
              }
              FUN_0044e380(_Str_01,(uint *)&DAT_00528ac0);
              FUN_0044e390(_Str_01,(uint *)piVar8[3]);
              puVar6 = (uint *)&DAT_00528abc;
              bVar2 = false;
            }
            else {
              if (piVar8[2] == 2) {
                FUN_0044e380(_Str_01,(uint *)&DAT_0052b270);
              }
              else {
                FUN_0044e380(_Str_01,(uint *)piVar8[2]);
                FUN_0044e390(_Str_01,puVar3);
              }
              puVar6 = (uint *)piVar8[3];
            }
            FUN_0044e390(_Str_01,puVar6);
            FUN_0044e390(_Str_01,(uint *)&DAT_0052b9c4);
            sVar4 = _strlen((char *)_Str_01);
            piVar8 = (int *)*piVar8;
            _Str_01 = (uint *)((int)_Str_01 + sVar4);
          } while (piVar8 != (int *)0x0);
        }
        SetFilePointer((HANDLE)*param_1,0,(PLONG)0x0,0);
        WriteFile((HANDLE)*param_1,_Str_00,(int)_Str_01 - (int)_Str_00,&local_4,(LPOVERLAPPED)0x0);
        SetEndOfFile((HANDLE)*param_1);
        HeapFree(DAT_00542264,0,_Str_00);
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    uVar9 = 1;
  }
  return uVar9;
}


