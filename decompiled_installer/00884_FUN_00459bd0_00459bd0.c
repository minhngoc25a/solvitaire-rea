// Function: FUN_00459bd0
// Entry: 00459bd0
// Size: 724 bytes
// Thunk: false
// External: false


int __cdecl FUN_00459bd0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  iVar4 = 0;
  cVar2 = *(char *)(param_4 + 0x9d);
  *(undefined4 *)(param_2 + 0x28) = 0;
  piVar1 = (int *)(param_2 + 0x24);
  if (cVar2 != '\0') {
    FUN_0048d570(piVar1,(uint *)(param_4 + 0x9d),100);
  }
  lVar5 = FUN_0045cc30((byte *)(param_4 + 100),8);
  FUN_0048c630(param_3,(short)lVar5);
  lVar5 = FUN_0045cc30((byte *)(param_4 + 0x6c),8);
  FUN_0048c8b0(param_3,(int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
  lVar5 = FUN_0045cc30((byte *)(param_4 + 0x74),8);
  FUN_0048c520(param_3,(int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
  lVar5 = FUN_0045cc30((byte *)(param_4 + 0x7c),0xc);
  iVar3 = (int)((ulonglong)lVar5 >> 0x20);
  *(longlong *)(param_2 + 0x90) = lVar5;
  if ((iVar3 != 0 && -1 < lVar5) || (-1 < lVar5)) {
    if (lVar5 != 0x7fffffffffffffff) {
      *(longlong *)(param_2 + 0xb0) = lVar5;
      FUN_0048c7c0(param_3,(int)lVar5,iVar3);
      uVar6 = 0;
      uVar8 = 0;
      lVar5 = FUN_0045cc30((byte *)(param_4 + 0x88),0xc);
      FUN_0048c650(param_3,(uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),CONCAT22(uVar8,uVar6));
      switch(*(undefined1 *)(param_4 + 0x9c)) {
      case 0x30:
      case 0x53:
        *(undefined4 *)(param_2 + 0xb8) = 1;
      default:
        FUN_0048c4b0(param_3,0x8000);
        return 0;
      case 0x31:
        iVar3 = FUN_0048cb50(param_3,(uint *)*piVar1,*(uint *)(param_2 + 0x28),
                             *(DWORD *)(param_2 + 0xf4));
        if ((iVar3 != 0) && (iVar4 = FUN_0045d500(param_1,*(int *)(param_2 + 0xf4)), iVar4 == -0x1e)
           ) {
          return -0x1e;
        }
        lVar5 = FUN_0048c180(param_3);
        if ((-1 < lVar5) && (lVar5 != 0)) {
          FUN_0048c4b0(param_3,0x8000);
        }
        lVar5 = FUN_0048c180(param_3);
        if (lVar5 == 0) {
          return iVar4;
        }
        iVar3 = *(int *)(param_1 + 0xc);
        if (iVar3 == 0x30002) {
          return iVar4;
        }
        if (((iVar3 != 0x30000) && (iVar3 != 0x30004)) &&
           (iVar3 = FUN_0045a540(param_1), iVar3 < 0x33)) {
          return iVar4;
        }
        FUN_0048c7c0(param_3,0,0);
        *(undefined4 *)(param_2 + 0x90) = 0;
        *(undefined4 *)(param_2 + 0x94) = 0;
        return iVar4;
      case 0x32:
        FUN_0048c4b0(param_3,0xa000);
        FUN_0048c7c0(param_3,0,0);
        *(undefined4 *)(param_2 + 0x90) = 0;
        *(undefined4 *)(param_2 + 0x94) = 0;
        iVar4 = FUN_0048cbd0(param_3,(uint *)*piVar1,*(uint *)(param_2 + 0x28),
                             *(DWORD *)(param_2 + 0xf4));
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = FUN_0045d500(param_1,*(int *)(param_2 + 0xf4));
        if (iVar4 != -0x1e) {
          return iVar4;
        }
        return -0x1e;
      case 0x33:
        uVar7 = 0x2000;
        break;
      case 0x34:
        uVar7 = 0x6000;
        break;
      case 0x35:
        uVar7 = 0x4000;
        break;
      case 0x36:
        uVar7 = 0x1000;
        break;
      case 0x44:
        FUN_0048c4b0(param_3,0x4000);
        return 0;
      case 0x4d:
        return 0;
      }
      FUN_0048c4b0(param_3,uVar7);
      FUN_0048c7c0(param_3,0,0);
      *(undefined4 *)(param_2 + 0x90) = 0;
      *(undefined4 *)(param_2 + 0x94) = 0;
      return 0;
    }
    uVar6 = 0x3e40;
  }
  else {
    uVar6 = 0x6944;
  }
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  FUN_00487380(param_1,0xffffffff,CONCAT22(0x52,uVar6));
  return -0x1e;
}


