// Function: FUN_0040a050
// Entry: 0040a050
// Size: 367 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0040a050(LPWSTR param_1,byte *param_2,uint param_3,byte *param_4,UINT param_5,uint param_6)

{
  byte TestChar;
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_10;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0xfffffffe;
  }
  local_10 = *(undefined4 *)param_4;
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  TestChar = *param_2;
  if (TestChar == 0) {
    *param_1 = L'\0';
    return 0;
  }
  if (param_6 < 2) {
LAB_0040a100:
    if (param_5 == 0) {
      *param_1 = (ushort)*param_2;
      return 1;
    }
    iVar3 = MultiByteToWideChar(param_5,8,(LPCSTR)param_2,1,param_1,1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  else {
    if ((byte)local_10 == 0) {
      BVar2 = IsDBCSLeadByteEx(param_5,TestChar);
      if (BVar2 == 0) goto LAB_0040a100;
      if (param_3 < 2) {
        *param_4 = *param_2;
        return 0xfffffffe;
      }
    }
    else {
      uVar1 = (uint)local_10 >> 0x10;
      local_10._2_2_ = (undefined2)uVar1;
      local_10._0_2_ = CONCAT11(TestChar,(byte)local_10);
      param_2 = (byte *)&local_10;
    }
    iVar3 = MultiByteToWideChar(param_5,8,(LPCSTR)param_2,2,param_1,1);
    if (iVar3 != 0) {
      return 2;
    }
  }
  piVar4 = _errno();
  *piVar4 = 0x2a;
  return 0xffffffff;
}


