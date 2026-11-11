// Function: FUN_004183da
// Entry: 004183da
// Size: 574 bytes
// Thunk: false
// External: false


uint * __cdecl FUN_004183da(int *param_1,uint *param_2,uint param_3,LPCWSTR param_4,uint *param_5)

{
  uint uVar1;
  HANDLE hFile;
  int *lpMem;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *local_c;
  uint local_8;
  int *local_4;
  
  puVar5 = (uint *)0xffffffff;
  puVar6 = (uint *)0x0;
  if ((param_4 == (LPCWSTR)0x0) || (*param_4 == L'\0')) {
    if (param_1[4] == 0) goto LAB_004185d2;
    puVar6 = *(uint **)(param_1[3] + param_1[6] * 4);
  }
  else {
    param_4 = (LPCWSTR)FUN_0044e6a0(param_4);
    puVar6 = (uint *)FUN_004695d0(param_1,(char *)param_4);
  }
  if (puVar6 != (uint *)0x0) {
    if (param_5 != (uint *)0x0) {
      param_2 = HeapAlloc(DAT_00542264,0,*puVar6);
      param_3 = *puVar6;
    }
    local_8 = param_3;
    if (param_2 != (uint *)0x0) {
      if (((int)puVar6[1] <= (int)param_3 >> 0x1f) &&
         (((int)puVar6[1] < (int)param_3 >> 0x1f || (*puVar6 <= param_3)))) {
        if (*param_1 != 0) {
          SetFilePointer((HANDLE)*param_1,puVar6[4],(PLONG)(puVar6 + 5),0);
        }
        uVar2 = puVar6[2];
        uVar1 = *puVar6;
        hFile = (HANDLE)*param_1;
        if ((uVar2 == uVar1) && (puVar6[3] == puVar6[1])) {
          if (hFile == (HANDLE)0x0) {
            local_4 = (int *)(uVar1 + puVar6[4]);
            iVar3 = puVar6[5] + puVar6[1] + (uint)CARRY4(uVar1,puVar6[4]);
            iVar4 = param_1[2] >> 0x1f;
            if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (local_4 <= (int *)param_1[2])))) {
              FUN_0044c490(param_2,(uint *)(param_1[1] + puVar6[4]),*puVar6);
              puVar5 = (uint *)*puVar6;
            }
          }
          else {
            ReadFile(hFile,param_2,*puVar6,(LPDWORD)&local_c,(LPOVERLAPPED)0x0);
            if (((uint *)*puVar6 == local_c) && (puVar6[1] == (int)local_c >> 0x1f)) {
              puVar5 = local_c;
            }
          }
        }
        else if (hFile == (HANDLE)0x0) {
          local_4 = (int *)(uVar2 + puVar6[4]);
          iVar3 = puVar6[5] + puVar6[3] + (uint)CARRY4(uVar2,puVar6[4]);
          iVar4 = param_1[2] >> 0x1f;
          if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (local_4 <= (int *)param_1[2])))) {
            uVar2 = FUN_00469cc5((int *)(param_1[1] + puVar6[4]),(undefined1 *)param_2,local_8);
            if ((uVar2 == *puVar6) && ((int)uVar2 >> 0x1f == puVar6[1])) {
              puVar5 = (uint *)*puVar6;
            }
          }
        }
        else {
          local_4 = HeapAlloc(DAT_00542264,0,uVar2);
          if (local_4 != (int *)0x0) {
            ReadFile((HANDLE)*param_1,local_4,puVar6[2],(LPDWORD)&local_c,(LPOVERLAPPED)0x0);
            lpMem = local_4;
            if (((uint *)puVar6[2] == local_c) && (puVar6[3] == (int)local_c >> 0x1f)) {
              uVar2 = FUN_00469cc5(local_4,(undefined1 *)param_2,local_8);
              if ((uVar2 == *puVar6) && ((int)uVar2 >> 0x1f == puVar6[1])) {
                puVar5 = (uint *)*puVar6;
              }
            }
            HeapFree(DAT_00542264,0,lpMem);
          }
        }
      }
    }
  }
LAB_004185d2:
  if (param_5 != (uint *)0x0) {
    if (puVar5 == (uint *)0xffffffff) {
      if (param_2 != (uint *)0x0) {
        HeapFree(DAT_00542264,0,param_2);
      }
      puVar5 = (uint *)0x0;
    }
    else {
      *param_5 = *puVar6;
      puVar5 = param_2;
    }
  }
  if ((param_4 != (LPCWSTR)0x0) && (*param_4 != L'\0')) {
    FUN_0044e5a0(param_4);
  }
  return puVar5;
}


