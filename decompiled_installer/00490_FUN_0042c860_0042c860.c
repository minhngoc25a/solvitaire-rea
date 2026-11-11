// Function: FUN_0042c860
// Entry: 0042c860
// Size: 572 bytes
// Thunk: false
// External: false


void __cdecl FUN_0042c860(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  bool bVar5;
  uint local_c;
  uint local_8;
  uint uStack_4;
  
  local_8 = 0;
  uStack_4 = 0;
  if (param_5 == 0) {
    if ((param_4 != 0) || (param_3 != 0)) {
      while( true ) {
        do {
          iVar1 = local_8 * 2 + param_2;
          *(ushort *)(param_1 + local_8 * 2) =
               CONCAT11(*(undefined1 *)(local_8 + 2 + iVar1),*(undefined1 *)(local_8 + 1 + iVar1));
          bVar5 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar5;
        } while (uStack_4 < param_4);
        if (param_4 < uStack_4) break;
        if (param_3 <= local_8) {
          return;
        }
      }
    }
  }
  else if ((param_4 != 0) || (param_3 != 0)) {
    if (param_5 == 2) {
      while( true ) {
        do {
          iVar1 = param_2 + local_8 * 2;
          uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 2 + local_8),
                                          *(undefined1 *)(iVar1 + 1 + local_8)),
                                 *(undefined1 *)(iVar1 + local_8)) * 0x100;
          uVar2 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          DAT_0053fc54 = (int)(uVar2 * 0xbc8f) % 0x7fffffff;
          uVar2 = uVar2 / 0x1fffd + ((DAT_0053fc54 >> 0x11) - 0x8000);
          iVar1 = ((int)uVar2 >> 0x1f) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
          if ((iVar1 < 1) && ((iVar1 < 0 || (uVar2 + uVar3 < 0x80000000)))) {
            uVar4 = (undefined2)(uVar3 + uVar2 >> 0x10);
          }
          else {
            uVar4 = 0x7fff;
          }
          *(undefined2 *)(param_1 + local_8 * 2) = uVar4;
          bVar5 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar5;
        } while (uStack_4 < param_4);
        if (param_4 < uStack_4) break;
        if (param_3 <= local_8) {
          return;
        }
      }
    }
    else {
      local_8 = 0;
      local_c = 0;
      do {
        iVar1 = param_2 + local_8 * 2;
        uVar2 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 2 + local_8),
                                        *(undefined1 *)(iVar1 + 1 + local_8)),
                               *(undefined1 *)(iVar1 + local_8)) * 0x100;
        if (param_5 == 1) {
          DAT_0053fc54 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          uVar3 = (DAT_0053fc54 >> 0x10) - 0x8000;
        }
        else {
          uVar3 = 0;
        }
        iVar1 = ((int)uVar3 >> 0x1f) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar3,uVar2);
        if ((iVar1 < 1) && ((iVar1 < 0 || (uVar3 + uVar2 < 0x80000000)))) {
          uVar4 = (undefined2)(uVar2 + uVar3 >> 0x10);
        }
        else {
          uVar4 = 0x7fff;
        }
        *(undefined2 *)(param_1 + local_8 * 2) = uVar4;
        bVar5 = 0xfffffffe < local_8;
        local_8 = local_8 + 1;
        local_c = local_c + bVar5;
      } while ((local_c < param_4) || ((local_c <= param_4 && (local_8 < param_3))));
    }
  }
  return;
}


