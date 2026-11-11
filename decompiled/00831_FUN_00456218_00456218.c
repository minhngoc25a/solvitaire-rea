// Function: FUN_00456218
// Entry: 00456218
// Size: 423 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_00456218(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  formatting_buffer *pfVar7;
  uint uVar8;
  undefined3 uVar9;
  char *pcVar10;
  formatting_buffer *this;
  uint uVar11;
  undefined4 local_18;
  undefined4 local_14;
  uint *******local_10;
  uint local_c;
  int local_8;
  
  param_1[7] = param_1[7] | 0x10;
  uVar11 = param_1[9];
  if ((int)uVar11 < 0) {
    if ((*(short *)((int)param_1 + 0x2e) == 0x61) || (*(short *)((int)param_1 + 0x2e) == 0x41)) {
      uVar11 = 0xd;
    }
    else {
      uVar11 = 6;
    }
    param_1[9] = uVar11;
  }
  else if ((uVar11 == 0) &&
          ((*(short *)((int)param_1 + 0x2e) == 0x67 || (*(short *)((int)param_1 + 0x2e) == 0x47))))
  {
    param_1[9] = 1;
    uVar11 = 1;
  }
  this = (formatting_buffer *)(param_1 + 0xf);
  uVar6 = FUN_004574e6(this,uVar11 + 0x15d,param_1[2]);
  if ((char)uVar6 == '\0') {
    uVar11 = __crt_stdio_output::formatting_buffer::count<char>(this);
    uVar11 = uVar11 - 0x15d;
    param_1[9] = uVar11;
  }
  else {
    uVar11 = param_1[9];
  }
  pfVar7 = (formatting_buffer *)param_1[0x110];
  if ((formatting_buffer *)param_1[0x110] == (formatting_buffer *)0x0) {
    pfVar7 = this;
  }
  param_1[0xc] = (uint)pfVar7;
  puVar4 = (undefined4 *)param_1[4];
  param_1[4] = (uint)(puVar4 + 2);
  local_18 = *puVar4;
  local_14 = puVar4[1];
  local_8 = (int)*(char *)((int)param_1 + 0x2e);
  local_c = __crt_stdio_output::formatting_buffer::count<char>(this);
  local_10 = (uint *******)__crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar8 = __crt_stdio_output::formatting_buffer::count<char>(this);
  if ((formatting_buffer *)param_1[0x110] != (formatting_buffer *)0x0) {
    this = (formatting_buffer *)param_1[0x110];
  }
  FUN_00484d01((double *)&local_18,(undefined1 (*) [16])this,uVar8,local_10,local_c,local_8,uVar11,
               *param_1,param_1[1],1,(int *)param_1[2]);
  if (((param_1[7] >> 5 & 1) != 0) && (param_1[9] == 0)) {
    piVar5 = (int *)param_1[2];
    if ((char)piVar5[5] == '\0') {
      FUN_0044ef90(piVar5);
    }
    __crt_stdio_output::force_decimal_point
              ((char *)param_1[0xc],(__crt_locale_pointers *)(piVar5 + 3));
  }
  uVar3 = *(ushort *)((int)param_1 + 0x2e);
  uVar11 = (uint)uVar3;
  if (((uVar3 == 0x67) || (uVar3 == 0x47)) && (uVar11 = param_1[7] >> 5, (uVar11 & 1) == 0)) {
    piVar5 = (int *)param_1[2];
    if ((char)piVar5[5] == '\0') {
      FUN_0044ef90(piVar5);
    }
    uVar11 = FUN_0045458a((char *)param_1[0xc],piVar5 + 3);
  }
  pcVar10 = (char *)param_1[0xc];
  cVar2 = *pcVar10;
  uVar9 = (undefined3)(uVar11 >> 8);
  if (cVar2 == '-') {
    param_1[7] = param_1[7] | 0x40;
    pcVar10 = pcVar10 + 1;
    param_1[0xc] = (uint)pcVar10;
    cVar2 = *pcVar10;
  }
  if (((cVar2 == 'i') || (cVar2 == 'I')) || ((cVar2 == 'n' || (cVar2 == 'N')))) {
    param_1[7] = param_1[7] & 0xfffffff7;
    uVar9 = 0;
    *(undefined2 *)((int)param_1 + 0x2e) = 0x73;
  }
  pcVar1 = pcVar10 + 1;
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  param_1[0xd] = (int)pcVar10 - (int)pcVar1;
  return CONCAT31(uVar9,1);
}


