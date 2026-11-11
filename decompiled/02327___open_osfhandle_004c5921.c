// Function: __open_osfhandle
// Entry: 004c5921
// Size: 235 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __open_osfhandle
   
   Library: Visual Studio 2019 Release */

int __cdecl __open_osfhandle(intptr_t _OSFileHandle,int _Flags)

{
  byte *pbVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  int iVar5;
  int iVar6;
  byte bVar7;
  void *local_14;
  
  bVar7 = ((byte)_Flags & 8) << 2;
  if ((_Flags & 0x4000U) != 0) {
    bVar7 = bVar7 | 0x80;
  }
  if ((_Flags & 0x80U) != 0) {
    bVar7 = bVar7 | 0x10;
  }
  DVar2 = GetFileType((HANDLE)_OSFileHandle);
  if (DVar2 == 0) {
    DVar2 = GetLastError();
    ___acrt_errno_map_os_error(DVar2);
  }
  else {
    if (DVar2 == 2) {
      bVar7 = bVar7 | 0x40;
    }
    else if (DVar2 == 3) {
      bVar7 = bVar7 | 8;
    }
    uVar3 = __alloc_osfhnd();
    if (uVar3 != 0xffffffff) {
      FUN_004c5bf5(uVar3,(HANDLE)_OSFileHandle);
      iVar6 = (int)uVar3 >> 6;
      iVar5 = (uVar3 & 0x3f) * 0x38;
      *(byte *)(iVar5 + 0x28 + (&DAT_00544378)[iVar6]) = bVar7 | 1;
      *(undefined1 *)(iVar5 + 0x29 + (&DAT_00544378)[iVar6]) = 0;
      pbVar1 = (byte *)(iVar5 + 0x2d + (&DAT_00544378)[iVar6]);
      *pbVar1 = *pbVar1 & 0xfe;
      FUN_004c5a12();
      ExceptionList = local_14;
      return uVar3;
    }
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x18;
    p_Var4 = FUN_00424721();
    *(undefined4 *)p_Var4 = 0;
  }
  ExceptionList = local_14;
  return -1;
}


