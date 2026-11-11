// Function: FUN_004686c0
// Entry: 004686c0
// Size: 953 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_004686c0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,int *param_9)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint local_4;
  
  uVar4 = param_1;
  iVar2 = *(int *)(param_1 + 0xa4);
  uVar3 = FUN_004685b0(param_1,1,0);
  if (((-1 < (int)uVar3) &&
      (((*(int *)(iVar2 + 0x18) == 0 ||
        ((uVar3 = FUN_004685b0(uVar4,4,0), -1 < (int)uVar3 &&
         (uVar3 = FUN_00468a80(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                               ,1,0), -1 < (int)uVar3)))) &&
       (uVar3 = FUN_004685b0(uVar4,5,0), -1 < (int)uVar3)))) &&
     (uVar3 = FUN_004685b0(uVar4,*(uint *)(iVar2 + 0x14),0), -1 < (int)uVar3)) {
    if (*(int *)(iVar2 + 0x1c) != 0) {
      uVar3 = FUN_004685b0(uVar4,0xe,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = FUN_004685b0(uVar4,*(int *)(iVar2 + 0x14) + 7U >> 3,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      bVar5 = 0;
      bVar6 = 0x80;
      param_1 = param_1 & 0xffffff00;
      iVar9 = *(int *)(iVar2 + 0xf0b4);
      if (iVar9 != 0) {
        do {
          if (*(int *)(iVar9 + 0x18) == 0 && *(int *)(iVar9 + 0x1c) == 0) {
            bVar5 = bVar5 | bVar6;
            param_1 = CONCAT31(param_1._1_3_,bVar5);
          }
          bVar6 = bVar6 >> 1;
          if (bVar6 == 0) {
            uVar3 = FUN_00467a30(uVar4,&param_1,1,1);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            bVar5 = 0;
            bVar6 = 0x80;
            param_1 = param_1 & 0xffffff00;
          }
          iVar9 = *(int *)(iVar9 + 0xc);
        } while (iVar9 != 0);
        if ((bVar6 != 0x80) && (uVar3 = FUN_00467a30(uVar4,&param_1,1,1), (int)uVar3 < 0)) {
          return uVar3;
        }
      }
    }
    if (*(uint *)(iVar2 + 0x20) < *(uint *)(iVar2 + 0x1c)) {
      uVar3 = FUN_004685b0(uVar4,0xf,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = FUN_004685b0(uVar4,*(int *)(iVar2 + 0x1c) + 7U >> 3,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      bVar5 = 0;
      bVar6 = 0x80;
      param_1 = param_1 & 0xffffff00;
      iVar9 = *(int *)(iVar2 + 0xf0b4);
      if (iVar9 != 0) {
        do {
          if (*(int *)(iVar9 + 0x18) == 0 && *(int *)(iVar9 + 0x1c) == 0) {
            if ((*(byte *)(iVar9 + 0x60) & 1) == 0) {
              bVar5 = bVar5 | bVar6;
              param_1 = CONCAT31(param_1._1_3_,bVar5);
            }
            bVar6 = bVar6 >> 1;
            if (bVar6 == 0) {
              uVar3 = FUN_00467a30(uVar4,&param_1,1,1);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              bVar5 = 0;
              bVar6 = 0x80;
              param_1 = param_1 & 0xffffff00;
            }
          }
          iVar9 = *(int *)(iVar9 + 0xc);
        } while (iVar9 != 0);
        if ((bVar6 != 0x80) && (uVar3 = FUN_00467a30(uVar4,&param_1,1,1), (int)uVar3 < 0)) {
          return uVar3;
        }
      }
    }
    uVar3 = FUN_004685b0(uVar4,0x11,0);
    if (((-1 < (int)uVar3) &&
        (uVar3 = FUN_004685b0(uVar4,*(int *)(iVar2 + 0x24) + 1,0), -1 < (int)uVar3)) &&
       (uVar3 = FUN_004685b0(uVar4,0,0), -1 < (int)uVar3)) {
      for (iVar9 = *(int *)(iVar2 + 0xf0b4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 0xc)) {
        uVar3 = FUN_00467a30(uVar4,*(uint **)(iVar9 + 0x14),*(int *)(iVar9 + 0x10) + 2,1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      uVar3 = FUN_00469000(uVar4,0x14,1,0);
      if ((((-1 < (int)uVar3) && (uVar3 = FUN_00469000(uVar4,0x12,4,2), -1 < (int)uVar3)) &&
          ((uVar3 = FUN_00469000(uVar4,0x13,2,1), -1 < (int)uVar3 &&
           ((uVar3 = FUN_004685b0(uVar4,0x15,0), -1 < (int)uVar3 &&
            (uVar3 = FUN_004685b0(uVar4,*(int *)(iVar2 + 0x14) * 4 + 2,0), -1 < (int)uVar3)))))) &&
         ((uVar3 = FUN_004685b0(uVar4,1,0), -1 < (int)uVar3 &&
          (uVar3 = FUN_004685b0(uVar4,0,0), -1 < (int)uVar3)))) {
        for (iVar2 = *(int *)(iVar2 + 0xf0b4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
          uVar7 = 0x8010;
          uVar1 = *(ushort *)(iVar2 + 0x58);
          if ((*(byte *)(iVar2 + 0x60) & 1) == 0) {
            uVar7 = 0x8020;
          }
          uVar8 = uVar7 | 1;
          if ((uVar1 & 0x92) != 0) {
            uVar8 = uVar7;
          }
          local_4 = CONCAT13((char)(uVar1 >> 8),CONCAT12((char)uVar1,uVar8));
          uVar3 = FUN_00467a30(uVar4,&local_4,4,1);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        }
        uVar3 = FUN_004685b0(uVar4,0,0);
        if (-1 < (int)uVar3) {
          uVar4 = FUN_004685b0(uVar4,0,0);
          uVar3 = 0;
          if ((int)uVar4 < 0) {
            uVar3 = uVar4;
          }
        }
      }
    }
  }
  return uVar3;
}


