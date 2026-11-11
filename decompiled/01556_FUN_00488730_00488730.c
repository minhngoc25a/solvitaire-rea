// Function: FUN_00488730
// Entry: 00488730
// Size: 703 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00488730(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  uint local_14;
  uint *local_10;
  
  puVar1 = param_1;
  if (*(char *)((int)param_1 + 0x4e) != '\0') {
LAB_004889dc:
    if (param_3 != (uint *)0x0) {
      *param_3 = 0xffffffe2;
    }
    return 0;
  }
  do {
    while( true ) {
      uVar2 = puVar1[0xe];
      if ((param_2 <= uVar2) && (uVar2 != 0)) {
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar2;
        }
        return puVar1[0xd];
      }
      local_14 = puVar1[0x12];
      param_1 = puVar1 + 0x12;
      uVar6 = local_14 + uVar2;
      if ((uVar6 <= puVar1[0x10]) && (param_2 <= uVar6)) {
        puVar1[0x11] = puVar1[0x11] - uVar2;
        *param_1 = uVar6;
        puVar1[0xd] = puVar1[0xb];
        puVar1[0xe] = 0;
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar6;
        }
        return puVar1[0x11];
      }
      local_10 = puVar1 + 0x12;
      puVar7 = (uint *)puVar1[0xd];
      puVar4 = (uint *)puVar1[0xb];
      uVar6 = *param_1;
      if ((puVar4 < puVar7) &&
         (param_1 = local_10, uVar6 = local_14, puVar1[0xc] + puVar1[0xb] < (int)puVar7 + param_2))
      {
        if (uVar2 != 0) {
          FUN_0044c490((uint *)puVar1[0xb],puVar7,uVar2);
          local_14 = puVar1[0x12];
        }
        param_1 = puVar1 + 0x12;
        puVar4 = (uint *)puVar1[0xb];
        puVar1[0xd] = (uint)puVar4;
        puVar7 = puVar4;
        uVar6 = local_14;
      }
      local_14 = uVar6;
      if (local_14 == 0) break;
      uVar2 = puVar1[0xc];
      if (uVar2 < param_2) {
        bVar8 = uVar2 != 0;
        uVar6 = uVar2;
        uVar2 = param_2;
        if (bVar8) {
          do {
            uVar2 = uVar6 * 2;
            if (uVar2 <= uVar6) goto LAB_004889c6;
            uVar6 = uVar2;
          } while (uVar2 < param_2);
        }
        puVar4 = (uint *)FUN_00482949(uVar2);
        if (puVar4 == (uint *)0x0) {
LAB_004889c6:
          FUN_00487380(puVar1[4],0xc,0x525488);
          goto LAB_004889d8;
        }
        if (puVar1[0xe] != 0) {
          FUN_0044c490(puVar4,(uint *)puVar1[0xd],puVar1[0xe]);
        }
        FUN_0047d191((LPVOID)puVar1[0xb]);
        param_1 = puVar1 + 0x12;
        puVar1[0xb] = (uint)puVar4;
        puVar1[0xd] = (uint)puVar4;
        puVar1[0xc] = uVar2;
        puVar7 = puVar4;
      }
      uVar6 = puVar1[0xe];
      uVar5 = (int)puVar4 + uVar2 + (-(int)puVar7 - uVar6);
      uVar2 = param_2 - uVar6;
      if (uVar5 + uVar6 <= param_2) {
        uVar2 = uVar5;
      }
      uVar5 = puVar1[0x12];
      if (uVar2 <= puVar1[0x12]) {
        uVar5 = uVar2;
      }
      FUN_0044c490((uint *)(uVar6 + (int)puVar7),(uint *)puVar1[0x11],uVar5);
      puVar1[0x11] = puVar1[0x11] + uVar5;
      *param_1 = *param_1 - uVar5;
      puVar1[0xe] = puVar1[0xe] + uVar5;
    }
    if ((char)puVar1[0x13] != '\0') {
      if (param_3 == (uint *)0x0) {
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    puVar7 = puVar1 + 0xf;
    uVar2 = (**(code **)puVar1[5])(puVar1,puVar7);
    if ((int)uVar2 < 0) {
      puVar1[0x12] = 0;
      puVar1[0x10] = 0;
      *puVar7 = 0;
      puVar1[0x11] = 0;
LAB_004889d8:
      *(undefined1 *)((int)puVar1 + 0x4e) = 1;
      goto LAB_004889dc;
    }
    if (uVar2 == 0) {
      iVar3 = *(int *)(puVar1[4] + 0x94);
      if ((iVar3 == *(int *)(puVar1[4] + 0x90) + -1) ||
         (iVar3 = FUN_00489460((int)puVar1,iVar3 + 1), iVar3 != 0)) {
        puVar1[0x12] = 0;
        puVar1[0x10] = 0;
        *puVar7 = 0;
        puVar1[0x11] = 0;
        *(undefined1 *)(puVar1 + 0x13) = 1;
        if (param_3 == (uint *)0x0) {
          return 0;
        }
        *param_3 = puVar1[0xe];
        return 0;
      }
    }
    else {
      puVar1[0x10] = uVar2;
      puVar1[0x12] = uVar2;
      puVar1[0x11] = *puVar7;
    }
  } while( true );
}


