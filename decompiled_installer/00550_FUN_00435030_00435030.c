// Function: FUN_00435030
// Entry: 00435030
// Size: 222 bytes
// Thunk: false
// External: false


void __cdecl FUN_00435030(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x278) = param_2;
    UNLOCK();
    if (*(int *)(param_1 + 0x108) == 0) {
      if ((param_1 != -0x1a0) && (param_1 != -0x21c)) {
        *(undefined4 *)(param_1 + 0x228) = param_2;
        return;
      }
    }
    else {
      puVar2 = (uint *)(param_1 + 600);
      if (puVar2 != (uint *)0x0) {
        uVar3 = 0;
        if (*puVar2 != 0) {
          do {
            iVar1 = *(int *)(param_1 + 0x268);
            *(float *)(iVar1 + uVar3 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x26c) + uVar3 * 4) - *(float *)(iVar1 + uVar3 * 4))
                 * ((float)((double)*(int *)(param_1 + 0x260) +
                           (double)(&DAT_0050c3d0)[-(*(int *)(param_1 + 0x260) >> 0x1f)]) /
                   (float)((double)*(int *)(param_1 + 0x25c) +
                          (double)(&DAT_0050c3d0)[-(*(int *)(param_1 + 0x25c) >> 0x1f)])) +
                 *(float *)(iVar1 + uVar3 * 4);
            *(undefined4 *)(*(int *)(param_1 + 0x26c) + uVar3 * 4) = param_2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *puVar2);
        }
        if (*(int *)(param_1 + 0x260) == -1) {
          *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x25c);
          return;
        }
        *(undefined4 *)(param_1 + 0x260) = 0;
      }
    }
  }
  return;
}


