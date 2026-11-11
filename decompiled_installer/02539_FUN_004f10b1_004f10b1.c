// Function: FUN_004f10b1
// Entry: 004f10b1
// Size: 259 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __cdecl FUN_004f10b1(char *param_1,uint *param_2,uint param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *local_14;
  
  if (param_1 == (char *)0xfffffffe) {
    *(undefined1 *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_00544578 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = ((uint)param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        ___acrt_lowio_lock_fh((uint)param_1);
        iVar3 = -1;
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_00544378)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_4 + 7) = 1;
          param_4[6] = 9;
          *(undefined1 *)(param_4 + 9) = 1;
          param_4[8] = 0;
        }
        else {
          iVar3 = FUN_004f0e95(param_1,param_2,param_3,param_4);
        }
        FUN_004f11ba();
        ExceptionList = local_14;
        return iVar3;
      }
    }
    *(undefined1 *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 9;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  ExceptionList = local_14;
  return -1;
}


