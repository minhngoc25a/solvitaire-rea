// Function: FUN_0041793f
// Entry: 0041793f
// Size: 919 bytes
// Thunk: false
// External: false


undefined4 FUN_0041793f(LPCWSTR param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  undefined4 uVar4;
  int iVar5;
  LPCSTR lpBuffer;
  LPVOID pvVar6;
  LPWSTR pWVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  short *psVar11;
  LPCWSTR lpFileName;
  char *pcVar12;
  char *pcVar13;
  uint local_c;
  int *local_8;
  DWORD local_4;
  
  local_8 = (int *)0x0;
  puVar3 = (undefined4 *)FUN_00423ccb(DAT_00543794);
  FUN_00417860();
  lpFileName = L"";
  if (param_1 != (LPCWSTR)0x0) {
    lpFileName = param_1;
  }
  puVar3[3] = 0;
  hFile = CreateFileW(lpFileName,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *puVar3 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    hFile = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    *puVar3 = hFile;
    if (hFile == (HANDLE)0xffffffff) {
      hFile = CreateFileW(lpFileName,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      *puVar3 = hFile;
    }
    puVar3[3] = 1;
    if (hFile == (HANDLE)0xffffffff) {
      *puVar3 = 0;
      puVar3[0xb] = param_2;
      puVar3[6] = 0xfde9;
      uVar10 = FUN_0044be0a(lpFileName);
      psVar11 = HeapAlloc(DAT_00542264,0,uVar10 * 2 + 2);
      puVar3[1] = psVar11;
      if (psVar11 != (short *)0x0) {
        FUN_0044ca75(psVar11,lpFileName);
      }
      goto LAB_00417cca;
    }
  }
  nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)&param_1);
  uVar4 = 0xfde9;
  if (param_3 != 2) {
    uVar4 = 0;
  }
  puVar3[6] = uVar4;
  puVar3[0xb] = param_2;
  if ((int)nNumberOfBytesToRead < 3) {
LAB_00417a45:
    if (0 < (int)nNumberOfBytesToRead) goto LAB_00417a4d;
  }
  else {
    ReadFile((HANDLE)*puVar3,&local_c,3,&local_4,(LPOVERLAPPED)0x0);
    if ((local_4 == 3) && (iVar5 = FUN_0044cd00(&local_c,(uint *)&DAT_00523700,3), iVar5 == 0)) {
      puVar3[6] = 0xfde9;
      nNumberOfBytesToRead = nNumberOfBytesToRead - 3;
      goto LAB_00417a45;
    }
    SetFilePointer((HANDLE)*puVar3,0,(PLONG)0x0,0);
LAB_00417a4d:
    if (puVar3[6] == 0) {
      lpBuffer = HeapAlloc(DAT_00542264,0,nNumberOfBytesToRead + 2);
      if (lpBuffer != (LPCSTR)0x0) {
        pvVar6 = HeapAlloc(DAT_00542264,0,nNumberOfBytesToRead * 4 + 2);
        puVar3[4] = pvVar6;
        if (pvVar6 != (LPVOID)0x0) {
          ReadFile((HANDLE)*puVar3,lpBuffer,nNumberOfBytesToRead,&local_4,(LPOVERLAPPED)0x0);
          lpBuffer[local_4] = '\0';
          pWVar7 = FUN_0044e620(lpBuffer);
          puVar8 = (uint *)FUN_0044e6a0(pWVar7);
          FUN_0044e380((uint *)puVar3[4],puVar8);
          FUN_0044e5a0(puVar8);
          FUN_0044e5a0(pWVar7);
          nNumberOfBytesToRead = _strlen((char *)puVar3[4]);
          puVar3[6] = 0xfde9;
          HeapFree(DAT_00542264,0,lpBuffer);
        }
      }
    }
    else {
      pvVar6 = HeapAlloc(DAT_00542264,0,nNumberOfBytesToRead + 2);
      puVar3[4] = pvVar6;
      if (pvVar6 != (LPVOID)0x0) {
        ReadFile((HANDLE)*puVar3,pvVar6,nNumberOfBytesToRead,&local_4,(LPOVERLAPPED)0x0);
        nNumberOfBytesToRead = local_4;
      }
    }
  }
  if (puVar3[4] != 0) {
    *(undefined2 *)(puVar3[4] + nNumberOfBytesToRead) = 0;
    pcVar12 = (char *)puVar3[4];
    puVar3[5] = pcVar12 + nNumberOfBytesToRead;
    if (pcVar12 < pcVar12 + nNumberOfBytesToRead) {
      do {
        for (; (cVar1 = *pcVar12, cVar1 == ' ' || (cVar1 == '\t')); pcVar12 = pcVar12 + 1) {
        }
        if (cVar1 == ';') {
          pcVar13 = pcVar12 + 1;
          if (*pcVar13 == ' ') {
            pcVar13 = pcVar12 + 2;
          }
          local_8 = (int *)FUN_0041790f(puVar3 + 7,local_8,2,(int)pcVar13);
          for (; ((*pcVar13 != '\0' && (*pcVar13 != '\n')) && (*pcVar13 != '\r'));
              pcVar13 = pcVar13 + 1) {
          }
        }
        else {
          if (cVar1 == '[') {
            pcVar12 = pcVar12 + 1;
            local_8 = (int *)FUN_0041790f(puVar3 + 7,local_8,1,(int)pcVar12);
            for (; (((*pcVar12 != '\0' && (*pcVar12 != ']')) && (*pcVar12 != '\n')) &&
                   (*pcVar12 != '\r')); pcVar12 = pcVar12 + 1) {
            }
            cVar1 = *pcVar12;
            *pcVar12 = '\0';
            pcVar12 = pcVar12 + 1;
            if (cVar1 != ']') goto LAB_00417c77;
            cVar1 = *pcVar12;
            do {
              if (cVar1 == '\0') goto LAB_00417c77;
              if (cVar1 == '\n') goto LAB_00417c77;
              if (cVar1 == '\r') goto LAB_00417c77;
              pcVar12 = pcVar12 + 1;
              cVar1 = *pcVar12;
            } while( true );
          }
          if (cVar1 == '\n') goto LAB_00417c77;
          pcVar13 = pcVar12;
          if (cVar1 == '\r') goto LAB_00417c77;
          while (((pcVar9 = pcVar13, cVar1 != '\0' && (cVar1 != '=')) &&
                 ((cVar1 != '\r' && (cVar1 != '\n'))))) {
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 1;
          }
          do {
            pcVar2 = pcVar9;
            pcVar9 = pcVar2 + -1;
            if (pcVar9 <= pcVar12) break;
          } while ((*pcVar9 == ' ') || (*pcVar9 == '\t'));
          *pcVar2 = '\0';
          do {
            do {
              pcVar13 = pcVar13 + 1;
            } while (*pcVar13 == ' ');
          } while (*pcVar13 == '\t');
          local_8 = (int *)FUN_0041790f(puVar3 + 7,local_8,(int)pcVar12,(int)pcVar13);
          for (; ((*pcVar13 != '\0' && (*pcVar13 != '\n')) && (*pcVar13 != '\r'));
              pcVar13 = pcVar13 + 1) {
          }
        }
        *pcVar13 = '\0';
        pcVar12 = pcVar13;
        do {
          pcVar12 = pcVar12 + 1;
LAB_00417c77:
        } while ((*pcVar12 == '\n') || (*pcVar12 == '\r'));
      } while (pcVar12 < (char *)puVar3[5]);
    }
  }
LAB_00417cca:
  return *puVar3;
}


