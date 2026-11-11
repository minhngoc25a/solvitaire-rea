// Function: FUN_0042c640
// Entry: 0042c640
// Size: 542 bytes
// Thunk: false
// External: false


void __cdecl FUN_0042c640(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_c;
  uint local_8;
  uint uStack_4;
  
  local_8 = 0;
  uStack_4 = 0;
  if (param_5 == 0) {
    if ((param_4 != 0) || (param_3 != 0)) {
      while( true ) {
        do {
          *(char *)(local_8 + param_1) = *(char *)(local_8 * 3 + 2 + param_2) + -0x80;
          bVar7 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar7;
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
          iVar6 = param_2 + local_8 * 2;
          uVar5 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 2 + local_8),
                                          *(undefined1 *)(iVar6 + 1 + local_8)),
                                 *(undefined1 *)(iVar6 + local_8)) * 0x100;
          uVar3 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          DAT_0053fc54 = (int)(uVar3 * 0xbc8f) % 0x7fffffff;
          uVar1 = (DAT_0053fc54 >> 9) + (uVar3 >> 9);
          uVar4 = ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar5,uVar1);
          uVar3 = (uint)(uVar5 + uVar1 < 0x800000);
          bVar7 = -1 < (int)(uVar4 - uVar3);
          if ((uVar4 != uVar3 && bVar7) || ((bVar7 && (0x7fffffff < (uVar5 + uVar1) - 0x800000)))) {
            cVar2 = '\x7f';
          }
          else {
            cVar2 = (char)((uVar1 - 0x800000) + uVar5 >> 0x18);
          }
          *(char *)(local_8 + param_1) = cVar2 + -0x80;
          bVar7 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar7;
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
        iVar6 = param_2 + local_8 * 2;
        uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 2 + local_8),
                                        *(undefined1 *)(iVar6 + 1 + local_8)),
                               *(undefined1 *)(iVar6 + local_8)) * 0x100;
        if (param_5 == 1) {
          DAT_0053fc54 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          uVar1 = (DAT_0053fc54 >> 8) - 0x800000;
        }
        else {
          uVar1 = 0;
        }
        iVar6 = ((int)uVar3 >> 0x1f) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
        if ((iVar6 < 1) && ((iVar6 < 0 || (uVar3 + uVar1 < 0x80000000)))) {
          cVar2 = (char)(uVar3 + uVar1 >> 0x18);
        }
        else {
          cVar2 = '\x7f';
        }
        *(char *)(local_8 + param_1) = cVar2 + -0x80;
        bVar7 = 0xfffffffe < local_8;
        local_8 = local_8 + 1;
        local_c = local_c + bVar7;
      } while ((local_c < param_4) || ((local_c <= param_4 && (local_8 < param_3))));
    }
  }
  return;
}


