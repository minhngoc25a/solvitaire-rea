// Function: FUN_004f071c
// Entry: 004f071c
// Size: 54 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004f071c(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_0053fbc0 & 0x1f;
  pcVar3 = (code *)((DAT_00544ae4 ^ DAT_0053fbc0) >> bVar2 |
                   (DAT_00544ae4 ^ DAT_0053fbc0) << 0x20 - bVar2);
  if (pcVar3 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)(param_1);
    uVar1 = (*pcVar3)();
  }
  return uVar1;
}


