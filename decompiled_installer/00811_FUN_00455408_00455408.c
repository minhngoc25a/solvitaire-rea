// Function: FUN_00455408
// Entry: 00455408
// Size: 401 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_00455408(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  formatting_buffer *pfVar6;
  uint uVar7;
  uint extraout_EAX;
  char *pcVar8;
  formatting_buffer *this;
  uint uVar9;
  undefined4 local_18;
  undefined4 local_14;
  uint *******local_10;
  uint local_c;
  int local_8;
  
  param_1[7] = param_1[7] | 0x10;
  uVar9 = param_1[9];
  if ((int)uVar9 < 0) {
    if ((*(char *)((int)param_1 + 0x2d) == 'a') || (*(char *)((int)param_1 + 0x2d) == 'A')) {
      uVar9 = 0xd;
    }
    else {
      uVar9 = 6;
    }
    param_1[9] = uVar9;
  }
  else if ((uVar9 == 0) &&
          ((*(char *)((int)param_1 + 0x2d) == 'g' || (*(char *)((int)param_1 + 0x2d) == 'G')))) {
    param_1[9] = 1;
    uVar9 = 1;
  }
  this = (formatting_buffer *)(param_1 + 0xf);
  uVar5 = FUN_004574e6(this,uVar9 + 0x15d,param_1[2]);
  if ((char)uVar5 == '\0') {
    uVar9 = __crt_stdio_output::formatting_buffer::count<char>(this);
    uVar9 = uVar9 - 0x15d;
    param_1[9] = uVar9;
  }
  else {
    uVar9 = param_1[9];
  }
  pfVar6 = (formatting_buffer *)param_1[0x110];
  if ((formatting_buffer *)param_1[0x110] == (formatting_buffer *)0x0) {
    pfVar6 = this;
  }
  param_1[0xc] = (uint)pfVar6;
  puVar3 = (undefined4 *)param_1[4];
  param_1[4] = (uint)(puVar3 + 2);
  local_18 = *puVar3;
  local_14 = puVar3[1];
  local_8 = (int)*(char *)((int)param_1 + 0x2d);
  local_c = __crt_stdio_output::formatting_buffer::count<char>(this);
  local_10 = (uint *******)__crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar7 = __crt_stdio_output::formatting_buffer::count<char>(this);
  if ((formatting_buffer *)param_1[0x110] != (formatting_buffer *)0x0) {
    this = (formatting_buffer *)param_1[0x110];
  }
  FUN_00484d01((double *)&local_18,(undefined1 (*) [16])this,uVar7,local_10,local_c,local_8,uVar9,
               *param_1,param_1[1],1,(int *)param_1[2]);
  uVar9 = param_1[7] >> 5;
  if (((uVar9 & 1) != 0) && (param_1[9] == 0)) {
    piVar4 = (int *)param_1[2];
    if ((char)piVar4[5] == '\0') {
      FUN_0044ef90(piVar4);
    }
    __crt_stdio_output::force_decimal_point
              ((char *)param_1[0xc],(__crt_locale_pointers *)(piVar4 + 3));
    uVar9 = extraout_EAX;
  }
  cVar2 = *(char *)((int)param_1 + 0x2d);
  uVar9 = CONCAT31((int3)(uVar9 >> 8),cVar2);
  if (((cVar2 == 'g') || (cVar2 == 'G')) && (uVar9 = param_1[7] >> 5, (uVar9 & 1) == 0)) {
    piVar4 = (int *)param_1[2];
    if ((char)piVar4[5] == '\0') {
      FUN_0044ef90(piVar4);
    }
    uVar9 = FUN_0045458a((char *)param_1[0xc],piVar4 + 3);
  }
  pcVar8 = (char *)param_1[0xc];
  cVar2 = *pcVar8;
  if (cVar2 == '-') {
    param_1[7] = param_1[7] | 0x40;
    pcVar8 = pcVar8 + 1;
    param_1[0xc] = (uint)pcVar8;
    cVar2 = *pcVar8;
  }
  if (((cVar2 == 'i') || (cVar2 == 'I')) || ((cVar2 == 'n' || (cVar2 == 'N')))) {
    param_1[7] = param_1[7] & 0xfffffff7;
    *(undefined1 *)((int)param_1 + 0x2d) = 0x73;
  }
  pcVar1 = pcVar8 + 1;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  param_1[0xd] = (int)pcVar8 - (int)pcVar1;
  return CONCAT31((int3)(uVar9 >> 8),1);
}


