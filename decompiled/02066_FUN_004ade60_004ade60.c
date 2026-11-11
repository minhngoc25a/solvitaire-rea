// Function: FUN_004ade60
// Entry: 004ade60
// Size: 300 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ade60(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int unaff_retaddr;
  char cStack00000008;
  int *piVar5;
  
  param_1[1] = 0;
  uVar1 = FUN_0042ebe0();
  puVar2 = (undefined4 *)FUN_004f1970(param_1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = param_1;
    guard_check_icall();
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1,piVar5);
  }
  *puVar2 = FUN_004adf90;
  puVar2[1] = FUN_004ae0e0;
  puVar2[2] = FUN_004ae1b0;
  puVar2[3] = FUN_004ae260;
  puVar2[4] = &LAB_004ae310;
  puVar2[5] = &LAB_004ae380;
  puVar2[6] = &LAB_004ae3f0;
  puVar2[7] = &LAB_004ae6b0;
  puVar2[8] = &LAB_004ae800;
  puVar2[9] = &LAB_004ae950;
  puVar2[10] = &LAB_004aea60;
  puVar2[0xc] = 1000000000;
  puVar2[0xb] = uVar1;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  param_1[1] = (int)puVar2;
  pcVar3 = (char *)FUN_00424803("JPEGMEM");
  if (pcVar3 != (char *)0x0) {
    cStack00000008 = 'x';
    iVar4 = FUN_00417e05(pcVar3,"%ld%c");
    if (0 < iVar4) {
      if ((cStack00000008 == 'm') || (cStack00000008 == 'M')) {
        unaff_retaddr = unaff_retaddr * 1000;
      }
      puVar2[0xb] = unaff_retaddr * 1000;
    }
  }
  return;
}


