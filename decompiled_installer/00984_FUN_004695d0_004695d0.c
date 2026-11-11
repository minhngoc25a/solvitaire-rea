// Function: FUN_004695d0
// Entry: 004695d0
// Size: 64 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004695d0(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00469610(param_1);
  iVar2 = 0;
  if (0 < param_1[5]) {
    do {
      iVar1 = _strcmp(param_2,(char *)(*(int *)(param_1[3] + iVar2 * 4) + 0x18));
      if (iVar1 == 0) {
        return *(undefined4 *)(param_1[3] + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[5]);
  }
  return 0;
}


