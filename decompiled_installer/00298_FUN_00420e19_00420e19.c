// Function: FUN_00420e19
// Entry: 00420e19
// Size: 151 bytes
// Thunk: false
// External: false


HBITMAP FUN_00420e19(int *param_1,int param_2,int param_3,int param_4)

{
  HBITMAP ho;
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  HBITMAP pHVar4;
  int iVar5;
  
  pHVar4 = (HBITMAP)0x0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_005434a8,param_1);
  if (((puVar1 != (undefined4 *)0x0) && (DVar2 = GetObjectType((HGDIOBJ)*puVar1), DVar2 == 7)) &&
     (puVar1[4] == 1)) {
    ho = (HBITMAP)*puVar1;
    iVar3 = (int)*(short *)(puVar1 + 1);
    iVar5 = (int)*(short *)((int)puVar1 + 6);
    if (param_2 == -0xffff) {
      param_2 = iVar3;
    }
    if (param_3 == -0xffff) {
      param_3 = iVar5;
    }
    if (((param_2 != iVar3) || (pHVar4 = ho, param_3 != iVar5)) &&
       (pHVar4 = FUN_0047baee(ho,iVar3,iVar5,param_2,param_3,(int)*(char *)(puVar1 + 2),param_4),
       pHVar4 != (HBITMAP)0x0)) {
      *puVar1 = pHVar4;
      *(short *)(puVar1 + 1) = (short)param_2;
      *(short *)((int)puVar1 + 6) = (short)param_3;
      DeleteObject(ho);
    }
  }
  return pHVar4;
}


