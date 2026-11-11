// Function: FUN_004c5048
// Entry: 004c5048
// Size: 44 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004c5048(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = (code *)FUN_004c5083();
  if (pcVar1 == (code *)0x0) {
    bVar3 = false;
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)(param_1);
    iVar2 = (*pcVar1)();
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}


