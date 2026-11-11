// Function: FUN_0047c610
// Entry: 0047c610
// Size: 87 bytes
// Thunk: false
// External: false


bool __cdecl FUN_0047c610(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  
  puVar2 = param_3;
  puVar1 = param_1;
  if ((HANDLE)*param_1 == (HANDLE)0x0) {
    FUN_0044c490((uint *)(param_1[1] + param_1[2]),param_2,(uint)param_3);
    puVar1[2] = puVar1[2] + (int)puVar2;
    return true;
  }
  BVar3 = WriteFile((HANDLE)*param_1,param_2,(DWORD)param_3,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar3 != 0) {
    return param_1 == puVar2;
  }
  return false;
}


