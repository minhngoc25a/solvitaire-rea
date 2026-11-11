// Function: FUN_00452038
// Entry: 00452038
// Size: 101 bytes
// Thunk: false
// External: false


int __fastcall
FUN_00452038(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1)

{
  undefined4 *puVar1;
  uint3 uVar3;
  int iVar2;
  ulonglong uVar4;
  undefined1 auStack_3c [28];
  undefined4 uStack_20;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
  process_whitespace(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  uStack_8 = (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *)
             ((uint)uStack_8 & 0xffffff);
  FUN_00452255(auStack_3c,param_1 + 8,*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),(undefined1 *)((int)&uStack_8 + 3));
  uVar4 = FUN_004523a5(puVar1);
  uVar3 = (uint3)(uVar4 >> 8);
  if (uStack_8._3_1_ == '\0') {
    iVar2 = (uint)uVar3 << 8;
  }
  else if (param_1[0x2e] ==
           (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    uStack_20 = 0x452097;
    iVar2 = FUN_004520e5(param_1,(int)uVar4,(int)(uVar4 >> 0x20));
  }
  else {
    iVar2 = CONCAT31(uVar3,1);
  }
  return iVar2;
}


