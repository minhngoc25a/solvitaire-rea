// Function: FUN_00460460
// Entry: 00460460
// Size: 233 bytes
// Thunk: false
// External: false


char * __cdecl FUN_00460460(char *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint local_18;
  
  if (((int)param_3 < 1) && ((int)param_3 < 0)) {
    if ((param_2 == 0) && (param_3 == 0x80000000)) {
      local_18 = 0;
      uVar2 = param_3;
    }
    else {
      local_18 = -param_2;
      uVar2 = -(param_3 + (param_2 != 0));
    }
  }
  else {
    local_18 = param_2;
    uVar2 = param_3;
  }
  do {
    pcVar4 = param_1;
    param_1 = pcVar4 + -1;
    lVar1 = (ulonglong)uVar2 * 0xcccccccd + ((ulonglong)local_18 * 0xcccccccd >> 0x20);
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar3 = (int)((ulonglong)local_18 * 0xcccccccc >> 0x20) +
            (uint)CARRY4((uint)((ulonglong)local_18 * 0xcccccccc),(uint)lVar1);
    lVar1 = (ulonglong)uVar2 * 0xcccccccc + (ulonglong)CONCAT14(CARRY4(uVar5,uVar3),uVar5 + uVar3);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1 >> 3 | uVar2 * 0x20000000;
    uVar2 = uVar2 >> 3;
    *param_1 = "0123456789"[local_18 + uVar3 * -10];
    local_18 = uVar3;
  } while (uVar3 != 0 || uVar2 != 0);
  if (((int)param_3 < 1) && ((int)param_3 < 0)) {
    pcVar4[-2] = '-';
    return pcVar4 + -2;
  }
  return param_1;
}


