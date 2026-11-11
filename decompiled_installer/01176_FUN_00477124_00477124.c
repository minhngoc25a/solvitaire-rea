// Function: FUN_00477124
// Entry: 00477124
// Size: 87 bytes
// Thunk: false
// External: false


void FUN_00477124(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00542fc0);
  puVar2 = DAT_00543980;
  do {
    if (puVar2 == (undefined4 *)0x0) {
LAB_0047716e:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00542fc0);
      return;
    }
    if (puVar2[3] == param_1) {
      piVar1 = puVar2 + 4;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        DeleteObject((HGDIOBJ)puVar2[3]);
        FUN_004257fb((int *)&DAT_00543980,(int)(puVar2 + 2));
      }
      goto LAB_0047716e;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


