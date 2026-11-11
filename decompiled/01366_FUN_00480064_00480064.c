// Function: FUN_00480064
// Entry: 00480064
// Size: 131 bytes
// Thunk: false
// External: false


undefined4 FUN_00480064(void)

{
  LPCWSTR pWVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  if (DAT_00544358 == (undefined4 *)0x0) {
LAB_004800e0:
    uVar5 = 0xffffffff;
  }
  else {
    pWVar1 = (LPCWSTR)*DAT_00544358;
    puVar6 = DAT_00544358;
    while (pWVar1 != (LPCWSTR)0x0) {
      uVar2 = FUN_004c42a4(0,0,pWVar1,-1,(LPSTR)0x0,0,0,(undefined4 *)0x0);
      if (uVar2 == 0) goto LAB_004800e0;
      puVar3 = __calloc_base(uVar2,1);
      puVar7 = (uint *)0x0;
      if ((puVar3 == (uint *)0x0) ||
         (iVar4 = FUN_004c42a4(0,0,(LPCWSTR)*puVar6,-1,(LPSTR)puVar3,uVar2,0,(undefined4 *)0x0),
         puVar7 = puVar3, iVar4 == 0)) {
        FUN_004247be(puVar7);
        goto LAB_004800e0;
      }
      FUN_004c44c5(puVar3,0);
      FUN_004247be((LPVOID)0x0);
      puVar6 = puVar6 + 1;
      pWVar1 = (LPCWSTR)*puVar6;
    }
    uVar5 = 0;
  }
  return uVar5;
}


