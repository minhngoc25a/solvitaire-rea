// Function: FUN_00459f00
// Entry: 00459f00
// Size: 121 bytes
// Thunk: false
// External: false


int __cdecl FUN_00459f00(int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  
  uVar1 = FUN_0045cb40(param_1,param_2,(int *)(param_2 + 0x60),param_4,param_5);
  if ((uVar1 == 0) &&
     ((uVar2 = FUN_0045cd30(param_1,param_2,param_3,param_5,unaff_EBP,unaff_EDI,unaff_ESI,unaff_EBX)
      , uVar2 == 0 || (uVar1 = uVar2, uVar2 == 0xffffffec)))) {
    uVar1 = FUN_0045c740(param_1,param_2,param_3,(undefined4 *)(param_2 + 0x60),unaff_EBP,unaff_EDI,
                         (int)unaff_ESI,unaff_EBX,unaff_retaddr,param_1,param_2);
    *(undefined4 *)(param_2 + 0xa4) = 0;
    *(uint *)(param_2 + 0xa0) = -*(int *)(param_2 + 0x90) & 0x1ff;
    if ((int)uVar2 < (int)uVar1) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}


