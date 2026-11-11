// Function: FUN_00460d1b
// Entry: 00460d1b
// Size: 121 bytes
// Thunk: false
// External: false


undefined4 * FUN_00460d1b(int param_1,short *param_2,undefined *param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short *psVar6;
  
  puVar4 = (undefined4 *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    psVar6 = param_2;
    psVar1 = FUN_0047d0f8(param_2);
    puVar2 = FUN_00487ce0(psVar6,unaff_EBP);
    puVar5 = puVar2;
    (*(code *)param_3)();
    iVar3 = FUN_0049a330(puVar2,param_2,(uint *)0x2800,puVar5,psVar6);
    if (iVar3 == 0) {
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = HeapAlloc(DAT_00542264,8,0x2c);
      }
      puVar4[4] = 0;
      *puVar4 = puVar2;
      puVar4[1] = psVar1;
      puVar4[9] = param_3;
      puVar4[10] = param_1;
      *(undefined4 **)(param_1 + 4) = puVar4;
    }
  }
  return puVar4;
}


