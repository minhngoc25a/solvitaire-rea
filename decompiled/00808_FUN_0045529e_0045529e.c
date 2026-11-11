// Function: FUN_0045529e
// Entry: 0045529e
// Size: 149 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_0045529e(undefined6 *param_1)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  formatting_buffer *pfVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  formatting_buffer *pfVar7;
  formatting_buffer *this;
  
  this = (formatting_buffer *)((int)param_1 + 0x3c);
  bVar4 = __crt_stdio_output::is_wide_character_specifier<char>
                    (CONCAT26((short)((uint)*(undefined4 *)((int)param_1 + 4) >> 0x10),*param_1),
                     *(char *)((int)param_1 + 0x2d),*(length_modifier *)(param_1 + 5));
  if (bVar4) {
    pWVar2 = *(WCHAR **)(param_1 + 2);
    *(WCHAR **)(param_1 + 2) = pWVar2 + 2;
    WVar1 = *pWVar2;
    uVar5 = __crt_stdio_output::formatting_buffer::count<char>(this);
    pfVar7 = *(formatting_buffer **)(param_1 + 0x88);
    if (*(formatting_buffer **)(param_1 + 0x88) == (formatting_buffer *)0x0) {
      pfVar7 = this;
    }
    iVar6 = FUN_004848ed((int *)((int)param_1 + 0x34),(byte *)pfVar7,uVar5,WVar1,
                         *(int **)(param_1 + 1));
    if (iVar6 != 0) {
      *(undefined1 *)((int)param_1 + 0x2c) = 1;
    }
  }
  else {
    pfVar7 = *(formatting_buffer **)(param_1 + 0x88);
    if (*(formatting_buffer **)(param_1 + 0x88) == (formatting_buffer *)0x0) {
      pfVar7 = this;
    }
    pfVar3 = *(formatting_buffer **)(param_1 + 2);
    *(formatting_buffer **)(param_1 + 2) = pfVar3 + 4;
    *pfVar7 = *pfVar3;
    *(undefined4 *)((int)param_1 + 0x34) = 1;
  }
  pfVar7 = *(formatting_buffer **)(param_1 + 0x88);
  if (pfVar7 != (formatting_buffer *)0x0) {
    this = pfVar7;
  }
  *(formatting_buffer **)(param_1 + 6) = this;
  return CONCAT31((int3)((uint)pfVar7 >> 8),1);
}


