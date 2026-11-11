// Function: FUN_00474764
// Entry: 00474764
// Size: 427 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00474764(FILE *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint local_1018;
  int local_1014;
  int *local_1010;
  undefined4 local_100c;
  byte local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_1010 = param_4;
  uVar1 = __fileno(param_1);
  if (param_1->_base != (char *)0x0) {
    uVar2 = (int)param_1->_ptr - param_1->_cnt;
    lVar9 = __alldiv(uVar2,(int)uVar2 >> 0x1f,2,0);
    iVar5 = (int)((ulonglong)lVar9 >> 0x20);
    local_100c = (uint)lVar9;
    iVar7 = (uVar1 & 0x3f) * 0x38;
    uVar10 = FUN_0049d501(uVar1,*(undefined4 *)((&DAT_00544378)[(int)uVar1 >> 6] + 0x20 + iVar7),
                          *(undefined4 *)((&DAT_00544378)[(int)uVar1 >> 6] + 0x24 + iVar7),
                          (PLARGE_INTEGER)0x0,local_1010);
    local_1014 = (int)uVar10;
    iVar6 = (&DAT_00544378)[(int)uVar1 >> 6];
    if (((((local_1014 == *(int *)(iVar6 + 0x20 + iVar7)) &&
          ((int)((ulonglong)uVar10 >> 0x20) == *(int *)(iVar6 + 0x24 + iVar7))) &&
         (BVar3 = ReadFile(*(HANDLE *)(iVar6 + 0x18 + iVar7),local_1008,0x1000,&local_1018,
                           (LPOVERLAPPED)0x0), BVar3 != 0)) &&
        ((lVar11 = FUN_0049d501(uVar1,param_2,param_3,(PLARGE_INTEGER)0x0,local_1010), -1 < lVar11
         && (lVar9 < 0x100000000)))) && ((lVar9 < 0 || (local_100c <= local_1018)))) {
      iVar6 = 0;
      pbVar4 = local_1008;
      uVar1 = 0;
      if ((local_100c != 0) || (iVar5 != 0)) {
        do {
          if (local_1008 + local_1018 <= pbVar4) break;
          if (*pbVar4 == 0xd) {
            if ((pbVar4 < local_1008 + (local_1018 - 1)) && (pbVar4[1] == 10)) {
              pbVar4 = pbVar4 + 1;
            }
          }
          else {
            pbVar4 = pbVar4 + (char)(&DAT_00540d30)[*pbVar4];
          }
          bVar8 = 0xfffffffe < uVar1;
          uVar1 = uVar1 + 1;
          iVar6 = iVar6 + (uint)bVar8;
          pbVar4 = pbVar4 + 1;
        } while ((uVar1 != local_100c) || (iVar6 != iVar5));
      }
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


