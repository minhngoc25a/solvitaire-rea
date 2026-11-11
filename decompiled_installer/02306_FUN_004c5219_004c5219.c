// Function: FUN_004c5219
// Entry: 004c5219
// Size: 258 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_004c5219(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  _func_int_wchar_t_ptr_ulong_long *p_Var4;
  undefined4 uVar5;
  byte bVar6;
  _func_int_wchar_t_ptr_ulong_long *p_Var7;
  _func_int_wchar_t_ptr_ulong_long *p_Var8;
  uint uVar9;
  _func_int_wchar_t_ptr_ulong_long *p_Var10;
  
  puVar1 = *(uint **)*param_1;
  if (puVar1 == (uint *)0x0) {
LAB_004c5313:
    uVar5 = 0xffffffff;
  }
  else {
    bVar6 = (byte)DAT_0053fbc0 & 0x1f;
    p_Var10 = (_func_int_wchar_t_ptr_ulong_long *)
              ((puVar1[1] ^ DAT_0053fbc0) >> bVar6 | (puVar1[1] ^ DAT_0053fbc0) << 0x20 - bVar6);
    p_Var8 = (_func_int_wchar_t_ptr_ulong_long *)
             ((puVar1[2] ^ DAT_0053fbc0) >> bVar6 | (puVar1[2] ^ DAT_0053fbc0) << 0x20 - bVar6);
    p_Var7 = (_func_int_wchar_t_ptr_ulong_long *)
             ((*puVar1 ^ DAT_0053fbc0) >> bVar6 | (*puVar1 ^ DAT_0053fbc0) << 0x20 - bVar6);
    p_Var4 = p_Var7;
    if (p_Var10 == p_Var8) {
      uVar9 = (int)p_Var8 - (int)p_Var7 >> 2;
      uVar3 = 0x200;
      if (uVar9 < 0x201) {
        uVar3 = uVar9;
      }
      uVar3 = uVar3 + uVar9;
      if (uVar3 == 0) {
        uVar3 = 0x20;
      }
      if (uVar3 < uVar9) {
LAB_004c5291:
        uVar3 = uVar9 + 4;
        p_Var4 = __recalloc_base(p_Var7,uVar3,4);
        FUN_004247be((LPVOID)0x0);
        if (p_Var4 == (_func_int_wchar_t_ptr_ulong_long *)0x0) goto LAB_004c5313;
      }
      else {
        p_Var4 = __recalloc_base(p_Var7,uVar3,4);
        FUN_004247be((LPVOID)0x0);
        if (p_Var4 == (_func_int_wchar_t_ptr_ulong_long *)0x0) goto LAB_004c5291;
      }
      uVar2 = DAT_0053fbc0;
      p_Var8 = p_Var4 + uVar3 * 4;
      p_Var10 = p_Var4 + uVar9 * 4;
      for (p_Var7 = p_Var10; p_Var7 != p_Var8; p_Var7 = p_Var7 + 4) {
        *(uint *)p_Var7 = uVar2;
      }
    }
    p_Var7 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>
                       (*(_func_int_wchar_t_ptr_ulong_long **)param_1[1]);
    *(_func_int_wchar_t_ptr_ulong_long **)p_Var10 = p_Var7;
    p_Var4 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>(p_Var4);
    **(undefined4 **)*param_1 = p_Var4;
    p_Var10 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>(p_Var10 + 4);
    *(_func_int_wchar_t_ptr_ulong_long **)(*(int *)*param_1 + 4) = p_Var10;
    p_Var10 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>(p_Var8);
    *(_func_int_wchar_t_ptr_ulong_long **)(*(int *)*param_1 + 8) = p_Var10;
    uVar5 = 0;
  }
  return uVar5;
}


