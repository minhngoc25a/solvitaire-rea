// Function: FUN_00487ae0
// Entry: 00487ae0
// Size: 410 bytes
// Thunk: false
// External: false


int __cdecl FUN_00487ae0(uint *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = FUN_00493d30(param_1,0xdeb0c5,6,"archive_read_next_header");
  if (iVar3 == -0x1e) {
    return -0x1e;
  }
  FUN_0048b740(param_2);
  FUN_00487360((int)param_1);
  if (param_1[1] == 4) {
    iVar4 = FUN_00493d30(param_1,0xdeb0c5,4,"archive_read_data_skip");
    if (iVar4 != -0x1e) {
      if (*(code **)(param_1[0x110] + 0x18) == (code *)0x0) {
        do {
          iVar3 = FUN_0049a910((int)param_1);
        } while (iVar3 == 0);
      }
      else {
        iVar3 = (**(code **)(param_1[0x110] + 0x18))(param_1);
      }
      param_1[1] = 2;
      iVar4 = 0;
      if (iVar3 != 1) {
        iVar4 = iVar3;
      }
      if (iVar4 == 1) {
        FUN_00487380((int)param_1,5,0x52a1fc);
        param_1[1] = 0x8000;
        return -0x1e;
      }
      if (iVar4 != -0x1e) goto LAB_00487bc0;
    }
    param_1[1] = 0x8000;
    return -0x1e;
  }
LAB_00487bc0:
  uVar1 = *(uint *)param_1[0x5a];
  uVar2 = ((uint *)param_1[0x5a])[1];
  param_1[5] = param_1[5] + 1;
  param_1[0x5d] = uVar2;
  param_1[0x5c] = uVar1;
  iVar3 = (**(code **)(param_1[0x110] + 0x10))(param_1,param_2);
  switch(iVar3) {
  case 1:
    param_1[5] = param_1[5] - 1;
    param_1[1] = 0x10;
    break;
  case -0x1e:
    param_1[1] = 0x8000;
    break;
  case -0x14:
  case 0:
    param_1[1] = 4;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x5e] = param_1[0x25];
  if ((iVar3 < iVar4) || (iVar3 == 1)) {
    iVar4 = iVar3;
  }
  return iVar4;
}


