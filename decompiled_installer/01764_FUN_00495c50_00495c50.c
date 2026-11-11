// Function: FUN_00495c50
// Entry: 00495c50
// Size: 2530 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00495c50(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  
  piVar2 = param_1;
  if (((((param_1 == (int *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
      ((piVar1 = (int *)param_1[7], piVar1 == (int *)0x0 || ((int *)*piVar1 != param_1)))) ||
     ((((iVar10 = piVar1[1], iVar10 != 0x2a && ((iVar10 != 0x39 && (iVar10 != 0x45)))) &&
       ((iVar10 != 0x49 &&
        ((((iVar10 != 0x5b && (iVar10 != 0x67)) && (iVar10 != 0x71)) && (iVar10 != 0x29a)))))) ||
      (5 < param_2)))) {
    return 0xfffffffe;
  }
  piVar1 = (int *)param_1[7];
  if (((param_1[3] == 0) || ((param_1[1] != 0 && (*param_1 == 0)))) ||
     ((piVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)PTR_s_stream_error_005206d0;
    return 0xfffffffe;
  }
  if (param_1[4] == 0) goto LAB_00495d69;
  iVar10 = piVar1[10];
  piVar1[10] = param_2;
  if (piVar1[5] == 0) {
    if (param_1[1] == 0) {
      iVar5 = 0;
      if (4 < iVar10) {
        iVar5 = 9;
      }
      iVar8 = 0;
      if (4 < (int)param_2) {
        iVar8 = 9;
      }
      if (((int)(param_2 * 2 - iVar8) <= iVar10 * 2 - iVar5) && (param_2 != 4)) goto LAB_00495d69;
    }
LAB_00495d55:
    if (piVar1[1] == 0x29a) {
      if (param_1[1] != 0) {
LAB_00495d69:
        param_1[6] = (int)PTR_s_buffer_error_005206dc;
        return 0xfffffffb;
      }
    }
    else if (piVar1[1] == 0x2a) {
      if (piVar1[6] == 0) {
        piVar1[1] = 0x71;
      }
      else {
        if ((piVar1[0x22] < 2) && (iVar10 = piVar1[0x21], 1 < iVar10)) {
          if (iVar10 < 6) {
            uVar9 = 0x40;
            uVar6 = 0x60;
          }
          else if (iVar10 == 6) {
            uVar9 = 0x80;
            uVar6 = 0xa0;
          }
          else {
            uVar9 = 0xc0;
            uVar6 = 0xe0;
          }
        }
        else {
          uVar9 = 0;
          uVar6 = 0x20;
        }
        if (piVar1[0x1b] != 0) {
          uVar9 = uVar6;
        }
        FUN_00497340((int)piVar1,((piVar1[0xc] * 0x1000 - 0x7800U | uVar9) / 0x1f + 1) * 0x1f);
        if (piVar1[0x1b] != 0) {
          FUN_00497340((int)piVar1,(uint)*(ushort *)((int)param_1 + 0x32));
          FUN_00497340((int)piVar1,(uint)*(ushort *)(param_1 + 0xc));
        }
        uVar6 = thunk_FUN_004a4c70(0,(byte *)0x0,0);
        param_1[0xc] = uVar6;
        piVar1[1] = 0x71;
        FUN_00497370((int)param_1);
        if (piVar1[5] != 0) goto LAB_00495d17;
      }
    }
    if (piVar1[1] == 0x39) {
      uVar6 = thunk_FUN_0048b320(0,(uint *)0x0,0);
      param_1[0xc] = uVar6;
      *(undefined1 *)(piVar1[5] + piVar1[2]) = 0x1f;
      iVar10 = piVar1[5];
      piVar1[5] = iVar10 + 1;
      *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 0x8b;
      iVar10 = piVar1[5];
      piVar1[5] = iVar10 + 1;
      *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 8;
      piVar11 = (int *)piVar1[7];
      iVar10 = piVar1[5] + 1;
      piVar1[5] = iVar10;
      if (piVar11 == (int *)0x0) {
        *(undefined1 *)(iVar10 + piVar1[2]) = 0;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 0;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 0;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 0;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 0;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        if (piVar1[0x21] == 9) {
          uVar7 = 2;
        }
        else if ((piVar1[0x22] < 2) && (1 < piVar1[0x21])) {
          uVar7 = 0;
        }
        else {
          uVar7 = 4;
        }
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = uVar7;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = 10;
        piVar1[5] = piVar1[5] + 1;
        piVar1[1] = 0x71;
        FUN_00497370((int)param_1);
        if (piVar1[5] != 0) goto LAB_00495d17;
      }
      else {
        *(byte *)(iVar10 + piVar1[2]) =
             (-(piVar11[9] != 0) & 0x10U) + (-(piVar11[0xb] != 0) & 2U) + (-(piVar11[7] != 0) & 8U)
             + (-(piVar11[4] != 0) & 4U) + (*piVar11 != 0);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 4);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 5);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 6);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 7);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        if (piVar1[0x21] == 9) {
          uVar7 = 2;
        }
        else if ((piVar1[0x22] < 2) && (1 < piVar1[0x21])) {
          uVar7 = 0;
        }
        else {
          uVar7 = 4;
        }
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = uVar7;
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 0xc);
        uVar6 = piVar1[5] + 1;
        piVar1[5] = uVar6;
        if (*(int *)(piVar1[7] + 0x10) != 0) {
          *(undefined1 *)(uVar6 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 0x14);
          iVar10 = piVar1[5];
          piVar1[5] = iVar10 + 1;
          *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)(piVar1[7] + 0x15);
          uVar6 = piVar1[5] + 1;
          piVar1[5] = uVar6;
        }
        if (*(int *)(piVar1[7] + 0x2c) != 0) {
          uVar6 = thunk_FUN_0048b320(param_1[0xc],(uint *)piVar1[2],uVar6);
          param_1[0xc] = uVar6;
        }
        piVar1[8] = 0;
        piVar1[1] = 0x45;
      }
    }
    iVar10 = piVar1[1];
    if (iVar10 == 0x45) {
      if (*(int *)(piVar1[7] + 0x10) != 0) {
        param_1 = (int *)((uint)*(ushort *)(piVar1[7] + 0x14) - piVar1[8]);
        uVar6 = piVar1[5];
        piVar11 = (int *)piVar1[3];
        if (piVar11 < (int *)((int)param_1 + uVar6)) {
          do {
            uVar12 = (int)piVar11 - uVar6;
            FUN_0044c490((uint *)(piVar1[2] + uVar6),
                         (uint *)(*(int *)(piVar1[7] + 0x10) + piVar1[8]),uVar12);
            uVar9 = piVar1[3];
            piVar1[5] = uVar9;
            if ((*(int *)(piVar1[7] + 0x2c) != 0) && (uVar6 < uVar9)) {
              uVar6 = thunk_FUN_0048b320(piVar2[0xc],(uint *)(piVar1[2] + uVar6),uVar9 - uVar6);
              piVar2[0xc] = uVar6;
            }
            piVar1[8] = piVar1[8] + uVar12;
            iVar10 = piVar2[7];
            thunk_FUN_004d2390(iVar10);
            uVar6 = piVar2[4];
            if (*(uint *)(iVar10 + 0x14) <= (uint)piVar2[4]) {
              uVar6 = *(uint *)(iVar10 + 0x14);
            }
            if (uVar6 != 0) {
              FUN_0044c490((uint *)piVar2[3],*(uint **)(iVar10 + 0x10),uVar6);
              piVar2[3] = piVar2[3] + uVar6;
              *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + uVar6;
              piVar2[5] = piVar2[5] + uVar6;
              piVar2[4] = piVar2[4] - uVar6;
              piVar11 = (int *)(iVar10 + 0x14);
              *piVar11 = *piVar11 - uVar6;
              if (*piVar11 == 0) {
                *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar10 + 8);
              }
            }
            if (piVar1[5] != 0) goto LAB_00495d17;
            uVar6 = 0;
            param_1 = (int *)((int)param_1 - uVar12);
            piVar11 = (int *)piVar1[3];
          } while (piVar11 < param_1);
        }
        FUN_0044c490((uint *)(piVar1[2] + uVar6),(uint *)(*(int *)(piVar1[7] + 0x10) + piVar1[8]),
                     (uint)param_1);
        uVar9 = piVar1[5] + (int)param_1;
        piVar1[5] = uVar9;
        if ((*(int *)(piVar1[7] + 0x2c) != 0) && (uVar6 < uVar9)) {
          uVar6 = thunk_FUN_0048b320(piVar2[0xc],(uint *)(piVar1[2] + uVar6),uVar9 - uVar6);
          piVar2[0xc] = uVar6;
        }
        piVar1[8] = 0;
      }
      piVar1[1] = 0x49;
LAB_004961c4:
      if (*(int *)(piVar1[7] + 0x1c) != 0) {
        uVar6 = piVar1[5];
        uVar9 = uVar6;
        do {
          if (uVar6 == piVar1[3]) {
            if ((*(int *)(piVar1[7] + 0x2c) != 0) && (uVar9 < uVar6)) {
              uVar6 = thunk_FUN_0048b320(piVar2[0xc],(uint *)(piVar1[2] + uVar9),uVar6 - uVar9);
              piVar2[0xc] = uVar6;
            }
            iVar10 = piVar2[7];
            thunk_FUN_004d2390(iVar10);
            uVar6 = piVar2[4];
            if (*(uint *)(iVar10 + 0x14) <= (uint)piVar2[4]) {
              uVar6 = *(uint *)(iVar10 + 0x14);
            }
            if (uVar6 != 0) {
              FUN_0044c490((uint *)piVar2[3],*(uint **)(iVar10 + 0x10),uVar6);
              piVar2[3] = piVar2[3] + uVar6;
              *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + uVar6;
              piVar2[5] = piVar2[5] + uVar6;
              piVar2[4] = piVar2[4] - uVar6;
              piVar11 = (int *)(iVar10 + 0x14);
              *piVar11 = *piVar11 - uVar6;
              if (*piVar11 == 0) {
                *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar10 + 8);
              }
            }
            if (piVar1[5] != 0) goto LAB_00495d17;
            uVar9 = 0;
            uVar6 = 0;
          }
          cVar4 = *(char *)(piVar1[8] + *(int *)(piVar1[7] + 0x1c));
          piVar1[8] = piVar1[8] + 1;
          *(char *)(uVar6 + piVar1[2]) = cVar4;
          uVar6 = piVar1[5] + 1;
          piVar1[5] = uVar6;
        } while (cVar4 != '\0');
        if ((*(int *)(piVar1[7] + 0x2c) != 0) && (uVar9 < uVar6)) {
          uVar6 = thunk_FUN_0048b320(piVar2[0xc],(uint *)(piVar1[2] + uVar9),uVar6 - uVar9);
          piVar2[0xc] = uVar6;
        }
        piVar1[8] = 0;
      }
      piVar1[1] = 0x5b;
LAB_004962b1:
      if (*(int *)(piVar1[7] + 0x24) != 0) {
        uVar6 = piVar1[5];
        uVar9 = uVar6;
        do {
          if (uVar6 == piVar1[3]) {
            if ((*(int *)(piVar1[7] + 0x2c) != 0) && (uVar9 < uVar6)) {
              uVar6 = thunk_FUN_0048b320(piVar2[0xc],(uint *)(piVar1[2] + uVar9),uVar6 - uVar9);
              piVar2[0xc] = uVar6;
            }
            iVar10 = piVar2[7];
            thunk_FUN_004d2390(iVar10);
            uVar6 = piVar2[4];
            if (*(uint *)(iVar10 + 0x14) <= (uint)piVar2[4]) {
              uVar6 = *(uint *)(iVar10 + 0x14);
            }
            if (uVar6 != 0) {
              FUN_0044c490((uint *)piVar2[3],*(uint **)(iVar10 + 0x10),uVar6);
              piVar2[3] = piVar2[3] + uVar6;
              *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + uVar6;
              piVar2[5] = piVar2[5] + uVar6;
              piVar2[4] = piVar2[4] - uVar6;
              piVar11 = (int *)(iVar10 + 0x14);
              *piVar11 = *piVar11 - uVar6;
              if (*piVar11 == 0) {
                *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar10 + 8);
              }
            }
            if (piVar1[5] != 0) goto LAB_00495d17;
            uVar9 = 0;
            uVar6 = 0;
          }
          cVar4 = *(char *)(piVar1[8] + *(int *)(piVar1[7] + 0x24));
          piVar1[8] = piVar1[8] + 1;
          *(char *)(uVar6 + piVar1[2]) = cVar4;
          uVar6 = piVar1[5] + 1;
          piVar1[5] = uVar6;
        } while (cVar4 != '\0');
        if ((*(int *)(piVar1[7] + 0x2c) != 0) && (uVar9 < uVar6)) {
          uVar6 = thunk_FUN_0048b320(piVar2[0xc],(uint *)(piVar1[2] + uVar9),uVar6 - uVar9);
          piVar2[0xc] = uVar6;
        }
      }
      piVar1[1] = 0x67;
LAB_00496397:
      if (*(int *)(piVar1[7] + 0x2c) != 0) {
        iVar10 = piVar1[5];
        if ((uint)piVar1[3] < iVar10 + 2U) {
          FUN_00497370((int)piVar2);
          iVar10 = 0;
          if (piVar1[5] != 0) goto LAB_00495d17;
        }
        *(char *)(iVar10 + piVar1[2]) = (char)piVar2[0xc];
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 0x31);
        piVar1[5] = piVar1[5] + 1;
        uVar6 = thunk_FUN_0048b320(0,(uint *)0x0,0);
        piVar2[0xc] = uVar6;
      }
      piVar1[1] = 0x71;
      FUN_00497370((int)piVar2);
      if (piVar1[5] != 0) goto LAB_00495d17;
    }
    else {
      if (iVar10 == 0x49) goto LAB_004961c4;
      if (iVar10 == 0x5b) goto LAB_004962b1;
      if (iVar10 == 0x67) goto LAB_00496397;
    }
    if ((piVar2[1] == 0) && (piVar1[0x1d] == 0)) {
      if (param_2 == 0) {
        return 0;
      }
      if (piVar1[1] != 0x29a) goto LAB_00496429;
    }
    else {
LAB_00496429:
      if (piVar1[0x21] == 0) {
        bVar3 = FUN_00494e80(piVar1,param_2);
        iVar10 = CONCAT31(extraout_var,bVar3);
      }
      else if (piVar1[0x22] == 2) {
        cVar4 = FUN_00497150(piVar1,param_2);
        iVar10 = CONCAT31(extraout_var_00,cVar4);
      }
      else if (piVar1[0x22] == 3) {
        cVar4 = FUN_00496e00(piVar1,param_2);
        iVar10 = CONCAT31(extraout_var_01,cVar4);
      }
      else {
        iVar10 = (*(code *)(&PTR_FUN_005189d0)[piVar1[0x21] * 3])();
      }
      if ((iVar10 == 2) || (iVar10 == 3)) {
        piVar1[1] = 0x29a;
      }
      if ((iVar10 == 0) || (iVar10 == 2)) {
        if (piVar2[4] != 0) {
          return 0;
        }
        piVar1[10] = -1;
        return 0;
      }
      if (iVar10 == 1) {
        if (param_2 == 1) {
          FUN_004d0db0((int)piVar1);
        }
        else if ((param_2 != 5) && (FUN_004d0ea0((int)piVar1,(uint *)0x0,0,0), param_2 == 3)) {
          *(undefined2 *)(piVar1[0x11] + -2 + piVar1[0x13] * 2) = 0;
          _memset((void *)piVar1[0x11],0,piVar1[0x13] * 2 - 2);
          if (piVar1[0x1d] == 0) {
            piVar1[0x1b] = 0;
            piVar1[0x17] = 0;
            piVar1[0x5ad] = 0;
          }
        }
        FUN_00497370((int)piVar2);
        if (piVar2[4] == 0) goto LAB_00495d17;
      }
    }
    if (param_2 == 4) {
      if (piVar1[6] < 1) {
        return 1;
      }
      if (piVar1[6] == 2) {
        *(char *)(piVar1[5] + piVar1[2]) = (char)piVar2[0xc];
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 0x31);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 0x32);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 0x33);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(char *)(iVar10 + 1 + piVar1[2]) = (char)piVar2[2];
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 9);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 10);
        iVar10 = piVar1[5];
        piVar1[5] = iVar10 + 1;
        *(undefined1 *)(iVar10 + 1 + piVar1[2]) = *(undefined1 *)((int)piVar2 + 0xb);
        piVar1[5] = piVar1[5] + 1;
      }
      else {
        FUN_00497340((int)piVar1,(uint)*(ushort *)((int)piVar2 + 0x32));
        FUN_00497340((int)piVar1,(uint)*(ushort *)(piVar2 + 0xc));
      }
      FUN_00497370((int)piVar2);
      if (0 < piVar1[6]) {
        piVar1[6] = -piVar1[6];
      }
      return (uint)(piVar1[5] == 0);
    }
  }
  else {
    FUN_00497370((int)param_1);
    if (param_1[4] != 0) goto LAB_00495d55;
LAB_00495d17:
    piVar1[10] = -1;
  }
  return 0;
}


