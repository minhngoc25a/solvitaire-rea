// Function: FUN_00404be0
// Entry: 00404be0
// Size: 219 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00404c88) */
/* WARNING: Removing unreachable block (ram,0x00404c7a) */
/* WARNING: Removing unreachable block (ram,0x00404c0e) */
/* WARNING: Removing unreachable block (ram,0x00404bff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00404be0(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar5;
  
  uVar5 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar4 = uVar5 ^ 0x200000;
  uVar4 = ((uint)((uVar4 & 0x4000) != 0) * 0x4000 | (uint)((uVar4 & 0x800) != 0) * 0x800 |
           (uint)((uVar4 & 0x200) != 0) * 0x200 | (uint)((uVar4 & 0x100) != 0) * 0x100 |
           (uint)((uVar4 & 0x80) != 0) * 0x80 | (uint)((uVar4 & 0x40) != 0) * 0x40 |
           (uint)((uVar4 & 0x10) != 0) * 0x10 | (uint)((uVar4 & 4) != 0) * 4 |
           (uint)((uVar4 & 1) != 0) | (uint)((uVar4 & 0x200000) != 0) * 0x200000 |
          (uint)((uVar4 & 0x40000) != 0) * 0x40000) ^ uVar5;
  if ((uVar4 & 0x200000) != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    uVar5 = piVar1[2];
    uVar4 = 0;
    if (*piVar1 != 0) {
      iVar2 = cpuid_Version_info(1);
      uVar4 = *(uint *)(iVar2 + 8);
      if ((uVar4 & 0x100) != 0) {
        _DAT_0041003c = _DAT_0041003c | 1;
      }
      if ((uVar4 & 0x8000) != 0) {
        _DAT_0041003c = _DAT_0041003c | 2;
      }
      if ((uVar4 & 0x800000) != 0) {
        _DAT_0041003c = _DAT_0041003c | 4;
      }
      if ((uVar4 & 0x1000000) != 0) {
        _DAT_0041003c = _DAT_0041003c | 8;
      }
      if ((uVar4 & 0x2000000) != 0) {
        _DAT_0041003c = _DAT_0041003c | 0x10;
      }
      if ((uVar4 & 0x4000000) != 0) {
        _DAT_0041003c = _DAT_0041003c | 0x20;
      }
      if ((*(uint *)(iVar2 + 0xc) & 1) != 0) {
        _DAT_0041003c = _DAT_0041003c | 0x40;
      }
      if ((*(uint *)(iVar2 + 0xc) & 0x2000) != 0) {
        _DAT_0041003c = _DAT_0041003c | 0x80;
      }
      puVar3 = (uint *)cpuid(0x80000000);
      uVar4 = *puVar3;
      uVar5 = puVar3[2];
      if (0x80000000 < uVar4) {
        puVar3 = (uint *)cpuid(0x80000001);
        uVar4 = *puVar3;
        if ((int)puVar3[2] < 0) {
          _DAT_0041003c = _DAT_0041003c | 0x100;
        }
        uVar5 = puVar3[2] & 0x40000000;
        if (uVar5 != 0) {
          _DAT_0041003c = _DAT_0041003c | 0x200;
        }
      }
    }
  }
  return CONCAT44(uVar5,uVar4);
}


