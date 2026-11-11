// Function: FUN_004a57b0
// Entry: 004a57b0
// Size: 335 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a57b0(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  undefined4 in_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return in_EAX;
  }
  if (((param_3 == 1) || (param_3 == 2)) && (param_4 != (uint *)0x0)) {
    puVar4 = param_4;
    do {
      uVar5 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar5 != '\0');
    uVar5 = (int)puVar4 - ((int)param_4 + 1);
    if (((uVar5 != 0) && ((char)*param_4 != '-')) &&
       ((uVar1 = FUN_0046cbe0((int)param_4,uVar5), uVar1 != 0 && (param_5 != (uint *)0x0)))) {
      puVar4 = param_5;
      do {
        uVar1 = *puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
      } while ((char)uVar1 != '\0');
      uVar1 = (int)puVar4 - ((int)param_5 + 1);
      if (((uVar1 != 0) && ((char)*param_5 != '-')) &&
         (uVar2 = FUN_0046cbe0((int)param_5,uVar1), uVar2 != 0)) {
        *(char *)(param_2 + 0xfc) = (char)param_3;
        puVar4 = (uint *)FUN_004a4890(param_1,uVar5 + 1);
        *(uint **)(param_2 + 0x100) = puVar4;
        if (puVar4 == (uint *)0x0) {
          uVar3 = FUN_0046f1c0(param_1,"Memory allocation failed while processing sCAL");
          return uVar3;
        }
        FUN_0044c490(puVar4,param_4,uVar5 + 1);
        puVar4 = (uint *)FUN_004a4890(param_1,uVar1 + 1);
        *(uint **)(param_2 + 0x104) = puVar4;
        if (puVar4 == (uint *)0x0) {
          FUN_004a48e0(param_1,*(LPVOID *)(param_2 + 0x100));
          *(undefined4 *)(param_2 + 0x100) = 0;
          uVar3 = FUN_0046f1c0(param_1,"Memory allocation failed while processing sCAL");
          return uVar3;
        }
        uVar6 = FUN_0044c490(puVar4,param_5,uVar1 + 1);
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
        *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x100;
        return (int)uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


