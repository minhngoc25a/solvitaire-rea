// Function: FUN_0044b710
// Entry: 0044b710
// Size: 207 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0044b710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined *param_5,undefined4 param_6)

{
  undefined4 *lpParameter;
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HANDLE hObject;
  undefined **local_4;
  
  FUN_0042ebe0();
  lpParameter = param_1;
  local_4 = &PTR_LAB_005405fc;
  iVar2 = FUN_0042ebf0(&local_4,param_1);
  if (iVar2 == 0) {
    lpParameter[0x13] = 0;
    lpParameter[0x12] = 0;
    uVar3 = FUN_00482949(0x80000);
    lpParameter[0xe] = uVar3;
    uVar4 = FUN_00482949(0x80000);
    uVar3 = param_6;
    puVar1 = param_5;
    lpParameter[0xf] = uVar4;
    lpParameter[0x15] = param_2;
    lpParameter[0x16] = param_3;
    lpParameter[0x14] = 1;
    lpParameter[0x17] = param_4;
    lpParameter[0x19] = param_5;
    lpParameter[0x1a] = param_6;
    uVar4 = (*(code *)param_5)(lpParameter[0xe],0x80000,param_6);
    lpParameter[0x10] = uVar4;
    uVar3 = (*(code *)puVar1)(lpParameter[0xf],0x80000,uVar3);
    lpParameter[0x11] = uVar3;
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x2000,(LPTHREAD_START_ROUTINE)&LAB_0044b820,
                           lpParameter,0,(LPDWORD)&param_1);
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
      lpParameter[0x18] = 1;
      return 1;
    }
  }
  return 0;
}


