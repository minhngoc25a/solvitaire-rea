// Function: FUN_00406a30
// Entry: 00406a30
// Size: 109 bytes
// Thunk: false
// External: false


void __cdecl FUN_00406a30(int param_1,int param_2,char *param_3,undefined1 (*param_4) [10])

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    uVar1 = FUN_00408000(0,param_1,uVar2,param_3,param_4);
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
    return;
  }
  FUN_00408000(0,param_1,0,param_3,param_4);
  return;
}


