// Function: FUN_00418d88
// Entry: 00418d88
// Size: 419 bytes
// Thunk: false
// External: false


void __fastcall
FUN_00418d88(int param_1,int param_2,short *param_3,int param_4,undefined4 param_5,char *param_6)

{
  int iVar1;
  LPWSTR pWVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  double *pdVar6;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar7;
  char local_38 [12];
  char *local_2c;
  char local_28;
  char local_27;
  char local_26;
  double *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  char *local_10;
  
  FUN_004193e7(param_1,param_2,param_3);
  if (param_4 != 0) {
    FUN_0046a68d((undefined4 *)local_38,param_4,param_6);
    iVar1 = FUN_0046a6d3(local_38);
    while (iVar1 != 0) {
      if (*local_2c == '*') {
        local_2c = local_2c + 1;
      }
      pWVar2 = FUN_0044e620(local_2c);
      uVar3 = FUN_0044be0a(pWVar2);
      if (pWVar2[uVar3 - 1] == L'$') {
        uVar3 = FUN_0044be0a(pWVar2);
        pWVar2[uVar3 - 1] = L'\0';
      }
      piVar4 = FUN_00418bd4(param_3,pWVar2);
      if (piVar4 != (int *)0x0) {
        if (local_28 == '\x01') {
          if (local_26 == '\0') {
            if (local_27 == '\a') {
              FUN_00418d88(0,extraout_EDX,(short *)piVar4,(int)local_20,0,local_10);
            }
            else {
              FUN_00418f7a(0,extraout_EDX,(short *)piVar4,(int)local_27,local_14,local_20);
            }
          }
          else {
            iVar1 = *(int *)local_20 >> 0x1f;
            FUN_0046a91c(0,iVar1,(short *)piVar4,*(int *)local_20,iVar1);
          }
        }
        else if (local_28 == '\x02') {
          FUN_004193c1(0,extraout_EDX,(short *)piVar4);
          iVar1 = 0;
          if (0 < local_1c) {
            do {
              piVar5 = FUN_0046a8d1((short *)piVar4);
              if (piVar5 != (int *)0x0) {
                pdVar6 = (double *)(local_18 * iVar1 + (int)local_20);
                if (local_26 == '\0') {
                  iVar7 = CONCAT31((int3)((uint)extraout_EDX_00 >> 8),local_27);
                  if (local_27 == '\a') {
                    FUN_00418d88((int)piVar5,iVar7,(short *)piVar5,(int)pdVar6,0,local_10);
                  }
                  else {
                    FUN_00418f7a((int)piVar5,iVar7,(short *)piVar5,(int)local_27,local_14,pdVar6);
                  }
                }
                else {
                  iVar7 = *(int *)pdVar6 >> 0x1f;
                  FUN_0046a91c((int)piVar5,iVar7,(short *)piVar5,*(int *)pdVar6,iVar7);
                }
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_1c);
          }
        }
        else if (local_28 == '\x03') {
          FUN_004190d0(0,extraout_EDX,(short *)piVar4,*(double **)local_20,(int)local_10);
        }
        else if (local_28 == '\x04') {
          FUN_004190fb(0,extraout_EDX,(short *)piVar4,*(undefined4 **)local_20,(int)local_10);
        }
        else if (local_28 == '\x05') {
          FUN_0041915d(0,extraout_EDX,(short *)piVar4,*(int **)local_20,(int)local_10);
        }
      }
      FUN_0044e5a0(pWVar2);
      iVar1 = FUN_0046a6d3(local_38);
    }
  }
  return;
}


