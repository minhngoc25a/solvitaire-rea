// Function: FUN_00496930
// Entry: 00496930
// Size: 557 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00496930(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,char *param_7
            ,int param_8)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_00486210;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_004694c0;
    }
    uVar3 = 6;
    if (param_2 != 0xffffffff) {
      uVar3 = param_2;
    }
    if (param_4 < 0) {
      iVar4 = 0;
      param_4 = -param_4;
    }
    else if (0xf < param_4) {
      iVar4 = 2;
      param_4 = param_4 + -0x10;
    }
    if (((param_5 - 1U < 9) && (param_3 == 8)) &&
       ((param_4 - 8U < 8 && ((uVar3 < 10 && (param_6 < 5)))))) {
      if (param_4 == 8) {
        if (iVar4 != 1) {
          return 0xfffffffe;
        }
        param_4 = 9;
      }
      piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c4);
      if (piVar1 != (int *)0x0) {
        *(int **)(param_1 + 0x1c) = piVar1;
        piVar1[6] = iVar4;
        iVar5 = 1 << ((byte)param_4 & 0x1f);
        piVar1[0xc] = param_4;
        *piVar1 = param_1;
        piVar1[0xd] = iVar5 + -1;
        piVar1[1] = 0x2a;
        iVar4 = 1 << ((byte)(param_5 + 7) & 0x1f);
        piVar1[0x13] = iVar4;
        piVar1[0x15] = iVar4 + -1;
        piVar1[0x14] = param_5 + 7;
        piVar1[7] = 0;
        piVar1[0xb] = iVar5;
        piVar1[0x16] = (param_5 + 9U) / 3;
        iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
        piVar1[0xe] = iVar4;
        iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0xb],2);
        piVar1[0x10] = iVar4;
        iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0x13],2);
        piVar1[0x11] = iVar4;
        piVar1[0x5b0] = 0;
        iVar4 = 1 << ((char)param_5 + 6U & 0x1f);
        piVar1[0x5a7] = iVar4;
        iVar5 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar4,4);
        iVar4 = piVar1[0x5a7];
        piVar1[2] = iVar5;
        piVar1[3] = iVar4 * 4;
        if ((((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && (piVar1[0x11] != 0)) && (iVar5 != 0)) {
          *(undefined1 *)(piVar1 + 9) = 8;
          piVar1[0x5a6] = iVar5 + iVar4;
          piVar1[0x5a9] = (iVar4 + -1) * 3;
          piVar1[0x21] = uVar3;
          piVar1[0x22] = param_6;
          uVar2 = FUN_00496770(param_1);
          return uVar2;
        }
        piVar1[1] = 0x29a;
        *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_005206d8;
        FUN_00496640(param_1);
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}


