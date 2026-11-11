// Function: FUN_004ea590
// Entry: 004ea590
// Size: 560 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004ea590(uint *param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  uVar6 = param_1[7];
  if (uVar6 < param_1[6]) {
    do {
      uVar4 = param_1[4];
      if (uVar4 < 0x1000000) {
        if (*param_1 < 0xff000000) {
LAB_004ea5e0:
          do {
            iVar3 = *param_3;
            if (iVar3 == param_4) goto LAB_004ea7b9;
            uVar8 = __aullshr(0x20,param_1[1]);
            *(char *)(iVar3 + param_2) = (char)uVar8 + (char)param_1[5];
            *param_3 = *param_3 + 1;
            uVar6 = param_1[2];
            uVar4 = uVar6 - 1;
            param_1[2] = uVar4;
            in_EAX = (param_1[3] - 1) + (uint)(uVar6 != 0);
            *(undefined1 *)(param_1 + 5) = 0xff;
            param_1[3] = in_EAX;
          } while (uVar4 != 0 || in_EAX != 0);
          uVar6 = param_1[7];
          *(undefined1 *)(param_1 + 5) = *(undefined1 *)((int)param_1 + 3);
        }
        else {
          uVar8 = __aullshr(0x20,param_1[1]);
          in_EAX = (uint)uVar8;
          if (in_EAX != 0) goto LAB_004ea5e0;
        }
        puVar7 = param_1 + 2;
        uVar4 = *puVar7;
        *puVar7 = *puVar7 + 1;
        param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar4);
        param_1[4] = param_1[4] << 8;
        *param_1 = *param_1 << 8;
        uVar4 = param_1[4];
        param_1[1] = 0;
      }
      in_EAX = param_1[uVar6 + 8];
      switch(in_EAX) {
      case 0:
        uVar2 = *(ushort *)param_1[uVar6 + 0x42];
        param_1[4] = (uVar4 >> 0xb) * (uint)uVar2;
        *(ushort *)param_1[uVar6 + 0x42] = (short)(0x800 - uVar2 >> 5) + uVar2;
        break;
      case 1:
        uVar2 = *(ushort *)param_1[uVar6 + 0x42];
        uVar5 = (uVar4 >> 0xb) * (uint)uVar2;
        uVar1 = *param_1;
        *param_1 = *param_1 + uVar5;
        param_1[1] = param_1[1] + (uint)CARRY4(uVar1,uVar5);
        param_1[4] = uVar4 - uVar5;
        *(ushort *)param_1[uVar6 + 0x42] = uVar2 - (uVar2 >> 5);
        break;
      case 2:
        goto LAB_004ea6cc;
      case 3:
        uVar6 = *param_1;
        *param_1 = *param_1 + (uVar4 >> 1);
        param_1[1] = param_1[1] + (uint)CARRY4(uVar6,uVar4 >> 1);
LAB_004ea6cc:
        param_1[4] = uVar4 >> 1;
        break;
      case 4:
        param_1[4] = 0xffffffff;
        goto LAB_004ea700;
      }
      in_EAX = param_1[7];
      uVar6 = in_EAX + 1;
      param_1[7] = uVar6;
    } while (uVar6 < param_1[6]);
  }
  goto LAB_004ea6e1;
LAB_004ea700:
  do {
    if (*param_1 < 0xff000000) {
LAB_004ea720:
      do {
        iVar3 = *param_3;
        if (iVar3 == param_4) {
LAB_004ea7b9:
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
        uVar8 = __aullshr(0x20,param_1[1]);
        *(char *)(iVar3 + param_2) = (char)uVar8 + (char)param_1[5];
        *param_3 = *param_3 + 1;
        uVar6 = param_1[2];
        uVar4 = uVar6 - 1;
        param_1[2] = uVar4;
        in_EAX = (param_1[3] - 1) + (uint)(uVar6 != 0);
        *(undefined1 *)(param_1 + 5) = 0xff;
        param_1[3] = in_EAX;
      } while (uVar4 != 0 || in_EAX != 0);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)((int)param_1 + 3);
    }
    else {
      uVar8 = __aullshr(0x20,param_1[1]);
      in_EAX = (uint)uVar8;
      if (in_EAX != 0) goto LAB_004ea720;
    }
    puVar7 = param_1 + 2;
    uVar6 = *puVar7;
    *puVar7 = *puVar7 + 1;
    param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar6);
    param_1[7] = param_1[7] + 1;
    param_1[1] = 0;
    in_EAX = param_1[7];
    *param_1 = *param_1 << 8;
  } while (in_EAX < param_1[6]);
  *param_1 = 0;
  param_1[1] = 0;
  *puVar7 = 1;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0;
LAB_004ea6e1:
  param_1[7] = 0;
  param_1[6] = 0;
  return in_EAX & 0xffffff00;
}


