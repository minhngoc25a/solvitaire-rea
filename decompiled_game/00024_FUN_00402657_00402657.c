// Function: FUN_00402657
// Entry: 00402657
// Size: 743 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00402657(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_28c;
  undefined2 local_288;
  undefined2 local_286;
  undefined2 local_284;
  undefined2 local_282;
  undefined2 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined2 uStack_256;
  undefined4 local_254;
  undefined2 uStack_252;
  undefined2 local_250;
  undefined4 local_24c;
  undefined4 local_244;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  char local_224 [260];
  char local_120 [272];
  
  pcVar2 = local_224;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  cVar1 = *param_1;
  pcVar2 = local_120;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if (cVar1 == '\0') {
    return 0;
  }
  strcpy(local_224,param_1);
  FUN_00402629(local_224);
  iVar4 = stat64(local_224,&local_25c);
  if (iVar4 == -1) {
    puVar5 = &local_28c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar4 = -1;
  }
  else {
    local_28c = local_25c;
    local_270 = local_238;
    local_288 = (undefined2)local_258;
    local_268 = local_230;
    local_286 = uStack_256;
    local_260 = local_228;
    local_284 = (undefined2)local_254;
    local_282 = uStack_252;
    local_27c = local_24c;
    local_278 = local_244;
    local_274 = local_23c;
    local_26c = local_234;
    local_264 = local_22c;
    local_280 = local_250;
  }
  if (DAT_00410a2c != (FILE *)0x0) {
    pcVar2 = "(OK)";
    if (iVar4 != 0) {
      pcVar2 = "(not found)";
    }
    fprintf(DAT_00410a2c,"Check launcher:\t%s %s\n",local_224,pcVar2);
  }
  if (iVar4 == 0) {
    if (DAT_00418c50 != 0) {
      strcpy(local_120,param_1);
      FUN_004025e6(local_120,"bin\\javac.exe");
      iVar4 = stat64(local_120,&local_25c);
      if (iVar4 == -1) {
        puVar5 = &local_28c;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        iVar4 = -1;
      }
      else {
        local_28c = local_25c;
        local_274 = local_23c;
        local_270 = local_238;
        local_288 = (undefined2)local_258;
        local_26c = local_234;
        local_268 = local_230;
        local_286 = uStack_256;
        local_264 = local_22c;
        local_260 = local_228;
        local_284 = (undefined2)local_254;
        local_282 = uStack_252;
        local_280 = local_250;
        local_27c = local_24c;
        local_278 = local_244;
      }
      if (DAT_00410a2c != (FILE *)0x0) {
        pcVar2 = "(OK)";
        if (iVar4 != 0) {
          pcVar2 = "(not found)";
        }
        fprintf(DAT_00410a2c,"Check javac:\t%s %s\n",local_120,pcVar2);
      }
      if (iVar4 != 0) goto LAB_004027c9;
    }
    uVar3 = 1;
  }
  else {
LAB_004027c9:
    SetLastError(0);
    uVar3 = 0;
  }
  return uVar3;
}


