// Function: FUN_0040b400
// Entry: 0040b400
// Size: 256 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_0040b400(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
    }
    if (param_3 == 0) {
      param_3 = 1 / 0;
    }
    uVar6 = param_2 / param_3;
    iVar7 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    if (param_2 < param_4) {
      return 0;
    }
    uVar6 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    if ((uVar6 ^ 0x1f) == 0) {
      uVar6 = 0;
      if ((param_1 < param_3) && (param_2 <= param_4)) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
    }
    else {
      bVar5 = (byte)(uVar6 ^ 0x1f);
      bVar8 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_3 >> (bVar8 & 0x1f) | param_4 << (bVar5 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar8 & 0x1f),
                       param_1 >> (bVar8 & 0x1f) | param_2 << (bVar5 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar7 = (int)uVar3;
      uVar6 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
      uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar6 < uVar9) || ((param_1 << (bVar5 & 0x1f) < (uint)lVar4 && (uVar6 == uVar9)))) {
        return (ulonglong)(iVar7 - 1);
      }
      uVar6 = 0;
    }
  }
  return CONCAT44(uVar6,iVar7);
}


