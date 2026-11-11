// Function: FUN_0045d790
// Entry: 0045d790
// Size: 382 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0045d890) */

longlong __cdecl FUN_0045d790(char *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint uVar2;
  int unaff_EBX;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = (int)param_3 >> 0x1f;
  local_14 = 0xffffffff;
  local_10 = 0x7fffffff;
  lVar5 = __alldvrm(0xffffffff,0x7fffffff,param_3,uVar2);
  iVar4 = param_2;
  for (; (iVar4 != 0 && ((*param_1 == ' ' || (*param_1 == '\t')))); param_1 = param_1 + 1) {
    iVar4 = iVar4 + -1;
  }
  param_2 = 1;
  local_1c = extraout_ECX;
  if ((iVar4 != 0) && (*param_1 == '-')) {
    param_2 = -1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + -1;
    local_14 = 0;
    local_10 = 0x80000000;
    uVar6 = __alldvrm(0,0x80000000,param_3,uVar2);
    lVar5 = CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
    local_1c = -extraout_ECX_00;
    unaff_EBX = -(unaff_EBX + (uint)(extraout_ECX_00 != 0));
  }
  if ((iVar4 == 0) || (uVar3 = (int)*param_1 - 0x30, (int)uVar3 < 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      if (((int)param_3 <= (int)uVar3) || (iVar4 == 0)) break;
      if ((lVar5 < lVar7) ||
         ((lVar7 == lVar5 &&
          ((unaff_EBX < (int)uVar3 >> 0x1f ||
           ((unaff_EBX <= (int)uVar3 >> 0x1f && (local_1c <= uVar3)))))))) {
        return CONCAT44(local_10,local_14);
      }
      lVar7 = __allmul(param_3,uVar2,(uint)lVar7,(int)((ulonglong)lVar7 >> 0x20));
      pcVar1 = param_1 + 1;
      lVar7 = lVar7 + (int)uVar3;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
      uVar3 = (int)*pcVar1 - 0x30;
    } while (-1 < (int)uVar3);
  }
  if (param_2 < 0) {
    lVar7 = CONCAT44(-((int)((ulonglong)lVar7 >> 0x20) + (uint)((int)lVar7 != 0)),-(int)lVar7);
  }
  return lVar7;
}


