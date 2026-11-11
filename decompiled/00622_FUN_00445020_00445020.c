// Function: FUN_00445020
// Entry: 00445020
// Size: 912 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00445020(undefined1 *param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
            int param_7,undefined4 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  uint local_14;
  uint local_c;
  uint uStack_4;
  
  puVar5 = param_1;
  if ((((param_1 != (undefined1 *)0x0) && (param_3 != 0)) && (param_2 != 0)) && (param_7 != 0)) {
    switch(param_8) {
    case 1:
      if ((param_6 != 0) || (param_5 != 0)) {
        uStack_4 = 0;
        iVar6 = param_7 - (int)param_1;
        param_1 = (undefined1 *)0x0;
        uVar1 = param_2;
        puVar4 = puVar5;
        while( true ) {
          do {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              if ((byte)puVar5[iVar6] < param_4) {
                uVar2 = *(undefined1 *)((uint)(byte)puVar5[iVar6] + param_3);
              }
              else {
                uVar2 = 0;
              }
              *puVar5 = uVar2;
              puVar5 = puVar5 + 1;
            }
            param_3 = param_3 + param_4;
            puVar5 = puVar4 + param_2;
            iVar6 = iVar6 - param_2;
            bVar8 = (undefined1 *)0xfffffffe < param_1;
            param_1 = param_1 + 1;
            uStack_4 = uStack_4 + bVar8;
            uVar1 = param_2;
            puVar4 = puVar5;
          } while (uStack_4 < param_6);
          if (param_6 < uStack_4) break;
          if (param_5 <= param_1) {
            return 0;
          }
        }
      }
      break;
    case 2:
      if ((param_6 != 0) || (param_5 != 0)) {
        uStack_4 = 0;
        param_1 = (undefined1 *)0x0;
        while( true ) {
          do {
            uVar1 = 0;
            if (param_2 != 0) {
              do {
                if (*(byte *)(param_7 + uVar1) < param_4) {
                  uVar3 = *(undefined2 *)(param_3 + (uint)*(byte *)(param_7 + uVar1) * 2);
                }
                else {
                  uVar3 = 0;
                }
                *(undefined2 *)(puVar5 + uVar1 * 2) = uVar3;
                uVar1 = uVar1 + 1;
              } while (uVar1 < param_2);
            }
            puVar5 = puVar5 + param_2 * 2;
            bVar8 = (undefined1 *)0xfffffffe < param_1;
            param_1 = param_1 + 1;
            param_3 = param_3 + param_4 * 2;
            uStack_4 = uStack_4 + bVar8;
          } while (uStack_4 < param_6);
          if (param_6 < uStack_4) break;
          if (param_5 <= param_1) {
            return 0;
          }
        }
      }
      break;
    case 3:
      if ((param_6 != 0) || (param_5 != 0)) {
        local_c = 0;
        local_14 = 0;
        while( true ) {
          do {
            uVar1 = 0;
            if (param_2 != 0) {
              puVar5 = param_1 + 1;
              do {
                uVar7 = (uint)*(byte *)(param_7 + uVar1);
                if (uVar7 < param_4) {
                  iVar6 = param_3 + uVar7 * 2;
                  puVar5[-1] = *(undefined1 *)(uVar7 + iVar6);
                  *puVar5 = *(undefined1 *)(uVar7 + 1 + iVar6);
                  puVar5[1] = *(undefined1 *)(uVar7 + 2 + iVar6);
                }
                else {
                  puVar5[-1] = 0;
                }
                uVar1 = uVar1 + 1;
                *puVar5 = 0;
                puVar5 = puVar5 + 3;
              } while (uVar1 < param_2);
            }
            param_3 = param_3 + param_4 * 3;
            param_1[uVar1 * 3 + 2] = 0;
            param_1 = param_1 + param_2 * 3;
            bVar8 = 0xfffffffe < local_14;
            local_14 = local_14 + 1;
            local_c = local_c + bVar8;
          } while (local_c < param_6);
          if (param_6 < local_c) break;
          if (param_5 <= local_14) {
            return 0;
          }
        }
      }
      break;
    case 4:
      if ((param_6 != 0) || (param_5 != 0)) {
        local_c = 0;
        param_1 = (undefined1 *)0x0;
        while( true ) {
          do {
            uVar1 = 0;
            if (param_2 != 0) {
              do {
                if (*(byte *)(param_7 + uVar1) < param_4) {
                  uVar9 = *(undefined4 *)(param_3 + (uint)*(byte *)(param_7 + uVar1) * 4);
                }
                else {
                  uVar9 = 0;
                }
                *(undefined4 *)(puVar5 + uVar1 * 4) = uVar9;
                uVar1 = uVar1 + 1;
              } while (uVar1 < param_2);
            }
            puVar5 = puVar5 + param_2 * 4;
            param_3 = param_3 + param_4 * 4;
            bVar8 = (undefined1 *)0xfffffffe < param_1;
            param_1 = param_1 + 1;
            local_c = local_c + bVar8;
          } while (local_c < param_6);
          if (param_6 < local_c) break;
          if (param_5 <= param_1) {
            return 0;
          }
        }
      }
      break;
    case 5:
      if ((param_6 != 0) || (param_5 != 0)) {
        local_c = 0;
        param_1 = (undefined1 *)0x0;
        do {
          uVar1 = 0;
          if (param_2 != 0) {
            do {
              if (*(byte *)(uVar1 + param_7) < param_4) {
                uVar9 = *(undefined4 *)(param_3 + (uint)*(byte *)(uVar1 + param_7) * 4);
              }
              else {
                uVar9 = 0;
              }
              *(undefined4 *)(puVar5 + uVar1 * 4) = uVar9;
              uVar1 = uVar1 + 1;
            } while (uVar1 < param_2);
          }
          puVar5 = puVar5 + param_2 * 4;
          param_3 = param_3 + param_4 * 4;
          bVar8 = (undefined1 *)0xfffffffe < param_1;
          param_1 = param_1 + 1;
          local_c = local_c + bVar8;
        } while ((local_c < param_6) || ((local_c <= param_6 && (param_1 < param_5))));
      }
      break;
    default:
      goto switchD_00445065_default;
    }
    return 0;
  }
switchD_00445065_default:
  return 0xfffffffe;
}


