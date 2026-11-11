// Function: FUN_004631f0
// Entry: 004631f0
// Size: 1768 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004631f0(int param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40 [2];
  undefined4 *local_38 [14];
  
  uVar2 = *param_3;
  *(uint *)(param_2 + 0xe4) = uVar2;
  *(undefined4 *)(param_2 + 0xe8) = 0xffffffff;
  if (uVar2 < 0x40109) {
    if (((uVar2 == 0x40108) || (uVar2 == 0)) || (uVar2 == 0x30401)) {
LAB_0046323b:
      if (param_4 != (uint *)0x0) {
        uVar1 = *param_4;
        if ((uVar1 != 0x3030103) && (uVar1 != 0x303011b)) {
          FUN_00487380(param_1,0xffffffff,0x523bb8);
          return 0xffffffe7;
        }
        *(uint *)(param_2 + 0xe8) = uVar1;
        *(undefined4 *)(param_2 + 0x4cfc) = 0;
        if (*param_4 == 0x3030103) {
          *(undefined4 *)(param_2 + 0x4d08) = 0xffffffff;
          *(undefined4 *)(param_2 + 0x4d0c) = 0;
          *(undefined4 *)(param_2 + 0x4d10) = 5;
        }
      }
      goto LAB_004632ac;
    }
LAB_004632bf:
    if (uVar2 < 0x30402) {
      if (uVar2 == 0x30401) {
        iVar5 = param_2 + 0x1c0;
        if (*(int *)(param_2 + 0x4cf8) != 0) {
          (*(code *)PTR_FUN_00518f58)(iVar5);
          *(undefined4 *)(param_2 + 0x4cf8) = 0;
        }
        if ((param_3[7] != 0) || (4 < param_3[6])) {
          uVar2 = (uint)*(byte *)param_3[8];
          iVar6 = FUN_00461550((undefined4 *)((byte *)param_3[8] + 1));
          if ((uVar2 - 2 < 0x3f) && (iVar6 - 0x800U < 0xfffff7dc)) {
            (*(code *)PTR_FUN_00518f50)(iVar5);
            iVar6 = (*(code *)PTR_FUN_00518f54)(iVar5,iVar6);
            if (iVar6 != 0) {
              (*(code *)PTR_FUN_00518f5c)(iVar5,uVar2);
              (*(code *)PTR_FUN_00518f60)(param_2 + 0x4c8c);
              *(undefined4 *)(param_2 + 0x4cf8) = 1;
              *(undefined4 *)(param_2 + 0x1bc) = 0;
              *(undefined4 *)(param_2 + 0x4cf0) = 0;
              *(undefined4 *)(param_2 + 0x4cc8) = 0;
              *(undefined4 *)(param_2 + 0x4ccc) = 0;
              *(undefined4 *)(param_2 + 0x4ce8) = 0;
              *(undefined4 *)(param_2 + 0x4cec) = 0;
              return 0;
            }
            FUN_00487380(param_1,0xc,0x527ff0);
            return 0xffffffe2;
          }
        }
        FUN_00487380(param_1,0xffffffff,0x52535c);
        return 0xffffffe7;
      }
      if (uVar2 < 0x22) {
        if (uVar2 != 0x21) {
          if (uVar2 == 0) {
            return 0;
          }
          if (uVar2 != 3) {
            pcVar7 = "Unknown codec ID: %lX";
            goto LAB_004638c3;
          }
          goto LAB_00463854;
        }
      }
      else if (uVar2 != 0x30101) goto LAB_0046387a;
      iVar5 = 0;
      if (*(int *)(param_2 + 0x148) != 0) {
        FUN_0049b1c0(param_2 + 0xf0);
        *(undefined4 *)(param_2 + 0x148) = 0;
      }
      if (param_4 == (uint *)0x0) goto LAB_00463480;
      uVar2 = *param_4;
      *(uint *)(param_2 + 0xe8) = uVar2;
      local_38[0] = (undefined4 *)0x0;
      if (uVar2 < 0x3030402) {
        if (uVar2 == 0x3030401) {
          local_40[0] = 6;
        }
        else if (uVar2 < 0x303011c) {
          if (uVar2 == 0x303011b) {
            *(undefined4 *)(param_2 + 0x4cfc) = 0;
            goto LAB_00463480;
          }
          if (uVar2 == 3) {
            if ((param_4[6] != 1) || (param_4[7] != 0)) {
              FUN_00487380(param_1,0xffffffff,0x525378);
              return 0xffffffe7;
            }
            local_40[0] = 3;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_60 = 0;
            local_5c = *(byte *)param_4[8] + 1;
            local_38[0] = &local_60;
          }
          else {
            if (uVar2 != 0x3030103) goto LAB_00463447;
            if (*(int *)(param_2 + 0xe4) != 0x21) {
              *(undefined4 *)(param_2 + 0x4cfc) = 0;
              *(undefined4 *)(param_2 + 0x4d08) = 0xffffffff;
              *(undefined4 *)(param_2 + 0x4d0c) = 0;
              *(undefined4 *)(param_2 + 0x4d10) = 5;
              goto LAB_00463480;
            }
            local_40[0] = 4;
          }
        }
        else {
          if (uVar2 != 0x3030205) {
LAB_00463447:
            pcVar7 = "Unexpected codec ID: %lX";
            goto LAB_004638c3;
          }
          local_40[0] = 5;
        }
      }
      else if (uVar2 == 0x3030501) {
        local_40[0] = 7;
      }
      else if (uVar2 == 0x3030701) {
        local_40[0] = 8;
      }
      else {
        if (uVar2 != 0x3030805) goto LAB_00463447;
        local_40[0] = 9;
      }
      local_40[1] = 0;
      iVar5 = 1;
LAB_00463480:
      if (*(int *)(param_2 + 0xe4) == 0x21) {
        uVar2 = 0x21;
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar2 = 1;
        puVar3 = (undefined4 *)0x40000000;
      }
      local_40[iVar5 * 4] = uVar2;
      local_38[iVar5 * 4 + -1] = puVar3;
      uVar2 = param_3[6];
      local_38[iVar5 * 4] = (undefined4 *)0x0;
      uVar2 = FUN_0049b6d0((int *)(local_40 + iVar5 * 4),0,param_3[8],uVar2);
      if (uVar2 == 0) {
        iVar6 = iVar5 + 1;
        local_40[iVar6 * 4] = 0xffffffff;
        local_38[iVar6 * 4 + -1] = (undefined4 *)0xffffffff;
        local_38[iVar6 * 4] = (undefined4 *)0x0;
        iVar6 = FUN_0049b670(param_2 + 0xf0,local_40);
        FUN_0047d191(local_38[iVar5 * 4]);
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + 0x148) = 1;
          *(undefined4 *)(param_2 + 0xf8) = 0;
          *(undefined4 *)(param_2 + 0xfc) = 0;
          *(undefined4 *)(param_2 + 0x108) = 0;
          *(undefined4 *)(param_2 + 0x10c) = 0;
          return 0;
        }
        FUN_004666d0(param_1,iVar6);
        return 0xffffffe7;
      }
      FUN_004666d0(param_1,uVar2);
      return 0xffffffe7;
    }
    if (uVar2 == 0x40108) {
      if (*(int *)(param_2 + 0x1b8) == 0) {
        iVar5 = FUN_0048b070(param_2 + 0x180,0xfffffff1,"1.2.12",0x38);
      }
      else {
        iVar5 = FUN_0048ae80(param_2 + 0x180);
      }
      if (iVar5 == 0) {
        *(undefined4 *)(param_2 + 0x1b8) = 1;
        *(undefined4 *)(param_2 + 0x188) = 0;
        *(undefined4 *)(param_2 + 0x194) = 0;
        return 0;
      }
      FUN_00487380(param_1,0xffffffff,0x52a040);
      return 0xffffffe7;
    }
    if (uVar2 == 0x40202) {
      iVar5 = param_2 + 0x14c;
      if (*(int *)(param_2 + 0x17c) != 0) {
        FUN_00486150(iVar5);
        *(undefined4 *)(param_2 + 0x17c) = 0;
      }
      iVar6 = FUN_00485f50(iVar5,0,0);
      if (iVar6 == -3) {
        iVar6 = FUN_00485f50(iVar5,0,1);
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_2 + 0x17c) = 1;
        *(undefined4 *)(param_2 + 0x154) = 0;
        *(undefined4 *)(param_2 + 0x158) = 0;
        *(undefined4 *)(param_2 + 0x164) = 0;
        *(undefined4 *)(param_2 + 0x168) = 0;
        return 0;
      }
      uVar4 = 0xffffffff;
      if ((iVar6 != -9) && (iVar6 == -3)) {
        uVar4 = 0xc;
      }
      FUN_00487380(param_1,uVar4,0x52504c);
      *(undefined4 *)(param_2 + 0x17c) = 0;
      return 0xffffffe7;
    }
    if (uVar2 != 0x3030103) {
      pcVar7 = "Unknown codec ID: %lX";
      goto LAB_004638c3;
    }
  }
  else {
    if (uVar2 == 0x40202) goto LAB_0046323b;
LAB_004632ac:
    if (uVar2 < 0x303011c) {
      if (uVar2 != 0x303011b) goto LAB_004632bf;
    }
    else {
      if (0x3030805 < uVar2) {
        if (((uVar2 == 0x6f10101) || (uVar2 == 0x6f10303)) || (uVar2 == 0x6f10701)) {
          if (*(int *)(param_1 + 0x60) != 0) {
            FUN_0048c910(*(int *)(param_1 + 0x60),'\x01');
            FUN_0048c8e0(*(int *)(param_1 + 0x60),'\x01');
            *(undefined4 *)(param_2 + 0x4fac) = 1;
          }
          pcVar7 = "Crypto codec not supported yet (ID: 0x%lX)";
          goto LAB_004638c3;
        }
LAB_0046387a:
        pcVar7 = "Unknown codec ID: %lX";
        goto LAB_004638c3;
      }
      if (uVar2 != 0x3030805) {
        if (uVar2 < 0x3030502) {
          if (((uVar2 != 0x3030501) && (uVar2 != 0x3030205)) && (uVar2 != 0x3030401)) {
            pcVar7 = "Unknown codec ID: %lX";
            goto LAB_004638c3;
          }
        }
        else if (uVar2 != 0x3030701) goto LAB_0046387a;
      }
    }
  }
LAB_00463854:
  pcVar7 = "Unexpected codec ID: %lX";
LAB_004638c3:
  FUN_00487380(param_1,0xffffffff,(int)pcVar7);
  return 0xffffffe7;
}


