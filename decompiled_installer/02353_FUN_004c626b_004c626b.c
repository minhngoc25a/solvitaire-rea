// Function: FUN_004c626b
// Entry: 004c626b
// Size: 150 bytes
// Thunk: false
// External: false


int __cdecl FUN_004c626b(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  local_c[0] = param_1;
  if (param_1 == 0) goto LAB_004c627d;
  if (param_3 == 4) {
LAB_004c62b1:
    if ((param_3 != 0) && (param_3 != 0x40)) goto LAB_004c62c7;
  }
  else if (param_3 != 0) {
    if (param_3 != 0x40) goto LAB_004c627d;
    goto LAB_004c62b1;
  }
  if (0x7ffffffd < param_4 - 2U) {
LAB_004c627d:
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
    return -1;
  }
LAB_004c62c7:
  local_28 = &param_4;
  local_10 = param_1;
  local_24 = local_c;
  local_20 = param_5;
  local_1c = &param_3;
  local_18 = &param_2;
  local_14 = param_1;
  iVar1 = operator()<>(&local_14,&local_28);
  return iVar1;
}


