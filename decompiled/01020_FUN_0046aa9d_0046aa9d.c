// Function: FUN_0046aa9d
// Entry: 0046aa9d
// Size: 474 bytes
// Thunk: false
// External: false


int __cdecl FUN_0046aa9d(ushort *param_1,undefined4 param_2,undefined *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar2 = (*(code *)param_3)(param_2,0x22);
  iVar6 = 1;
  puVar7 = param_1;
  if (param_1 != (ushort *)0x0) {
LAB_0046ac51:
    param_1 = puVar7;
    if (*param_1 != 0) {
      if (iVar2 == 0) goto LAB_0046ac6c;
      uVar1 = *param_1;
      uVar5 = (uint)uVar1;
      puVar7 = param_1 + 1;
      if (uVar5 != 8) {
        if (uVar5 == 9) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if (iVar2 != 0) {
            iVar2 = 0x74;
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if (uVar5 == 10) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if (iVar2 != 0) {
            iVar2 = 0x6e;
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if (uVar5 == 0xc) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if (iVar2 != 0) {
            iVar2 = 0x66;
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if (uVar5 == 0xd) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if (iVar2 != 0) {
            iVar2 = 0x72;
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if (uVar5 == 0x22) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if (iVar2 != 0) {
            iVar2 = 0x22;
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if (uVar5 == 0x5c) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if (iVar2 != 0) {
            iVar2 = 0x5c;
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if (uVar5 < 0x20) {
          iVar2 = (*(code *)param_3)(param_2,0x5c);
          if ((((iVar2 != 0) && (iVar2 = (*(code *)param_3)(param_2,0x75), iVar2 != 0)) &&
              (iVar2 = (*(code *)param_3)(param_2,0x30), iVar2 != 0)) &&
             ((iVar2 = (*(code *)param_3)(param_2,0x30), iVar2 != 0 &&
              (uVar4 = uVar1 >> 4 & 0xf,
              iVar2 = (*(code *)param_3)(param_2,(-(uint)(uVar4 < 10) & 0xffffffd9) + 0x57 + uVar4),
              iVar2 != 0)))) {
            iVar2 = (-(uint)((uVar5 & 0xf) < 10) & 0xffffffd9) + 0x57 + (uVar5 & 0xf);
            goto LAB_0046ac3e;
          }
          goto LAB_0046ac4b;
        }
        if ((ushort)(uVar1 + 0x2800) < 0x800) goto code_r0x0046abab;
        goto LAB_0046abcb;
      }
      iVar2 = (*(code *)param_3)(param_2,0x5c);
      if (iVar2 != 0) {
        iVar2 = 0x62;
LAB_0046ac3e:
        iVar3 = (*(code *)param_3)(param_2,iVar2);
        iVar2 = iVar6;
        if (iVar3 != 0) goto LAB_0046ac51;
      }
LAB_0046ac4b:
      iVar2 = 0;
      goto LAB_0046ac51;
    }
  }
  if ((iVar2 == 0) || (iVar2 = (*(code *)param_3)(param_2,0x22), iVar2 == 0)) {
LAB_0046ac6c:
    iVar6 = 0;
  }
  return iVar6;
code_r0x0046abab:
  if (puVar7 != (ushort *)0x0) {
    uVar5 = CONCAT22(*puVar7,uVar1);
    puVar7 = param_1 + 2;
LAB_0046abcb:
    param_1 = puVar7;
    iVar2 = (*(code *)param_3)(param_2,uVar5);
    puVar7 = param_1;
  }
  goto LAB_0046ac51;
}


