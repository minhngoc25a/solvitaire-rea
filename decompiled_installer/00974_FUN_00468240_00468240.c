// Function: FUN_00468240
// Entry: 00468240
// Size: 879 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00468240(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4,uint param_5)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  uint unaff_EDI;
  ulonglong uVar5;
  SIZE_T *pSVar6;
  uint uVar7;
  
  puVar4 = (undefined4 *)param_1[0x29];
  if (param_2 < 0x30402) {
    if (param_2 == 0x30401) {
      iVar2 = FUN_00467f10(param_1,(int)(puVar4 + 0x1a),6,(undefined4 *)0x1000000,unaff_EDI,
                           unaff_ESI);
    }
    else {
      if (param_2 == 0) {
LAB_004682c5:
        if (puVar4[0x24] != 0) {
          puVar4[0x22] = 0;
          FUN_0047d191((LPVOID)puVar4[0x23]);
          puVar4[0x23] = 0;
          if ((code *)puVar4[0x27] == (code *)&DAT_00467da0) {
            pvVar1 = (LPVOID)puVar4[0x25];
            iVar2 = FUN_00485ed0((int)pvVar1);
            FUN_0047d191(pvVar1);
            puVar4[0x25] = 0;
            puVar4[0x24] = 0;
            if (iVar2 != 0) {
              FUN_00487380((int)param_1,0xffffffff,0x525124);
            }
          }
          else {
            (*(code *)puVar4[0x27])(param_1,puVar4 + 0x1a);
          }
        }
        puVar4[0x24] = 1;
        puVar4[0x26] = &LAB_00467b60;
        puVar4[0x27] = &LAB_00467bb0;
        goto LAB_00468576;
      }
      if (param_2 == 0x21) {
        uVar7 = 0;
        pSVar6 = (SIZE_T *)0x21;
      }
      else {
        if (param_2 != 0x30101) goto LAB_004682c5;
        uVar7 = 0x40000000;
        pSVar6 = (SIZE_T *)0x1;
      }
      iVar2 = FUN_00469240((int)param_1,(int)(puVar4 + 0x1a),param_3,pSVar6,uVar7,unaff_EDI,
                           unaff_ESI);
    }
  }
  else if (param_2 == 0x40108) {
    if (puVar4[0x24] != 0) {
      puVar4[0x22] = 0;
      FUN_0047d191((LPVOID)puVar4[0x23]);
      puVar4[0x23] = 0;
      (*(code *)puVar4[0x27])(param_1,puVar4 + 0x1a);
    }
    puVar3 = (undefined4 *)FUN_0047f911(1,0x38);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00487380((int)param_1,0xc,0x525f18);
      iVar2 = -0x1e;
    }
    else {
      *puVar3 = puVar4[0x1a];
      puVar3[1] = puVar4[0x1b];
      puVar3[2] = puVar4[0x1c];
      puVar3[3] = puVar4[0x1e];
      puVar3[4] = puVar4[0x1f];
      puVar3[5] = puVar4[0x20];
      iVar2 = FUN_00496930((int)puVar3,param_5,8,-0xf,8,0,"1.2.12",0x38);
      if (iVar2 == 0) {
        iVar2 = 0;
        puVar4[0x25] = puVar3;
        puVar4[0x24] = 1;
        puVar4[0x26] = &LAB_00467bc0;
        *param_3 = &DAT_00467c70;
      }
      else {
        FUN_0047d191(puVar3);
        puVar4[0x25] = 0;
        FUN_00487380((int)param_1,0xffffffff,0x52394c);
        iVar2 = -0x1e;
      }
    }
  }
  else {
    if (param_2 != 0x40202) goto LAB_004682c5;
    if (puVar4[0x24] != 0) {
      puVar4[0x22] = 0;
      FUN_0047d191((LPVOID)puVar4[0x23]);
      puVar4[0x23] = 0;
      if ((code *)puVar4[0x27] == (code *)&DAT_00467c70) {
        pvVar1 = (LPVOID)puVar4[0x25];
        iVar2 = FUN_00496640((int)pvVar1);
        FUN_0047d191(pvVar1);
        puVar4[0x25] = 0;
        puVar4[0x24] = 0;
        if (iVar2 != 0) {
          FUN_00487380((int)param_1,0xffffffff,0x525124);
        }
      }
      else {
        (*(code *)puVar4[0x27])(param_1,puVar4 + 0x1a);
      }
    }
    puVar3 = (undefined4 *)FUN_0047f911(1,0x30);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00487380((int)param_1,0xc,0x525f98);
      iVar2 = -0x1e;
      puVar4 = param_3;
    }
    else {
      *puVar3 = puVar4[0x1a];
      puVar3[1] = puVar4[0x1b];
      puVar3[2] = puVar4[0x1c];
      uVar5 = __aullshr(0x20,puVar4[0x1d]);
      puVar3[3] = (int)uVar5;
      puVar3[4] = puVar4[0x1e];
      puVar3[5] = puVar4[0x1f];
      puVar3[6] = puVar4[0x20];
      uVar5 = __aullshr(0x20,puVar4[0x21]);
      puVar3[7] = (int)uVar5;
      iVar2 = FUN_00485ad0((int)puVar3,param_5,0,0x1e);
      if (iVar2 == 0) {
        puVar4[0x25] = puVar3;
        iVar2 = 0;
        puVar4[0x24] = 1;
        puVar4[0x26] = &LAB_00467cc0;
        puVar4[0x27] = &DAT_00467da0;
        puVar4 = param_3;
      }
      else {
        FUN_0047d191(puVar3);
        puVar4[0x25] = 0;
        FUN_00487380((int)param_1,0xffffffff,0x52394c);
        iVar2 = -0x1e;
        puVar4 = param_3;
      }
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00468576:
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = puVar4 + 0x2c;
  puVar4[0x1f] = 0xf000;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  return 0;
}


