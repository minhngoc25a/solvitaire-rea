// Function: FUN_0042107f
// Entry: 0042107f
// Size: 223 bytes
// Thunk: false
// External: false


undefined4 FUN_0042107f(HBITMAP param_1)

{
  HBITMAP h;
  DWORD DVar1;
  int iVar2;
  uint *lpMem;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 local_70 [18];
  short local_5e;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  ushort local_a;
  
  h = param_1;
  if ((DAT_005434b0 != 0) && (DVar1 = GetObjectType(param_1), DVar1 == 7)) {
    iVar2 = GetObjectW(h,0x54,local_70);
    if (iVar2 == 0x54) {
      if (local_5e == 0x20) {
        return 1;
      }
    }
    else {
      iVar2 = GetObjectW(h,0x18,local_1c);
      if (((iVar2 == 0x18) && (iVar2 = FUN_0047a6f7(local_18,(uint)local_a), local_a == 0x20)) &&
         (lpMem = FUN_0042157c(h,&param_1), lpMem != (uint *)0x0)) {
        iVar3 = 0;
        puVar4 = lpMem;
        if (0 < local_14) {
          do {
            iVar6 = 0;
            puVar5 = puVar4;
            if (0 < local_18) {
              do {
                if ((*puVar5 & 0xff000000) != 0) {
                  if (param_1 == (HBITMAP)0x0) {
                    return 1;
                  }
                  HeapFree(DAT_00542264,0,lpMem);
                  return 1;
                }
                puVar5 = puVar5 + 1;
                iVar6 = iVar6 + 1;
              } while (iVar6 < local_18);
            }
            iVar3 = iVar3 + 1;
            puVar4 = (uint *)((int)puVar4 + iVar2);
          } while (iVar3 < local_14);
        }
        if (param_1 != (HBITMAP)0x0) {
          HeapFree(DAT_00542264,0,lpMem);
        }
      }
    }
  }
  return 0;
}


