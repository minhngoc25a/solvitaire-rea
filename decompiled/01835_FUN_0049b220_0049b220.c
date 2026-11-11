// Function: FUN_0049b220
// Entry: 0049b220
// Size: 69 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_0049b220(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 local_10;
  undefined1 local_8 [8];
  
  if (((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x24), puVar1 != (undefined4 *)0x0))
     && ((code *)puVar1[9] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[9])(*puVar1,&local_10,local_8,0,0);
    if (iVar2 == 0) {
      return local_10;
    }
  }
  return 0;
}


