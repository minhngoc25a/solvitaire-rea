// Function: FUN_004dbd70
// Entry: 004dbd70
// Size: 183 bytes
// Thunk: false
// External: false


int __cdecl FUN_004dbd70(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint local_100 [64];
  
  while( true ) {
    puVar1 = FUN_004810c0(param_2,'/');
    if (puVar1 == (uint *)0x0) {
      puVar1 = param_2;
      do {
        uVar2 = *puVar1;
        puVar1 = (uint *)((int)puVar1 + 1);
      } while ((char)uVar2 != '\0');
      uVar2 = (int)puVar1 - ((int)param_2 + 1);
      if (uVar2 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = (int)puVar1 - (int)param_2;
    }
    if (uVar2 < 0x100) {
      FUN_0044c490(local_100,param_2,uVar2);
      *(undefined1 *)((int)local_100 + uVar2) = 0;
      if (uVar2 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
    param_2 = (uint *)((int)param_2 + uVar2);
    if ((char)*param_2 == '/') {
      param_2 = (uint *)((int)param_2 + 1);
    }
    param_1 = FUN_0049da00((int *)(param_1 + 0x20),local_100);
    if ((param_1 == 0) || ((char)*param_2 == '\0')) break;
    if ((*(byte *)(param_1 + 0x88) & 2) == 0) {
      return 0;
    }
  }
  return param_1;
}


