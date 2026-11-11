// Function: FUN_00469b35
// Entry: 00469b35
// Size: 366 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00469b35(byte *param_1,uint param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            undefined *param_6)

{
  SIZE_T SVar1;
  uint *lpMem;
  undefined4 *lpMem_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  switch(param_5) {
  case 0:
    uVar7 = 0x2000;
    break;
  case 1:
    uVar7 = 0x8000;
    break;
  case 2:
    uVar7 = 0x10000;
    break;
  case 3:
    uVar7 = 0x18000;
    break;
  case 4:
    uVar7 = 0x20000;
    break;
  case 5:
    uVar7 = 0x40000;
    break;
  case 6:
    uVar7 = 0x80000;
    break;
  case 7:
    uVar7 = 0xc0000;
    break;
  default:
    uVar7 = 0x100000;
  }
  puVar6 = param_3 + 6;
  SVar1 = FUN_004a1ecd(uVar7);
  lpMem = HeapAlloc(DAT_00542264,0,SVar1);
  if (lpMem != (uint *)0x0) {
    SVar1 = FUN_004a1ec7();
    lpMem_00 = HeapAlloc(DAT_00542264,0,SVar1);
    if (lpMem_00 != (undefined4 *)0x0) {
      param_3[5] = 0;
      *param_3 = 0x626c7a31;
      param_3[4] = uVar7;
      param_3[2] = param_2;
      param_3[3] = (int)param_2 >> 0x1f;
      iVar8 = 0x18;
      uVar5 = param_2;
      do {
        if (uVar5 == 0) goto LAB_00469c76;
        uVar2 = uVar7;
        if ((int)uVar5 < (int)uVar7) {
          uVar2 = uVar5;
        }
        uVar3 = FUN_004a1d3d(param_1,(byte *)lpMem,uVar2,lpMem_00);
        if ((uVar3 == 0) || (iVar8 = iVar8 + uVar3, param_4 <= iVar8)) break;
        FUN_0044c490(puVar6,lpMem,uVar3);
        puVar6 = (uint *)((int)puVar6 + uVar3);
        param_1 = param_1 + uVar7;
        uVar5 = uVar5 - uVar2;
      } while ((param_6 == (undefined *)0x0) ||
              (iVar4 = (*(code *)param_6)(param_2 - uVar5,iVar8), iVar4 != 0));
      iVar8 = 0;
LAB_00469c76:
      HeapFree(DAT_00542264,0,lpMem_00);
    }
    HeapFree(DAT_00542264,0,lpMem);
  }
  return iVar8;
}


