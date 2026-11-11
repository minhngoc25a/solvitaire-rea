// Function: FUN_004c0612
// Entry: 004c0612
// Size: 213 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004c0612(uint *param_1,uint *param_2,uint param_3,LPCWSTR param_4,uint param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  local_8 = 0;
  if (param_2 == (uint *)0x0) {
    if (param_3 != 0) goto LAB_004c0653;
  }
  else {
    if (param_3 == 0) {
LAB_004c0653:
      *(undefined1 *)(param_6 + 7) = 1;
      param_6[6] = 0x16;
      FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
      return 0x16;
    }
    *(undefined1 *)param_2 = 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_3;
  if (param_5 <= param_3) {
    uVar2 = param_5;
  }
  if (uVar2 < 0x80000000) {
    iVar1 = FUN_004c036b(param_2,param_4,uVar2,param_6);
    if (iVar1 == -1) {
      if (param_2 != (uint *)0x0) {
        *(undefined1 *)param_2 = 0;
      }
      if ((char)param_6[7] == '\0') {
        return 0;
      }
      return param_6[6];
    }
    uVar2 = iVar1 + 1;
    if (param_2 != (uint *)0x0) {
      if (param_3 < uVar2) {
        if (param_5 != 0xffffffff) {
          *(undefined1 *)param_2 = 0;
          local_8 = 0x22;
          goto LAB_004c06af;
        }
        local_8 = 0x50;
        uVar2 = param_3;
      }
      *(undefined1 *)((uVar2 - 1) + (int)param_2) = 0;
    }
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar2;
    }
  }
  else {
    local_8 = 0x16;
LAB_004c06af:
    param_6[6] = local_8;
    *(undefined1 *)(param_6 + 7) = 1;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
  }
  return local_8;
}


