// Function: FUN_0048476e
// Entry: 0048476e
// Size: 307 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0048476e(LPWSTR param_1,byte *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_00544990 = 0;
    _DAT_00544994 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_0044ef90(param_4);
      }
      piVar1 = (int *)param_4[3];
      uVar2 = piVar1[2];
      if (uVar2 == 0xfde9) {
        uVar2 = FUN_004c7017(param_1,param_2,param_3,(uint *)&DAT_00544990,(int)param_4);
        if (-1 < (int)uVar2) {
          return uVar2;
        }
      }
      else {
        if (piVar1[0x2a] == 0) {
          if (param_1 != (LPWSTR)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*piVar1 + (uint)*param_2 * 2) < 0) {
          iVar3 = *(int *)(param_4[3] + 4);
          if ((((1 < iVar3) && (iVar3 <= (int)param_3)) &&
              (iVar3 = FUN_0048139c(uVar2,9,(LPCSTR)param_2,iVar3,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
             ((*(uint *)(param_4[3] + 4) <= param_3 && (param_2[1] != 0)))) {
            return *(uint *)(param_4[3] + 4);
          }
        }
        else {
          iVar3 = FUN_0048139c(uVar2,9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0));
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 7) = 1;
        param_4[6] = 0x2a;
      }
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


