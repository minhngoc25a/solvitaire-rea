// Function: FUN_00484190
// Entry: 00484190
// Size: 813 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x004841bf) */
/* WARNING: Removing unreachable block (ram,0x004841fb) */
/* WARNING: Removing unreachable block (ram,0x004842d9) */
/* WARNING: Removing unreachable block (ram,0x004842ae) */
/* WARNING: Removing unreachable block (ram,0x00484272) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00484190(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  DAT_00544988 = 0;
  DAT_005407a8 = DAT_005407a8 | 1;
  BVar6 = IsProcessorFeaturePresent(10);
  uVar7 = DAT_005407a0;
  uVar8 = DAT_005407a8;
  if (BVar6 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar9 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      _DAT_0054498c = _DAT_0054498c | 1;
    }
    uVar10 = 0;
    local_18 = 0;
    uVar11 = 0;
    local_1c = 0;
    if (6 < *piVar1) {
      piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar10 = piVar3[1];
      local_18 = piVar3[2];
      if ((uVar10 & 0x200) != 0) {
        _DAT_0054498c = _DAT_0054498c | 2;
      }
      if (0 < *piVar3) {
        iVar4 = cpuid_Extended_Feature_Enumeration_info(7);
        local_1c = *(uint *)(iVar4 + 8);
      }
      if (0x23 < *piVar1) {
        iVar4 = cpuid(0x24);
        uVar11 = *(uint *)(iVar4 + 4);
      }
    }
    DAT_00544988 = 1;
    uVar7 = DAT_005407a0 & 0xfffffffe;
    uVar8 = DAT_005407a8 | 2;
    if ((uVar9 & 0x100000) != 0) {
      uVar8 = DAT_005407a8 | 6;
      DAT_00544988 = 2;
      uVar7 = DAT_005407a0 & 0xffffffee;
      if (((uVar9 & 0x8000000) != 0) && ((uVar9 & 0x10000000) != 0)) {
        uVar5 = xinuse(0);
        local_14 = in_XCR0 & (uint)uVar5;
        if ((local_14 & 6) == 6) {
          DAT_00544988 = 3;
          uVar8 = DAT_005407a8 | 0xe;
          if ((uVar10 & 0x20) != 0) {
            DAT_00544988 = 5;
            uVar7 = DAT_005407a0 & 0xffffffec;
            uVar8 = DAT_005407a8 | 0x2e;
            if (((uVar10 & 0xd0030000) == 0xd0030000) && ((local_14 & 0xe0) == 0xe0)) {
              DAT_005407a8 = DAT_005407a8 | 0x6e;
              DAT_00544988 = 6;
              uVar7 = DAT_005407a0 & 0xffffffc8;
              uVar8 = DAT_005407a8;
            }
          }
          DAT_005407a8 = uVar8;
          DAT_005407a0 = uVar7;
          if ((local_18 & 0x800000) != 0) {
            DAT_005407a0 = DAT_005407a0 & 0xfeffffff;
          }
          uVar7 = DAT_005407a0;
          uVar8 = DAT_005407a8;
          if (((local_1c & 0x80000) != 0) && ((local_14 & 0xe0) == 0xe0)) {
            _DAT_00544984 = uVar11 & 0x400ff;
            uVar7 = ~(uVar11 >> 0x10 & 7 | 0x1000028) & DAT_005407a0;
            if (1 < _DAT_00544984) {
              uVar7 = uVar7 & 0xffffffbf;
            }
          }
        }
      }
    }
  }
  DAT_005407a8 = uVar8;
  DAT_005407a0 = uVar7;
  return 0;
}


