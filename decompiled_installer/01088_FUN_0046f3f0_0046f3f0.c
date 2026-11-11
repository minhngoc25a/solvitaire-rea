// Function: FUN_0046f3f0
// Entry: 0046f3f0
// Size: 113 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f3f0(LPVOID param_1)

{
  LPVOID pvVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 in_stack_ffffffb8;
  
  if (param_1 != (LPVOID)0x0) {
    pvVar1 = *(LPVOID *)((int)param_1 + 0x44);
    if (((pvVar1 != (LPVOID)0x0) && (*(int *)((int)param_1 + 0x48) != 0)) && (pvVar1 != param_1)) {
      iVar2 = FUN_00474320((undefined4 *)&stack0xffffffb8,0,unaff_ESI,in_stack_ffffffb8);
      if (iVar2 == 0) {
        *(undefined4 *)((int)param_1 + 0x48) = 0;
        *(undefined1 **)((int)param_1 + 0x44) = &stack0xffffffb8;
        *(code **)((int)param_1 + 0x40) = _longjmp;
        FUN_004a48e0((int)param_1,pvVar1);
      }
    }
    *(undefined4 *)((int)param_1 + 0x48) = 0;
    *(undefined4 *)((int)param_1 + 0x44) = 0;
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  return;
}


