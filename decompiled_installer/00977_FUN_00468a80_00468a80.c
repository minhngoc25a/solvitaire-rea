// Function: FUN_00468a80
// Entry: 00468a80
// Size: 899 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_00468a80(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,int *param_9,int param_10,undefined4 param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int local_18;
  undefined4 local_8;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  uVar6 = param_1;
  iVar1 = *(int *)(param_1 + 0xa4);
  if (*param_9 == 0) {
    uVar5 = *(uint *)(iVar1 + 0x18);
  }
  else {
    uVar5 = 1;
  }
  param_1 = uVar5;
  uVar2 = FUN_004685b0(uVar6,6,0);
  if ((-1 < (int)uVar2) && (uVar2 = FUN_004685b0(uVar6,param_2,param_3), -1 < (int)uVar2)) {
    uVar2 = FUN_004685b0(uVar6,uVar5,(int)uVar5 >> 0x1f);
    if ((-1 < (int)uVar2) && (uVar2 = FUN_004685b0(uVar6,9,0), -1 < (int)uVar2)) {
      if ((int)uVar5 < 2) {
        uVar2 = FUN_004685b0(uVar6,param_4,param_5);
        uVar3 = uVar5;
        if ((int)uVar2 < 0) {
          return uVar2;
        }
      }
      else {
        uVar3 = param_1;
        for (iVar8 = *(int *)(iVar1 + 0xf0b4); param_1 = uVar3, iVar8 != 0;
            iVar8 = *(int *)(iVar8 + 0xc)) {
          if (*(uint *)(iVar8 + 0x18) == 0 && *(uint *)(iVar8 + 0x1c) == 0) break;
          uVar2 = FUN_004685b0(uVar6,*(uint *)(iVar8 + 0x18),*(uint *)(iVar8 + 0x1c));
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar3 = param_1;
        }
      }
      uVar2 = FUN_004685b0(uVar6,0,0);
      if ((((-1 < (int)uVar2) && (uVar2 = FUN_004685b0(uVar6,7,0), -1 < (int)uVar2)) &&
          (uVar2 = FUN_004685b0(uVar6,0xb,0), -1 < (int)uVar2)) &&
         ((uVar2 = FUN_004685b0(uVar6,uVar5,(int)uVar5 >> 0x1f), -1 < (int)uVar2 &&
          (uVar2 = FUN_004685b0(uVar6,0,0), uVar5 = param_8, -1 < (int)uVar2)))) {
        local_18 = 0;
        if (0 < (int)uVar3) {
          uVar7 = (int)param_8 >> 0x1f;
          uVar2 = param_8;
          do {
            uVar3 = FUN_004685b0(uVar6,uVar5,uVar7);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            iVar8 = 0;
            if (0 < (int)uVar2) {
              puVar9 = (uint *)(param_9 + 1);
              do {
                uVar2 = puVar9[-1];
                uVar3 = 8;
                local_8 = 0;
                local_4 = (char)(uVar2 >> 0x18);
                local_3 = (char)(uVar2 >> 0x10);
                local_2 = (char)(uVar2 >> 8);
                pcVar4 = (char *)&local_8;
                local_1 = (char)uVar2;
                do {
                  if (*pcVar4 != '\0') goto LAB_00468c4a;
                  uVar3 = uVar3 - 1;
                  pcVar4 = pcVar4 + 1;
                } while (0 < (int)uVar3);
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
LAB_00468c4a:
                uVar2 = uVar3 | 0x20;
                if (*puVar9 == 0) {
                  uVar2 = uVar3;
                }
                uVar2 = FUN_004685b0(uVar6,uVar2,(int)uVar2 >> 0x1f);
                if ((int)uVar2 < 0) {
                  return uVar2;
                }
                uVar2 = FUN_00467a30(uVar6,(uint *)(&stack0x00000000 + -(uVar3 & 0xf)),uVar3 & 0xf,1
                                    );
                if ((int)uVar2 < 0) {
                  return uVar2;
                }
                if (*puVar9 != 0) {
                  uVar2 = FUN_004685b0(uVar6,*puVar9,0);
                  if ((int)uVar2 < 0) {
                    return uVar2;
                  }
                  uVar2 = FUN_00467a30(uVar6,(uint *)puVar9[1],*puVar9,1);
                  if ((int)uVar2 < 0) {
                    return uVar2;
                  }
                }
                iVar8 = iVar8 + 1;
                puVar9 = puVar9 + 3;
                uVar2 = param_8;
              } while (iVar8 < (int)param_8);
            }
            local_18 = local_18 + 1;
            uVar3 = param_1;
          } while (local_18 < (int)param_1);
        }
        uVar2 = FUN_004685b0(uVar6,0xc,0);
        if (-1 < (int)uVar2) {
          if ((int)uVar3 < 2) {
            uVar5 = FUN_004685b0(uVar6,param_6,param_7);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
          }
          else {
            for (iVar1 = *(int *)(iVar1 + 0xf0b4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
              if (*(uint *)(iVar1 + 0x18) == 0 && *(uint *)(iVar1 + 0x1c) == 0) break;
              uVar5 = FUN_004685b0(uVar6,*(uint *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x1c));
              if ((int)uVar5 < 0) {
                return uVar5;
              }
            }
          }
          iVar1 = param_10;
          if (param_10 == 0) {
            uVar5 = FUN_004685b0(uVar6,10,0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            uVar5 = FUN_004685b0(uVar6,1,0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            FUN_00466a40((undefined1 *)&param_1,param_11);
            uVar5 = FUN_00467a30(uVar6,&param_1,4,1);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
          }
          uVar2 = FUN_004685b0(uVar6,0,0);
          if ((-1 < (int)uVar2) &&
             ((iVar1 == 0 || (uVar2 = FUN_00468ec0(uVar6,param_9), -1 < (int)uVar2)))) {
            uVar6 = FUN_004685b0(uVar6,0,0);
            uVar2 = 0;
            if ((int)uVar6 < 0) {
              uVar2 = uVar6;
            }
          }
        }
      }
    }
  }
  return uVar2;
}


