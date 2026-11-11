// Function: FUN_00459950
// Entry: 00459950
// Size: 97 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00459950(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar2;
  longlong lVar3;
  
  for (; (0 < param_4 && (*param_3 != 0)); param_3 = param_3 + 0x18) {
    lVar2 = FUN_0045cc30(param_3 + 0xc,0xc);
    lVar3 = FUN_0045cc30(param_3,0xc);
    iVar1 = FUN_00459890(param_1,param_2,(int)lVar3,(int)((ulonglong)lVar3 >> 0x20),(uint)lVar2,
                         (int)((ulonglong)lVar2 >> 0x20),unaff_EDI,unaff_ESI);
    if (iVar1 != 0) {
      return 0xffffffe2;
    }
    param_4 = param_4 + -1;
  }
  return 0;
}


