// Function: FUN_0049d160
// Entry: 0049d160
// Size: 207 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049d160(uint *param_1,uint param_2,int param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  
  lVar1 = ((ulonglong)param_1[2] / (ulonglong)param_4) * (ulonglong)param_2;
  uVar2 = (uint)lVar1;
  uVar6 = *param_1;
  uVar7 = uVar2 + *param_1;
  *param_1 = uVar7;
  uVar2 = (int)((ulonglong)lVar1 >> 0x20) + param_1[1] + (uint)CARRY4(uVar2,uVar6);
  uVar6 = (int)((ulonglong)param_1[2] / (ulonglong)param_4) * param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  if (uVar6 < 0x1000000) {
    uVar3 = param_1[4];
    uVar4 = param_1[5];
    do {
      param_1[2] = uVar6 << 8;
      if ((uVar7 < 0xff000000) || (uVar2 != 0)) {
        cVar5 = (char)param_1[3];
        do {
          uVar6 = param_1[6];
          uVar9 = __aullshr(0x20,param_1[1]);
          (**(code **)(uVar6 + 4))(uVar6,(char)uVar9 + cVar5);
          uVar6 = param_1[4];
          cVar5 = -1;
          uVar3 = uVar6 - 1;
          param_1[4] = uVar3;
          uVar4 = (param_1[5] - 1) + (uint)(uVar6 != 0);
          param_1[5] = uVar4;
        } while (uVar3 != 0 || uVar4 != 0);
        uVar7 = *param_1;
        *(char *)(param_1 + 3) = (char)(uVar7 >> 0x18);
      }
      bVar8 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      param_1[4] = uVar3;
      uVar4 = uVar4 + bVar8;
      uVar7 = uVar7 << 8;
      uVar2 = 0;
      param_1[5] = uVar4;
      param_1[1] = 0;
      *param_1 = uVar7;
      uVar6 = param_1[2];
    } while (uVar6 < 0x1000000);
  }
  return;
}


