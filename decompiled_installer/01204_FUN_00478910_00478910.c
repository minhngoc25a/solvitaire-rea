// Function: FUN_00478910
// Entry: 00478910
// Size: 301 bytes
// Thunk: false
// External: false


undefined4 * FUN_00478910(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1 + 4;
  puVar4 = (undefined4 *)0x0;
  if ((uVar3 & 3) != 0) {
    uVar3 = uVar3 + (4 - (uVar3 & 3));
  }
  if ((param_4 & 4) == 0) {
    puVar4 = HeapAlloc(DAT_00542264,0,0x38);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[5] = param_2;
      puVar4[6] = param_3;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[4] = uVar3;
      if (((param_4 & 3) == 1) || ((param_4 & 3) == 0)) {
        puVar4[7] = 1;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar4 + 8));
      }
      else {
        puVar4[7] = 0;
      }
    }
  }
  else {
    FUN_004b79df((int *)&DAT_005439f4,&LAB_00478d88);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005439fc);
    for (puVar1 = DAT_005439f8; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[3] == uVar3) && (puVar1[4] == param_4)) {
        puVar1[5] = puVar1[5] + 1;
        puVar4 = (undefined4 *)puVar1[2];
        puVar1 = DAT_005439f8;
        if (puVar4 != (undefined4 *)0x0) goto LAB_004789dc;
        break;
      }
    }
    puVar2 = HeapAlloc(DAT_00542264,0,0x18);
    puVar1 = DAT_005439f8;
    if ((puVar2 != (undefined4 *)0x0) &&
       (puVar4 = FUN_00478910(uVar3 - 4,param_2,param_3,param_4 & 0xfffffffb), puVar1 = DAT_005439f8
       , puVar4 != (undefined4 *)0x0)) {
      puVar4[2] = puVar2;
      puVar2[1] = 0;
      puVar2[2] = puVar4;
      puVar2[3] = uVar3;
      puVar2[4] = param_4;
      puVar2[5] = 1;
      *puVar2 = DAT_005439f8;
      puVar1 = puVar2;
      if (DAT_005439f8 != (undefined4 *)0x0) {
        DAT_005439f8[1] = puVar2;
      }
    }
LAB_004789dc:
    DAT_005439f8 = puVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005439fc);
  }
  return puVar4;
}


