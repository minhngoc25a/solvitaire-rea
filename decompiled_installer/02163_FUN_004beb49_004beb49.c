// Function: FUN_004beb49
// Entry: 004beb49
// Size: 452 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
FUN_004beb49(uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  undefined8 uVar1;
  int *lpMem;
  uint *puVar2;
  int iVar3;
  LPVOID pvVar4;
  double *pdVar5;
  void *this;
  void *this_00;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int local_10;
  
  lpMem = HeapAlloc(DAT_00542264,8,0x450);
  if (lpMem != (int *)0x0) {
    local_10 = param_2 * param_3;
    uVar8 = ((int)((local_10 >> 0x1f & 0x3ffffU) + local_10) >> 0x12) + 1;
    if (10 < (int)uVar8) {
      uVar8 = 10;
    }
    if ((param_4 == 0x18) || ((param_7 & 0x100) != 0)) {
      puVar2 = HeapAlloc(DAT_00542264,0,local_10 * 4);
      *lpMem = (int)puVar2;
      if (puVar2 != (uint *)0x0) {
        if (param_4 == 0x18) {
          iVar3 = param_3;
          if (0 < param_3) {
            do {
              puVar6 = param_1;
              iVar7 = param_2;
              if (0 < param_2) {
                do {
                  *(char *)puVar2 = (char)*puVar6;
                  *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)puVar6 + 1);
                  *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar6 + 2);
                  *(undefined1 *)((int)puVar2 + 3) = 0xff;
                  puVar2 = puVar2 + 1;
                  iVar7 = iVar7 + -1;
                  puVar6 = (uint *)((int)puVar6 + 3);
                } while (iVar7 != 0);
              }
              param_1 = (uint *)((int)param_1 + param_5);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else {
          FUN_0044c490(puVar2,param_1,local_10 * 4);
        }
        lpMem[6] = 1;
      }
    }
    else {
      *lpMem = (int)param_1;
    }
    local_10 = local_10 * 4;
    if (*lpMem != 0) {
      pvVar4 = HeapAlloc(DAT_00542264,0,param_2 + 8);
      lpMem[7] = (int)pvVar4;
      uVar1 = _DAT_0051a558;
      if (pvVar4 != (LPVOID)0x0) {
        lpMem[1] = param_3;
        lpMem[3] = param_4;
        lpMem[2] = param_2;
        lpMem[5] = param_6;
        lpMem[4] = param_7;
        *(undefined8 *)(lpMem + 10) = uVar1;
        if (param_6 == 1) {
          *(undefined2 *)(lpMem + 0x15) = 0xffff;
          *(undefined1 *)(lpMem + 0x14) = 0;
          *(undefined2 *)((int)lpMem + 0x51) = 0;
          *(undefined1 *)((int)lpMem + 0x56) = 0xff;
          return lpMem;
        }
        pdVar5 = (double *)FUN_004fe647(*lpMem,local_10,1 << ((byte)param_6 & 0x1f),uVar1);
        lpMem[8] = (int)pdVar5;
        FUN_004fec63(pdVar5,uVar8);
        FUN_004fe854(this,lpMem[8]);
        FUN_004fe7c0(this_00,lpMem[8],(undefined1 *)(lpMem + 0x14));
        return lpMem;
      }
    }
    HeapFree(DAT_00542264,0,lpMem);
  }
  return (int *)0x0;
}


