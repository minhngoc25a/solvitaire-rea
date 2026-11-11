// Function: FUN_0049e310
// Entry: 0049e310
// Size: 801 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0049e310(undefined4 param_1,int *param_2,int param_3,int param_4,uint *param_5,char *param_6,
            uint *param_7,int param_8,undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  int *piVar6;
  size_t _Size;
  int iVar7;
  uint uVar8;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  uint auStack_40 [16];
  
  piVar1 = (int *)(*(code *)*param_10)(param_10,0x1c938);
  if (piVar1 != (int *)0x0) {
    piVar1[0x1f] = 0;
    piVar1[0x1e] = 0;
    FUN_004ee4c0((int)(piVar1 + 0x36));
    auStack_40[0] = 5;
    auStack_40[9] = 0;
    auStack_40[1] = 0;
    auStack_40[0xc] = 0xffffffff;
    auStack_40[0xd] = 0xffffffff;
    auStack_40[0xb] = 0xffffffff;
    auStack_40[8] = 0xffffffff;
    auStack_40[7] = 0xffffffff;
    auStack_40[6] = 0xffffffff;
    auStack_40[5] = 0xffffffff;
    auStack_40[4] = 0xffffffff;
    auStack_40[3] = 0xffffffff;
    auStack_40[2] = 0xffffffff;
    auStack_40[10] = 0;
    auStack_40[0xe] = 0;
    auStack_40[0xf] = 0;
    FUN_0049e1f0((int)piVar1,auStack_40);
    *(undefined2 *)(piVar1 + 0xaa6) = 0x100;
    uVar8 = 2;
    _Dst = (void *)((int)piVar1 + 0x2a9a);
    do {
      _Size = 1 << ((char)(uVar8 >> 1) - 1U & 0x1f);
      if (_Size != 0) {
        _memset(_Dst,uVar8,_Size);
      }
      uVar8 = uVar8 + 1;
      _Dst = (void *)((int)_Dst + _Size);
    } while (uVar8 < 0x16);
    piVar6 = piVar1 + 0x152;
    uVar8 = 8;
    do {
      iVar5 = 0;
      iVar7 = 4;
      uVar2 = uVar8;
      do {
        iVar5 = iVar5 * 2;
        for (uVar2 = uVar2 * uVar2; 0xffff < uVar2; uVar2 = uVar2 >> 1) {
          iVar5 = iVar5 + 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar8 = uVar8 + 0x10;
      *piVar6 = 0xa1 - iVar5;
      piVar6 = piVar6 + 1;
    } while (uVar8 < 0x808);
    piVar1[0x14] = 0;
    piVar1[0x6ea8] = 0;
    iVar7 = FUN_0049e1f0((int)piVar1,param_5);
    if (iVar7 == 0) {
      if (*param_7 < 5) {
        iVar7 = 5;
      }
      else {
        *param_7 = 5;
        uVar8 = piVar1[0x33];
        *param_6 = ((char)piVar1[0x27] * '\x05' + (char)piVar1[0x26]) * '\t' + (char)piVar1[0x25];
        if (uVar8 < 0x200000) {
          uVar2 = 0x16;
          do {
            uVar3 = uVar2 & 1;
            uVar4 = uVar2 >> 1;
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 2 << ((byte)uVar4 & 0x1f);
          } while (uVar3 < uVar8);
        }
        else {
          uVar3 = uVar8 + 0xfffff & 0xfff00000;
          if (uVar3 < uVar8) {
            uVar3 = uVar8;
          }
        }
        *(uint *)(param_6 + 1) = uVar3;
        uStack_4c = param_1;
        iStack_48 = *param_2;
        piVar1[0x2a] = param_8;
        piVar1[0x1f] = (int)&puStack_50;
        puStack_50 = &LAB_004a1c80;
        iStack_44 = 0;
        *(undefined1 *)((int)piVar1 + 0xf7) = 1;
        piVar1[0x43] = param_3;
        piVar1[0x49] = param_4;
        piVar1[0x2d] = 1;
        piVar1[0x150] = param_4;
        piVar1[0x151] = 0;
        iVar7 = FUN_004a1ac0(piVar1,0,param_10,param_11);
        if (((iVar7 == 0) && (iVar7 = FUN_004a1cc0(piVar1,param_9), iVar7 == 0)) &&
           ((piVar1[0x2e] != param_4 || (piVar1[0x2f] != 0)))) {
          iVar7 = 0xb;
        }
        *param_2 = *param_2 - iStack_48;
        if (iStack_44 != 0) {
          iVar7 = 7;
        }
      }
    }
    FUN_004ee800((int)(piVar1 + 0x36),(int)param_11);
    (*(code *)param_10[1])(param_10,piVar1[0x14]);
    (*(code *)param_10[1])(param_10,piVar1[0x6ea8]);
    piVar1[0x14] = 0;
    piVar1[0x6ea8] = 0;
    (*(code *)param_10[1])(param_10,piVar1[0x1e]);
    piVar1[0x1e] = 0;
    (*(code *)param_10[1])(param_10,piVar1);
    return iVar7;
  }
  return 2;
}


