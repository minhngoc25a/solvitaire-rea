// Function: FUN_004b78e0
// Entry: 004b78e0
// Size: 255 bytes
// Thunk: false
// External: false


uint FUN_004b78e0(undefined4 *param_1,byte *param_2)

{
  uint nNumberOfBytesToRead;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  DWORD local_4;
  
  puVar1 = param_1;
  local_4 = 0;
  if (param_1[1] == 0) {
    ReadFile((HANDLE)*param_1,&param_1,1,&local_4,(LPOVERLAPPED)0x0);
  }
  else {
    local_4 = FUN_004781f0(param_1,(uint *)&param_1,1);
  }
  if (local_4 != 1) {
    return 0;
  }
  if (-1 < (char)(byte)param_1) {
    *param_2 = (byte)param_1;
    param_2[1] = 0;
    return 1;
  }
  if (((byte)param_1 & 0xe0) == 0xc0) {
    uVar3 = 2;
  }
  else if (((byte)param_1 & 0xf0) == 0xe0) {
    uVar3 = 3;
  }
  else {
    if (((byte)param_1 & 0xf8) != 0xf0) {
      param_2[0] = 0x3f;
      param_2[1] = 0;
      return 1;
    }
    uVar3 = 4;
  }
  nNumberOfBytesToRead = uVar3 - 1;
  *param_2 = (byte)param_1;
  if (puVar1[1] != 0) {
    uVar2 = FUN_004781f0(puVar1,(uint *)(param_2 + 1),nNumberOfBytesToRead);
    return (uVar2 != nNumberOfBytesToRead) - 1 & uVar3;
  }
  ReadFile((HANDLE)*puVar1,param_2 + 1,nNumberOfBytesToRead,&local_4,(LPOVERLAPPED)0x0);
  return (local_4 != nNumberOfBytesToRead) - 1 & uVar3;
}


