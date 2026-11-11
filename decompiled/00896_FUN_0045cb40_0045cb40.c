// Function: FUN_0045cb40
// Entry: 0045cb40
// Size: 229 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0045cb40(int param_1,undefined4 param_2,int *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  
  lVar5 = FUN_0045cc30((byte *)(param_4 + 0x7c),0xc);
  uVar1 = (uint)lVar5;
  if (((int)((ulonglong)lVar5 >> 0x20) != 0) || (0x100000 < uVar1)) {
    FUN_00487380(param_1,0x16,0x527478);
    return 0xffffffe2;
  }
  piVar2 = FUN_0048d4d0(param_3,(LPVOID)(uVar1 + 1));
  if (piVar2 == (int *)0x0) {
    FUN_00487380(param_1,0xc,0x5237ac);
    return 0xffffffe2;
  }
  if (*param_5 != 0) {
    FUN_00488f20(param_1,(ulonglong)*param_5);
  }
  uVar3 = uVar1 + 0x1ff & 0xfffffe00;
  *param_5 = uVar3;
  puVar4 = (uint *)FUN_00488710(param_1,uVar3,(uint *)0x0);
  if (puVar4 != (uint *)0x0) {
    FUN_0044c490((uint *)*param_3,puVar4,uVar1);
    *(undefined1 *)(uVar1 + *param_3) = 0;
    param_3[1] = uVar1;
    return 0;
  }
  *param_5 = 0;
  return 0xffffffe2;
}


