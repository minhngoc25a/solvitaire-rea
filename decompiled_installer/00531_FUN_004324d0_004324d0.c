// Function: FUN_004324d0
// Entry: 004324d0
// Size: 183 bytes
// Thunk: false
// External: false


void __cdecl FUN_004324d0(uint param_1,int param_2,uint param_3,uint param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint local_8;
  
  uVar2 = param_1;
  if (((param_1 != 0) && (param_2 != 0)) && ((param_4 != 0 || (param_3 != 0)))) {
    local_8 = 0;
    param_1 = 0;
    do {
      do {
        iVar1 = local_8 * 3;
        iVar3 = (int)((float)(int)((uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 2 + param_2),
                                                           *(undefined1 *)(iVar1 + 1 + param_2)),
                                                  *(undefined1 *)(iVar1 + param_2)) << 8) * param_5)
        ;
        *(char *)(iVar1 + uVar2) = (char)((uint)iVar3 >> 8);
        bVar4 = 0xfffffffe < local_8;
        local_8 = local_8 + 1;
        *(char *)(iVar1 + 1 + uVar2) = (char)((uint)iVar3 >> 0x10);
        param_1 = param_1 + bVar4;
        *(char *)(iVar1 + 2 + uVar2) = (char)((uint)iVar3 >> 0x18);
      } while (param_1 < param_4);
    } while ((param_1 <= param_4) && (local_8 < param_3));
  }
  return;
}


