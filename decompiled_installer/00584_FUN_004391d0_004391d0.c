// Function: FUN_004391d0
// Entry: 004391d0
// Size: 364 bytes
// Thunk: false
// External: false


void __cdecl FUN_004391d0(uint param_1,uint param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    if (((param_3 != (undefined1 *)0x0) && (param_2 != 0)) &&
       (uVar4 = 0, uVar6 = param_2, param_2 != 0)) {
      while (uVar6 != 0) {
        cVar1 = FUN_00448a20(0,param_2,uVar4);
        param_3[uVar4] = cVar1;
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 - 1;
        if (param_2 <= uVar4) {
          return;
        }
      }
    }
  }
  else {
    if ((param_2 == 1) && ((param_1 & 4) != 0)) {
      *param_3 = 1;
      return;
    }
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 1;
    do {
      if (param_2 <= uVar4) {
        return;
      }
      uVar3 = uVar6 & param_1;
      if (uVar3 != 0) {
        if (uVar3 < 0x201) {
          if (uVar3 == 0x200) {
            uVar2 = 0xb;
          }
          else if (uVar3 < 0x11) {
            if (uVar3 == 0x10) {
              uVar2 = 6;
            }
            else {
              switch(uVar3) {
              case 1:
                uVar2 = 2;
                break;
              case 2:
                uVar2 = 3;
                break;
              default:
                goto switchD_00439273_caseD_3;
              case 4:
                uVar2 = 4;
                break;
              case 8:
                uVar2 = 5;
              }
            }
          }
          else {
            switch(uVar3) {
            case 0x20:
              uVar2 = 7;
              break;
            default:
switchD_00439273_caseD_3:
              uVar2 = 0;
              break;
            case 0x40:
              uVar2 = 8;
              break;
            case 0x80:
              uVar2 = 9;
              break;
            case 0x100:
              uVar2 = 10;
            }
          }
        }
        else if (uVar3 < 0x4001) {
          if (uVar3 == 0x4000) {
            uVar2 = 0x10;
          }
          else if (uVar3 < 0x1001) {
            if (uVar3 == 0x1000) {
              uVar2 = 0xe;
            }
            else if (uVar3 == 0x400) {
              uVar2 = 0xc;
            }
            else {
              if (uVar3 != 0x800) goto switchD_00439273_caseD_3;
              uVar2 = 0xd;
            }
          }
          else {
            if (uVar3 != 0x2000) goto switchD_00439273_caseD_3;
            uVar2 = 0xf;
          }
        }
        else if (uVar3 == 0x8000) {
          uVar2 = 0x11;
        }
        else if (uVar3 == 0x10000) {
          uVar2 = 0x12;
        }
        else {
          if (uVar3 != 0x20000) goto switchD_00439273_caseD_3;
          uVar2 = 0x13;
        }
        param_3[uVar4] = uVar2;
        uVar4 = uVar4 + 1;
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    } while (uVar5 < 0x20);
  }
  return;
}


