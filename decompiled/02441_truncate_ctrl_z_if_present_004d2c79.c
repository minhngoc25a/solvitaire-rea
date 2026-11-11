// Function: truncate_ctrl_z_if_present
// Entry: 004d2c79
// Size: 170 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Library: Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint local_8;
  
  bVar1 = *(byte *)((&DAT_00544378)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x38);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar5 = FUN_0049d4a3(param_1,0xffffffff,0xffffffff,(PLARGE_INTEGER)0x2);
    if (lVar5 == -1) {
      p_Var2 = FUN_00424721();
      if (*(int *)p_Var2 == 0x83) goto LAB_004d2d1c;
    }
    else {
      local_8 = local_8 & 0xffff0000;
      uVar3 = FUN_004a3c8d(param_1,(LPWSTR)&local_8,1);
      if ((uVar3 == 0) && ((WCHAR)local_8 == L'\x1a')) {
        iVar4 = FUN_0050329e((char *)param_1,(int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
        if (iVar4 == -1) goto LAB_004d2cce;
      }
      lVar5 = FUN_0049d4a3(param_1,0,0,(PLARGE_INTEGER)0x0);
      if (lVar5 != -1) goto LAB_004d2d1c;
    }
LAB_004d2cce:
    p_Var2 = FUN_0042470e();
    iVar4 = *(int *)p_Var2;
  }
  else {
LAB_004d2d1c:
    iVar4 = 0;
  }
  return iVar4;
}


