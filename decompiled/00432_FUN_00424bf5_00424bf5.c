// Function: FUN_00424bf5
// Entry: 00424bf5
// Size: 310 bytes
// Thunk: false
// External: false


undefined1 __fastcall FUN_00424bf5(undefined4 *param_1)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *local_8;
  
  **(undefined4 **)*param_1 = 0;
  **(undefined4 **)param_1[1] = 0;
  uVar10 = DAT_00544578;
  uVar11 = DAT_00544578;
  while ((uVar10 != 0 &&
         (uVar11 = uVar11 - 1,
         *(char *)((&DAT_00544378)[uVar11 >> 6] + 0x28 + (uVar11 & 0x3f) * 0x38) != '\0'))) {
    uVar10 = uVar10 - 1;
  }
  if (uVar10 < 0x3332) {
    uVar11 = uVar10 * 5 + 4 & 0xffff;
    puVar3 = __calloc_base(uVar11,1);
    if (puVar3 == (uint *)0x0) {
      p_Var2 = FUN_0042470e();
      uVar8 = 0;
      *(undefined4 *)p_Var2 = 0xc;
    }
    else {
      puVar12 = puVar3 + 1;
      *puVar3 = uVar10;
      local_8 = (undefined4 *)((int)puVar12 + uVar10);
      uVar7 = 0;
      puVar9 = local_8;
      if (uVar10 != 0) {
        do {
          iVar4 = (uVar7 & 0x3f) * 0x38 + (&DAT_00544378)[uVar7 >> 6];
          bVar1 = *(byte *)(iVar4 + 0x28);
          if ((bVar1 & 0x10) == 0) {
            *(byte *)((int)puVar12 + uVar7) = bVar1;
            uVar5 = *(undefined4 *)(iVar4 + 0x18);
          }
          else {
            *(undefined1 *)((int)puVar12 + uVar7) = 0;
            uVar5 = 0xffffffff;
          }
          *puVar9 = uVar5;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar7 != uVar10);
      }
      if (*(char *)param_1[2] == '\0') {
        uVar7 = 0;
        while( true ) {
          uVar6 = uVar10;
          if (2 < uVar10) {
            uVar6 = 3;
          }
          if (uVar7 == uVar6) break;
          *(undefined1 *)puVar12 = 0;
          *local_8 = 0xffffffff;
          uVar7 = uVar7 + 1;
          puVar12 = (uint *)((int)puVar12 + 1);
          local_8 = local_8 + 1;
        }
      }
      **(undefined4 **)*param_1 = puVar3;
      uVar8 = 1;
      **(uint **)param_1[1] = uVar11;
    }
    FUN_004247be((LPVOID)0x0);
  }
  else {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0xc;
    uVar8 = 0;
  }
  return uVar8;
}


