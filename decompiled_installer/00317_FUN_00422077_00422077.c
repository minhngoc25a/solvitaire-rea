// Function: FUN_00422077
// Entry: 00422077
// Size: 121 bytes
// Thunk: false
// External: false


undefined4 FUN_00422077(int param_1,int param_2)

{
  int *_Dst;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  _Dst = (int *)FUN_00423ccb(DAT_00543558);
  iVar2 = 0;
  _memset(_Dst,0,0x54);
  _Dst[5] = 1;
  _Dst[3] = param_1;
  _Dst[4] = param_2;
  _Dst[0x13] = 1;
  _Dst[0x14] = 0;
  if (0 < DAT_005434c8) {
    do {
      piVar3 = _Dst + 10;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      iVar1 = (**(code **)(&DAT_005434e0)[iVar2])(_Dst);
      if (iVar1 != 0) {
        iVar2 = (&DAT_005434e0)[iVar2];
        *_Dst = iVar2;
        return *(undefined4 *)(iVar2 + 0xc);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005434c8);
  }
  return 0;
}


