// Function: FUN_00460d94
// Entry: 00460d94
// Size: 105 bytes
// Thunk: false
// External: false


undefined4 * FUN_00460d94(int param_1,LPCWSTR param_2,undefined *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  if ((param_2 != (LPCWSTR)0x0) && (*param_2 != L'\0')) {
    DeleteFileW(param_2);
    puVar1 = FUN_00494510();
    (*(code *)param_3)(puVar1,param_4);
    iVar2 = FUN_0049a990(puVar1,(uint *)param_2);
    if (iVar2 == 0) {
      puVar3 = HeapAlloc(DAT_00542264,8,0x2c);
      puVar3[7] = 0;
      *puVar3 = puVar1;
      puVar3[4] = 1;
      puVar3[10] = param_1;
      *(undefined4 **)(param_1 + 4) = puVar3;
    }
  }
  return puVar3;
}


