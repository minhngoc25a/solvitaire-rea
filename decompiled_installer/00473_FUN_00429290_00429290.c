// Function: FUN_00429290
// Entry: 00429290
// Size: 773 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00429290(int *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  uint uStack_4;
  
  if (((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) {
    return 0xfffffffe;
  }
  iVar7 = param_1[1];
  if (iVar7 != 2) {
    iVar6 = *param_1;
    goto LAB_00429570;
  }
  fVar4 = (float)param_1[3];
  iVar6 = *param_1;
  if (param_1[2] == 0) {
    if (fVar4 == 0.0) {
LAB_004292e4:
      if (param_2 == param_3) {
        return 0;
      }
    }
    else if (iVar6 == 5) {
      local_8 = 0;
      uStack_4 = 0;
      if (fVar4 <= 0.0) {
        fVar4 = fVar4 + DAT_0050c314;
        if (param_2 != param_3) {
          if ((param_5 == 0) && (param_4 == 0)) {
            return 0;
          }
          while( true ) {
            do {
              param_2[local_8 * 2] = param_3[local_8 * 2];
              param_2[local_8 * 2 + 1] = (uint)(fVar4 * (float)param_3[local_8 * 2 + 1]);
              bVar3 = 0xfffffffe < local_8;
              local_8 = local_8 + 1;
              uStack_4 = uStack_4 + bVar3;
            } while (uStack_4 < param_5);
            if (param_5 < uStack_4) break;
            if (param_4 <= local_8) {
              return 0;
            }
          }
          return 0;
        }
        if ((param_5 == 0) && (param_4 == 0)) {
          return 0;
        }
        while( true ) {
          do {
            param_2[local_8 * 2 + 1] = (uint)(fVar4 * (float)param_3[local_8 * 2 + 1]);
            bVar3 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar3;
          } while (uStack_4 < param_5);
          if (param_5 < uStack_4) break;
          if (param_4 <= local_8) {
            return 0;
          }
        }
        return 0;
      }
      fVar4 = DAT_0050c314 - fVar4;
      if (param_2 != param_3) {
        if ((param_5 == 0) && (param_4 == 0)) {
          return 0;
        }
        while( true ) {
          do {
            param_2[local_8 * 2] = (uint)(fVar4 * (float)param_3[local_8 * 2]);
            param_2[local_8 * 2 + 1] = param_3[local_8 * 2 + 1];
            bVar3 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar3;
          } while (uStack_4 < param_5);
          if (param_5 < uStack_4) break;
          if (param_4 <= local_8) {
            return 0;
          }
        }
        return 0;
      }
      if ((param_5 == 0) && (param_4 == 0)) {
        return 0;
      }
      while( true ) {
        do {
          param_2[local_8 * 2] = (uint)(fVar4 * (float)param_3[local_8 * 2]);
          bVar3 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar3;
        } while (uStack_4 < param_5);
        if (param_5 < uStack_4) break;
        if (param_4 <= local_8) {
          return 0;
        }
      }
      return 0;
    }
  }
  else {
    if (fVar4 == 0.0) goto LAB_004292e4;
    if (iVar6 == 5) {
      local_8 = 0;
      uStack_4 = 0;
      if (fVar4 <= 0.0) {
        fVar5 = fVar4 + DAT_0050c314;
        if ((param_5 == 0) && (param_4 == 0)) {
          return 0;
        }
        while( true ) {
          do {
            fVar1 = (float)param_3[local_8 * 2 + 1];
            param_2[local_8 * 2] = (uint)(fVar1 * (0.0 - fVar4) + (float)param_3[local_8 * 2]);
            param_2[local_8 * 2 + 1] = (uint)(fVar1 * fVar5);
            bVar3 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar3;
          } while (uStack_4 < param_5);
          if (param_5 < uStack_4) break;
          if (param_4 <= local_8) {
            return 0;
          }
        }
        return 0;
      }
      fVar5 = DAT_0050c314 - fVar4;
      if ((param_5 == 0) && (param_4 == 0)) {
        return 0;
      }
      while( true ) {
        do {
          fVar1 = (float)param_3[local_8 * 2];
          fVar2 = (float)param_3[local_8 * 2 + 1];
          param_2[local_8 * 2] = (uint)(fVar1 * fVar5);
          param_2[local_8 * 2 + 1] = (uint)(fVar1 * (fVar4 + 0.0) + fVar2);
          bVar3 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          uStack_4 = uStack_4 + bVar3;
        } while (uStack_4 < param_5);
        if (param_5 < uStack_4) break;
        if (param_4 <= local_8) {
          return 0;
        }
      }
      return 0;
    }
  }
  iVar7 = 2;
LAB_00429570:
  FUN_00431ec0(param_2,param_3,param_4,param_5,iVar6,iVar7);
  return 0;
}


