// Function: FUN_00458e03
// Entry: 00458e03
// Size: 167 bytes
// Thunk: false
// External: false


void __thiscall FUN_00458e03(void *this,uint param_1,undefined4 param_2,byte param_3)

{
  uint uVar1;
  formatting_buffer *pfVar2;
  formatting_buffer fVar3;
  formatting_buffer *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint local_8;
  
  pfVar4 = *(formatting_buffer **)((int)this + 0x440);
  if (*(formatting_buffer **)((int)this + 0x440) == (formatting_buffer *)0x0) {
    pfVar4 = (formatting_buffer *)((int)this + 0x3c);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>
                    ((formatting_buffer *)((int)this + 0x3c));
  pfVar4 = pfVar4 + (uVar1 - 1);
  *(formatting_buffer **)((int)this + 0x30) = pfVar4;
  lVar6 = CONCAT44(param_2,param_1);
  local_8 = param_1;
  pfVar2 = pfVar4;
  while( true ) {
    uVar1 = (uint)((ulonglong)lVar6 >> 0x20);
    if ((*(int *)((int)this + 0x24) < 1) && (lVar6 == 0)) break;
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    uVar5 = __aullrem(local_8,uVar1,10,0);
    fVar3 = (formatting_buffer)((char)uVar5 + '0');
    lVar6 = __aulldiv(local_8,uVar1,10,0);
    local_8 = (uint)lVar6;
    if ('9' < (char)fVar3) {
      fVar3 = (formatting_buffer)((param_3 ^ 1) * ' ' + '\a' + (char)fVar3);
    }
    *pfVar2 = fVar3;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
    pfVar2 = *(formatting_buffer **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)pfVar4 - (int)pfVar2;
  *(formatting_buffer **)((int)this + 0x30) = pfVar2 + 1;
  return;
}


