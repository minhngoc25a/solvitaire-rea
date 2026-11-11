// Function: FUN_00458eaa
// Entry: 00458eaa
// Size: 135 bytes
// Thunk: false
// External: false


void __thiscall FUN_00458eaa(void *this,uint param_1,byte param_2)

{
  uint uVar1;
  formatting_buffer fVar2;
  formatting_buffer *pfVar3;
  formatting_buffer *pfVar4;
  
  pfVar3 = *(formatting_buffer **)((int)this + 0x440);
  if (*(formatting_buffer **)((int)this + 0x440) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)((int)this + 0x3c);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>
                    ((formatting_buffer *)((int)this + 0x3c));
  pfVar3 = pfVar3 + (uVar1 - 1);
  *(formatting_buffer **)((int)this + 0x30) = pfVar3;
  pfVar4 = pfVar3;
  while ((0 < *(int *)((int)this + 0x24) || (param_1 != 0))) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    fVar2 = (formatting_buffer)((char)(param_1 % 10) + '0');
    param_1 = param_1 / 10;
    if (0x39 < (byte)fVar2) {
      fVar2 = (formatting_buffer)((char)fVar2 + (param_2 ^ 1) * ' ' + '\a');
    }
    *pfVar4 = fVar2;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
    pfVar4 = *(formatting_buffer **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)pfVar3 - (int)pfVar4;
  *(formatting_buffer **)((int)this + 0x30) = pfVar4 + 1;
  return;
}


