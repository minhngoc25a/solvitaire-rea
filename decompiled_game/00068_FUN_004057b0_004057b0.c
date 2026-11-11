// Function: FUN_004057b0
// Entry: 004057b0
// Size: 97 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_004057b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EAX;
  void *pvVar4;
  
  pvVar4 = realloc(*(void **)(param_2 + 8),(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) * 4 + 8
                  );
  if (pvVar4 != (void *)0x0) {
    iVar2 = *(int *)(param_2 + 4);
    *(void **)(param_2 + 8) = pvVar4;
    iVar3 = *(int *)(param_2 + 0xc);
    iVar1 = iVar2 + 1;
    *(int *)(param_2 + 4) = iVar1;
    *(undefined4 *)((int)pvVar4 + (iVar2 + iVar3) * 4) = in_EAX;
    *(undefined4 *)(*(int *)(param_2 + 8) + (iVar3 + iVar1) * 4) = 0;
    return 0;
  }
  return 1;
}


