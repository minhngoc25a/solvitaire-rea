// Function: FUN_00469000
// Entry: 00469000
// Size: 565 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00469000(uint param_1,byte param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  iVar10 = param_4;
  uVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar9 = *(int *)(iVar1 + 0x28 + param_4 * 4);
  if (iVar9 == *(int *)(iVar1 + 0x14)) {
    uVar5 = FUN_004685b0(param_1,(uint)param_2,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = FUN_004685b0(uVar3,*(int *)(iVar1 + 0x14) * 8 + 2,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar6 = FUN_004685b0(uVar3,1,0);
    uVar5 = param_3;
    if ((int)uVar6 < 0) {
      return uVar6;
    }
  }
  else {
    if (iVar9 == 0) {
      return 0;
    }
    uVar5 = FUN_004685b0(param_1,(uint)param_2,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = FUN_004685b0(uVar3,*(int *)(iVar1 + 0x28 + iVar10 * 4) * 8 + 2 +
                               (*(int *)(iVar1 + 0x14) + 7U >> 3),0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar6 = FUN_004685b0(uVar3,0,0);
    uVar5 = param_3;
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    bVar4 = 0;
    param_1 = param_1 & 0xffffff00;
    bVar8 = 0x80;
    iVar9 = *(int *)(iVar1 + 0xf0b4);
    if (iVar9 != 0) {
      do {
        if ((*(uint *)(iVar9 + 0x20) & uVar5) != 0) {
          bVar4 = bVar4 | bVar8;
          param_1 = CONCAT31(param_1._1_3_,bVar4);
        }
        bVar8 = bVar8 >> 1;
        if (bVar8 == 0) {
          uVar6 = FUN_00467a30(uVar3,&param_1,1,1);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          bVar4 = 0;
          bVar8 = 0x80;
          param_1 = param_1 & 0xffffff00;
        }
        iVar9 = *(int *)(iVar9 + 0xc);
      } while (iVar9 != 0);
      if ((bVar8 != 0x80) && (uVar6 = FUN_00467a30(uVar3,&param_1,1,1), (int)uVar6 < 0)) {
        return uVar6;
      }
    }
  }
  uVar6 = FUN_004685b0(uVar3,0,0);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  iVar1 = *(int *)(iVar1 + 0xf0b4);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x20) & uVar5) != 0) {
      uVar6 = *(int *)(iVar1 + (param_4 + 3) * 0x10) / 100;
      uVar5 = *(uint *)(iVar1 + 0x28 + param_4 * 0x10);
      lVar2 = (ulonglong)(uVar5 + 0xb6109100) * 10000000;
      uVar7 = (uint)lVar2;
      iVar10 = uVar6 + uVar7;
      local_8 = (undefined1)iVar10;
      iVar9 = ((int)uVar6 >> 0x1f) +
              (*(int *)(iVar1 + 0x2c + param_4 * 0x10) + 2 + (uint)(0x49ef6eff < uVar5)) * 10000000
              + (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar6,uVar7);
      local_7 = (undefined1)((uint)iVar10 >> 8);
      local_6 = (undefined1)((uint)iVar10 >> 0x10);
      local_3 = (undefined1)((uint)iVar9 >> 8);
      local_2 = (undefined1)((uint)iVar9 >> 0x10);
      local_4 = (undefined1)iVar9;
      local_5 = (undefined1)((uint)iVar10 >> 0x18);
      local_1 = (undefined1)((uint)iVar9 >> 0x18);
      uVar6 = FUN_00467a30(uVar3,(uint *)&local_8,8,1);
      uVar5 = param_3;
      if ((int)uVar6 < 0) {
        return uVar6;
      }
    }
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}


