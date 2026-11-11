// Function: FUN_004355b0
// Entry: 004355b0
// Size: 194 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00435652) */

ulonglong __cdecl FUN_004355b0(uint param_1,uint param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != 0 || param_4 != 0)) {
    if (param_1 != param_2) {
      lVar4 = __allmul(param_1,0,param_3,param_4);
      uVar5 = __aulldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),param_2,0);
      iVar3 = (int)(uVar5 >> 0x20);
      uVar1 = (ulonglong)param_2 / (ulonglong)param_1;
      uVar2 = (ulonglong)param_2 % (ulonglong)param_1;
      lVar4 = (uVar5 & 0xffffffff) * uVar1;
      lVar6 = __aulldiv((uint)lVar4,iVar3 * (int)uVar1 + (int)((ulonglong)lVar4 >> 0x20),param_1,0);
      lVar4 = (uVar5 & 0xffffffff) * uVar2;
      if ((ulonglong)
          (lVar6 + CONCAT44(iVar3 * (int)uVar2 + (int)((ulonglong)lVar4 >> 0x20),(int)lVar4)) <=
          CONCAT44(param_4,param_3)) {
        uVar5 = uVar5 + 1;
      }
      return uVar5;
    }
    return CONCAT44(param_4,param_3);
  }
  return 0;
}


