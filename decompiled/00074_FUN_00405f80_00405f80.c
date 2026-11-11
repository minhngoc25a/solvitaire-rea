// Function: FUN_00405f80
// Entry: 00405f80
// Size: 1004 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

char * __cdecl FUN_00405f80(char *param_1)

{
  int iVar1;
  char *_Src;
  char *_Locale;
  size_t sVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  short *psVar7;
  undefined4 extraout_EDX;
  undefined4 uStackY_50;
  undefined1 auStack_3f [11];
  size_t local_34;
  undefined1 *local_30;
  short local_2a;
  short *local_28;
  short *local_24;
  uint local_20;
  
  uStackY_50 = 0x405fa0;
  _Src = setlocale(2,(char *)0x0);
  _Locale = (char *)0x0;
  if (_Src != (char *)0x0) {
    uStackY_50 = 0x405fae;
    _Locale = _strdup(_Src);
  }
  uStackY_50 = 0x405fc4;
  setlocale(2,"");
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uStackY_50 = 0x40605b;
    local_30 = &stack0xffffffb4;
    mbstowcs((wchar_t *)0x0,param_1,0);
    uStackY_50 = 0x406069;
    uVar3 = FUN_0040b3d0();
    iVar1 = -uVar3;
    local_20 = (uint)(auStack_3f + iVar1) >> 1;
    psVar5 = (short *)(((uint)(auStack_3f + iVar1) >> 1) * 2);
    local_24 = psVar5;
    *(undefined4 *)(&stack0xffffffbc + iVar1) = extraout_EDX;
    *(char **)(&stack0xffffffb8 + iVar1) = param_1;
    *(short **)(&stack0xffffffb4 + iVar1) = psVar5;
    *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x40608f;
    local_34 = mbstowcs(*(wchar_t **)(&stack0xffffffb4 + iVar1),*(char **)(&stack0xffffffb8 + iVar1)
                        ,*(size_t *)(&stack0xffffffbc + iVar1));
    psVar5[local_34] = 0;
    local_2a = *(short *)(local_20 * 2);
    if (local_34 < 2) {
      local_28 = local_24;
    }
    else if ((local_2a == 0x5c) || (local_2a == 0x2f)) {
      local_28 = local_24;
      if ((local_2a == *(short *)(local_20 * 2 + 2)) && (*(short *)(local_20 * 2 + 4) == 0))
      goto LAB_00406287;
    }
    else {
      local_28 = local_24;
      if (*(short *)(local_20 * 2 + 2) == 0x3a) {
        local_28 = local_24 + 2;
        local_2a = *(short *)(local_20 * 2 + 4);
      }
    }
    psVar4 = local_28;
    psVar5 = local_28;
    sVar6 = local_2a;
    if (local_2a != 0) {
      do {
        if (sVar6 == 0x5c) {
          sVar6 = *psVar4;
          if (sVar6 != 0x5c) goto LAB_00406113;
          do {
            do {
              psVar4 = psVar4 + 1;
LAB_0040610a:
              sVar6 = *psVar4;
            } while (sVar6 == 0x5c);
LAB_00406113:
          } while (sVar6 == 0x2f);
          if (sVar6 == 0) goto LAB_0040612c;
          sVar6 = psVar4[1];
          psVar5 = psVar4;
        }
        else {
          if (sVar6 == 0x2f) goto LAB_0040610a;
          sVar6 = psVar4[1];
        }
        if (sVar6 == 0) goto LAB_0040612c;
        psVar4 = psVar4 + 1;
      } while( true );
    }
  }
  uStackY_50 = 0x405fe9;
  sVar2 = wcstombs((char *)0x0,L".",0);
  uStackY_50 = 0x405ffd;
  DAT_00410070 = realloc(DAT_00410070,sVar2 + 1);
  uStackY_50 = 0x406016;
  wcstombs(DAT_00410070,L".",sVar2 + 1);
  uStackY_50 = 0x406026;
  setlocale(2,_Locale);
  uStackY_50 = 0x40602e;
  free(_Locale);
  return DAT_00410070;
LAB_0040612c:
  if (psVar5 <= local_28) {
    if ((local_2a != 0x5c) && (local_2a != 0x2f)) {
      *local_28 = 0x2e;
    }
    local_28[1] = 0;
    *(undefined4 *)(&stack0xffffffbc + iVar1) = 0;
    psVar5 = local_24;
    *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0;
    *(short **)(&stack0xffffffb8 + iVar1) = psVar5;
    *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x40616b;
    sVar2 = wcstombs(*(char **)(&stack0xffffffb4 + iVar1),*(wchar_t **)(&stack0xffffffb8 + iVar1),
                     *(size_t *)(&stack0xffffffbc + iVar1));
    *(size_t *)(&stack0xffffffb8 + iVar1) = sVar2 + 1;
    *(char **)(&stack0xffffffb4 + iVar1) = DAT_00410070;
    *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x40617f;
    param_1 = realloc(*(void **)(&stack0xffffffb4 + iVar1),*(size_t *)(&stack0xffffffb8 + iVar1));
    *(size_t *)(&stack0xffffffbc + iVar1) = sVar2 + 1;
    psVar5 = local_24;
    *(char **)(&stack0xffffffb4 + iVar1) = param_1;
    *(short **)(&stack0xffffffb8 + iVar1) = psVar5;
    *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x406199;
    DAT_00410070 = param_1;
    wcstombs(*(char **)(&stack0xffffffb4 + iVar1),*(wchar_t **)(&stack0xffffffb8 + iVar1),
             *(size_t *)(&stack0xffffffbc + iVar1));
    goto LAB_00406287;
  }
  do {
    psVar4 = psVar5;
    psVar5 = psVar4 + -1;
    if (psVar5 <= local_28) break;
  } while ((psVar4[-1] == 0x5c) || (psVar4[-1] == 0x2f));
  if ((local_28 == psVar5) &&
     ((((local_2a == 0x5c || (psVar5 = local_28, local_2a == 0x2f)) &&
       (psVar5 = local_28, local_28[1] == local_2a)) &&
      ((local_28[2] != 0x2f && (local_28[2] != 0x5c)))))) {
    psVar5 = psVar4;
  }
  psVar5[1] = 0;
  sVar6 = *(short *)(local_20 * 2);
  psVar4 = local_24;
  psVar5 = local_24;
  psVar7 = local_24;
  if ((sVar6 == 0x5c) || (sVar6 == 0x2f)) {
    do {
      do {
        psVar4 = psVar4 + 1;
      } while (*psVar4 == 0x5c);
    } while (*psVar4 == 0x2f);
    if ((int)psVar4 - (int)local_24 < 6) goto LAB_004062e9;
  }
  else {
LAB_004062e9:
    if (*(short *)(local_20 * 2 + 2) == sVar6) {
      sVar6 = *psVar4;
      psVar5 = psVar4;
      psVar7 = psVar4;
    }
  }
  while (psVar4 = psVar5, psVar5 = psVar7, sVar6 != 0) {
    while( true ) {
      psVar7 = psVar5 + 1;
      *psVar5 = sVar6;
      psVar5 = psVar4;
      if ((sVar6 == 0x2f) || (psVar5 = psVar4 + 1, *psVar4 == 0x5c)) break;
      sVar6 = psVar4[1];
      psVar4 = psVar5;
      psVar5 = psVar7;
      if (sVar6 == 0) goto LAB_00406263;
    }
    sVar6 = *psVar5;
    if ((sVar6 == 0x2f) || (sVar6 == 0x5c)) {
      do {
        do {
          psVar5 = psVar5 + 1;
          sVar6 = *psVar5;
        } while (sVar6 == 0x5c);
      } while (sVar6 == 0x2f);
    }
  }
LAB_00406263:
  *psVar7 = 0;
  *(size_t *)(&stack0xffffffbc + iVar1) = local_34;
  psVar5 = local_24;
  *(char **)(&stack0xffffffb4 + iVar1) = param_1;
  *(short **)(&stack0xffffffb8 + iVar1) = psVar5;
  *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x40627e;
  sVar2 = wcstombs(*(char **)(&stack0xffffffb4 + iVar1),*(wchar_t **)(&stack0xffffffb8 + iVar1),
                   *(size_t *)(&stack0xffffffbc + iVar1));
  if (sVar2 != 0xffffffff) {
    param_1[sVar2] = '\0';
  }
LAB_00406287:
  *(char **)(&stack0xffffffb8 + iVar1) = _Locale;
  *(undefined4 *)(&stack0xffffffb4 + iVar1) = 2;
  *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x406297;
  setlocale(*(int *)(&stack0xffffffb4 + iVar1),*(char **)(&stack0xffffffb8 + iVar1));
  *(char **)(&stack0xffffffb4 + iVar1) = _Locale;
  *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x40629f;
  free(*(void **)(&stack0xffffffb4 + iVar1));
  return param_1;
}


