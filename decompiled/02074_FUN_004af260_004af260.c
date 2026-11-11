// Function: FUN_004af260
// Entry: 004af260
// Size: 369 bytes
// Thunk: false
// External: false


void __cdecl FUN_004af260(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *_Dst;
  int *piVar8;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x74);
  param_1[0x68] = puVar3;
  *puVar3 = &LAB_004afec0;
  puVar3[2] = &LAB_004afee0;
  puVar3[0x1c] = 0;
  if (param_2 == '\0') {
    _Dst = (void *)(**(code **)(param_1[1] + 4))(param_1,1,0x500);
    puVar3[8] = _Dst;
    puVar3[0xd] = (int)_Dst + 0x280;
    puVar3[9] = (int)_Dst + 0x80;
    puVar3[0xe] = (int)_Dst + 0x300;
    puVar3[10] = (int)_Dst + 0x100;
    puVar3[0xf] = (int)_Dst + 0x380;
    puVar3[0xb] = (int)_Dst + 0x180;
    puVar3[0x10] = (int)_Dst + 0x400;
    puVar3[0xc] = (int)_Dst + 0x200;
    puVar3[0x11] = (int)_Dst + 0x480;
    if (param_1[100] == 0) {
      _memset(_Dst,0,0x500);
    }
    puVar3[1] = FUN_0042ebe0;
    puVar3[3] = &LAB_004af3e0;
    puVar3[4] = 0;
    return;
  }
  _param_2 = 0;
  if (0 < (int)param_1[9]) {
    piVar8 = (int *)(param_1[0x31] + 0x20);
    param_1 = puVar3 + 0x12;
    do {
      iVar5 = piVar8[-5];
      iVar4 = iVar5;
      if (*(char *)((int)puVar2 + 0xc9) != '\0') {
        iVar4 = iVar5 * 3;
      }
      iVar1 = puVar2[1];
      iVar5 = FUN_004b7750(*piVar8,iVar5);
      iVar6 = FUN_004b7750(piVar8[-1],piVar8[-6]);
      uVar7 = (**(code **)(iVar1 + 0x14))(puVar2,1,1,iVar6,iVar5,iVar4);
      piVar8 = piVar8 + 0x16;
      _param_2 = _param_2 + 1;
      *param_1 = uVar7;
      param_1 = param_1 + 1;
    } while (_param_2 < (int)puVar2[9]);
  }
  puVar3[1] = &LAB_004b0060;
  puVar3[3] = &LAB_004af690;
  puVar3[4] = puVar3 + 0x12;
  return;
}


