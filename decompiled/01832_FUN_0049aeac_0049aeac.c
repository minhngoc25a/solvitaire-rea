// Function: FUN_0049aeac
// Entry: 0049aeac
// Size: 115 bytes
// Thunk: false
// External: false


undefined4 * FUN_0049aeac(int param_1,int param_2,uint *param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)0x0;
  if ((param_2 != 0) && (param_3 != (uint *)0x0)) {
    puVar1 = FUN_00487ce0(unaff_EBP,unaff_EDI);
    puVar4 = puVar1;
    (*(code *)param_4)();
    iVar2 = FUN_004e7760(puVar1,param_2,param_3,(int)puVar4,unaff_EBP);
    if (iVar2 == 0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = HeapAlloc(DAT_00542264,8,0x2c);
      }
      puVar3[4] = 0;
      *puVar3 = puVar1;
      puVar3[2] = param_2;
      puVar3[3] = param_3;
      puVar3[9] = param_4;
      puVar3[10] = param_1;
      *(undefined4 **)(param_1 + 4) = puVar3;
    }
  }
  return puVar3;
}


