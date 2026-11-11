// Function: FUN_0045d550
// Entry: 0045d550
// Size: 575 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_0045d550(int param_1,int param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *_Buf;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  bool bVar10;
  undefined4 uVar11;
  char *pcVar12;
  size_t local_10;
  uint local_c;
  int *local_8;
  int iStack_4;
  
  do {
    local_c = *param_3;
    if ((0 < (int)param_3[1]) || ((-1 < (int)param_3[1] && (99 < local_c)))) {
      local_c = 100;
    }
    uVar8 = 0;
    if (*param_4 != 0) {
      FUN_00488f20(param_1,(ulonglong)*param_4);
      *param_4 = 0;
    }
    _Buf = (uint *)FUN_00488710(param_1,1,&local_10);
    sVar9 = local_10;
    if ((int)local_10 < 1) {
      return 0xffffffffffffffe2;
    }
    pvVar5 = _memchr(_Buf,10,local_10);
    if (pvVar5 == (void *)0x0) {
      *param_4 = sVar9;
      if ((int)local_c < (int)sVar9) goto LAB_0045d76b;
      _local_8 = CONCAT44(iStack_4,(int *)(param_2 + 0x78));
      pvVar5 = (void *)0x0;
      piVar6 = (int *)(param_2 + 0x78);
      while( true ) {
        piVar6 = FUN_0048d4d0(piVar6,(LPVOID)(sVar9 + uVar8));
        if (piVar6 == (int *)0x0) {
          pcVar12 = "Can\'t allocate working buffer";
          uVar11 = 0xc;
          goto LAB_0045d772;
        }
        FUN_0044c490((uint *)(*(int *)(param_2 + 0x78) + uVar8),_Buf,local_10);
        if (*param_4 != 0) {
          FUN_00488f20(param_1,(ulonglong)*param_4);
          *param_4 = 0;
        }
        uVar8 = uVar8 + local_10;
        if (pvVar5 != (void *)0x0) break;
        _Buf = (uint *)FUN_00488710(param_1,1,&local_10);
        sVar9 = local_10;
        if ((int)local_10 < 1) {
          return 0xffffffffffffffe2;
        }
        pvVar5 = _memchr(_Buf,10,local_10);
        if (pvVar5 != (void *)0x0) {
          sVar9 = (int)pvVar5 + (1 - (int)_Buf);
          local_10 = sVar9;
        }
        *param_4 = sVar9;
        if ((int)local_c < (int)(sVar9 + uVar8)) goto LAB_0045d76b;
        piVar6 = local_8;
      }
      _Buf = *(uint **)(param_2 + 0x78);
    }
    else {
      uVar8 = (int)pvVar5 + (1 - (int)_Buf);
      local_10 = uVar8;
      if ((int)local_c < (int)uVar8) {
LAB_0045d76b:
        pcVar12 = "Line too long";
        uVar11 = 0x2a;
LAB_0045d772:
        FUN_00487380(param_1,uVar11,(int)pcVar12);
        return 0xffffffffffffffe2;
      }
      *param_4 = uVar8;
    }
    if ((int)uVar8 < 1) {
      return 0xffffffffffffffe2;
    }
    uVar7 = *param_3;
    *param_3 = *param_3 - uVar8;
    param_3[1] = (param_3[1] - ((int)uVar8 >> 0x1f)) - (uint)(uVar7 < uVar8);
    if ((char)*_Buf != '#') {
      iStack_4 = 0;
      local_8 = (int *)0x0;
      do {
        cVar1 = (char)*_Buf;
        if (cVar1 == '\n') {
          return CONCAT44(iStack_4,local_8);
        }
        if (cVar1 < '0') {
          return 0xffffffffffffffec;
        }
        if (0x39 < cVar1) {
          return 0xffffffffffffffec;
        }
        uVar7 = (int)cVar1 - 0x30;
        if (((iStack_4 < 0xccccccd) && ((iStack_4 < 0xccccccc || (local_8 < 0xcccccccd)))) &&
           ((local_8 != (int *)0xcccccccc || ((iStack_4 != 0xccccccc || ((int)uVar7 < 8)))))) {
          uVar2 = (uint)local_8 >> 0x1e;
          bVar10 = CARRY4((uint)local_8,(int)local_8 * 4);
          uVar4 = (int)local_8 * 5;
          uVar3 = (int)local_8 * 10;
          local_8 = (int *)(uVar3 + uVar7);
          iStack_4 = ((iStack_4 + (iStack_4 << 2 | uVar2) + (uint)bVar10) * 2 | uVar4 >> 0x1f) +
                     ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar3,uVar7);
        }
        else {
          local_8 = (int *)0xffffffff;
          iStack_4 = 0x7fffffff;
        }
        uVar8 = uVar8 - 1;
        _Buf = (uint *)((int)_Buf + 1);
      } while (0 < (int)uVar8);
      return 0xffffffffffffffec;
    }
  } while( true );
}


