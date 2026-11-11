// Function: FUN_00475280
// Entry: 00475280
// Size: 503 bytes
// Thunk: false
// External: false


void __cdecl FUN_00475280(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    param_1[10] = 1;
    param_1[0xb] = 1;
    goto LAB_0047542a;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if (((char)param_1[0x42] == '\0') || (*(char *)((int)param_1 + 0x109) == '\0')) {
        param_1[10] = 4;
        param_1[0xb] = 4;
      }
      else {
        if (*(char *)((int)param_1 + 0x109) != '\x02') {
          *(undefined4 *)(*param_1 + 0x14) = 0x74;
          *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x109);
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        }
        param_1[10] = 5;
        param_1[0xb] = 4;
      }
    }
    else {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    goto LAB_0047542a;
  }
  piVar2 = (int *)param_1[0x31];
  iVar1 = *piVar2;
  iVar3 = piVar2[0x16];
  iVar4 = piVar2[0x2c];
  if (iVar1 != 1) {
    if (iVar1 != 0x52) {
      if (((iVar1 == 0x72) && (iVar3 == 0x67)) && (iVar4 == 0x62)) {
        param_1[10] = 6;
        param_1[0xb] = 2;
        goto LAB_0047542a;
      }
      goto LAB_00475335;
    }
    if ((iVar3 != 0x47) || (iVar4 != 0x42)) goto LAB_00475335;
LAB_004753ad:
    param_1[10] = 2;
    param_1[0xb] = 2;
    goto LAB_0047542a;
  }
  if (iVar3 == 2) {
    if (iVar4 != 3) goto LAB_00475335;
  }
  else {
    if ((iVar3 == 0x22) && (iVar4 == 0x23)) {
      param_1[10] = 7;
      param_1[0xb] = 2;
      goto LAB_0047542a;
    }
LAB_00475335:
    if ((char)param_1[0x40] == '\0') {
      if ((char)param_1[0x42] == '\0') {
        iVar5 = *param_1;
        uVar6 = 1;
        *(int *)(iVar5 + 0x18) = iVar1;
        *(int *)(iVar5 + 0x1c) = iVar3;
        *(int *)(iVar5 + 0x20) = iVar4;
        *(undefined4 *)(*param_1 + 0x14) = 0x71;
      }
      else {
        if (*(char *)((int)param_1 + 0x109) == '\0') goto LAB_004753ad;
        if (*(char *)((int)param_1 + 0x109) == '\x01') goto LAB_0047540b;
        uVar6 = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x14) = 0x74;
        *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x109);
      }
      (**(code **)(*param_1 + 4))(param_1,uVar6);
    }
  }
LAB_0047540b:
  param_1[10] = 3;
  param_1[0xb] = 2;
LAB_0047542a:
  iVar1 = param_1[0x62];
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff00000;
  param_1[0xc] = iVar1;
  param_1[0xd] = iVar1;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0x101;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  param_1[0x13] = 2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0x100;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  return;
}


