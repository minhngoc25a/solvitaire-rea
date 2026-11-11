// Function: validate_stream_is_ansi_if_required
// Entry: 0044ea54
// Size: 135 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (((uint)param_1->_flag >> 0xc & 1) == 0) {
    uVar2 = __fileno(param_1);
    puVar4 = &DAT_00540760;
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar5 = &DAT_00540760;
    }
    else {
      puVar5 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_00544378)[(int)uVar2 >> 6]);
    }
    if (puVar5[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar4 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_00544378)[(int)uVar2 >> 6]);
      }
      if ((puVar4[0x2d] & 1) == 0) goto LAB_0044ead6;
    }
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_004243be();
    bVar1 = false;
  }
  else {
LAB_0044ead6:
    bVar1 = true;
  }
  return bVar1;
}


