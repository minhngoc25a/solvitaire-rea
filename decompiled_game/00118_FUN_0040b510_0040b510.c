// Function: FUN_0040b510
// Entry: 0040b510
// Size: 323 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_0040b510(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_28;
  uint local_24;
  
  local_28 = param_1;
  local_24 = param_2;
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar6 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar6 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                    (ulonglong)param_3);
    }
    return (ulonglong)uVar6;
  }
  if (param_2 < param_4) {
    return CONCAT44(param_2,param_1);
  }
  uVar6 = 0x1f;
  if (param_4 != 0) {
    for (; param_4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  if ((uVar6 ^ 0x1f) != 0) {
    bVar3 = (byte)(uVar6 ^ 0x1f);
    bVar5 = 0x20 - bVar3;
    uVar4 = param_3 << (bVar3 & 0x1f);
    uVar6 = param_3 >> (bVar5 & 0x1f) | param_4 << (bVar3 & 0x1f);
    uVar1 = CONCAT44(param_2 >> (bVar5 & 0x1f),param_1 >> (bVar5 & 0x1f) | param_2 << (bVar3 & 0x1f)
                    );
    uVar7 = (uint)(uVar1 % (ulonglong)uVar6);
    uVar9 = param_1 << (bVar3 & 0x1f);
    lVar2 = (uVar1 / uVar6 & 0xffffffff) * (ulonglong)uVar4;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((uVar7 < uVar8) || ((uVar9 < (uint)lVar2 && (uVar7 == uVar8)))) {
      lVar2 = lVar2 - CONCAT44(uVar6,uVar4);
    }
    uVar6 = (uVar7 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(uVar9 < (uint)lVar2);
    return CONCAT44(uVar6 >> (bVar3 & 0x1f),
                    uVar9 - (uint)lVar2 >> (bVar3 & 0x1f) | uVar6 << (bVar5 & 0x1f));
  }
  if ((param_3 <= param_1) || (param_4 < param_2)) {
    local_28 = param_1 - param_3;
    local_24 = (param_2 - param_4) - (uint)(param_1 < param_3);
  }
  return CONCAT44(local_24,local_28);
}


