// Function: FUN_0050430e
// Entry: 0050430e
// Size: 70 bytes
// Thunk: false
// External: false


void __cdecl FUN_0050430e(int param_1,LPCWSTR param_2,LPSTR param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)FUN_004c2925(param_2,0x40,param_1,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = 0x3f;
    puVar4 = puVar1;
    puVar5 = puVar1;
    uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
    FUN_004c42a4(uVar2,(uint)puVar1,param_2,param_4,param_3,iVar3,(uint)puVar4,puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


