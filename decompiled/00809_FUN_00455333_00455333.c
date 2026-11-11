// Function: FUN_00455333
// Entry: 00455333
// Size: 99 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_00455333(__uint64 *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 2);
  *(undefined4 **)(param_1 + 2) = puVar2 + 1;
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (iVar4 = *(int *)(puVar3 + 2), iVar4 == 0)) {
    uVar6 = 6;
    *(char **)(param_1 + 6) = "(null)";
  }
  else {
    bVar5 = __crt_stdio_output::is_wide_character_specifier<char>
                      (*param_1,*(char *)((int)param_1 + 0x2d),*(length_modifier *)(param_1 + 5));
    *(int *)(param_1 + 6) = iVar4;
    uVar1 = *puVar3;
    uVar6 = (uint)uVar1;
    if (bVar5) {
      *(undefined1 *)(param_1 + 7) = 1;
      uVar6 = (uint)(uVar1 >> 1);
      goto LAB_0045538d;
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
LAB_0045538d:
  *(uint *)((int)param_1 + 0x34) = uVar6;
  return CONCAT31((int3)(uVar6 >> 8),1);
}


