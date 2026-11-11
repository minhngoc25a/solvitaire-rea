// Function: FUN_0050a7c7
// Entry: 0050a7c7
// Size: 326 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

UINT FUN_0050a7c7(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  UINT UVar6;
  uint uVar7;
  UINT local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_005450b8 != 1) {
      if (DAT_005450b8 == 0) {
        DAT_005450b8 = 1;
        iVar4 = __initterm_e((undefined4 *)&DAT_00532098,(undefined4 *)&DAT_005320b8);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        FUN_004c5110((undefined4 *)&DAT_0053208c,(undefined4 *)&DAT_00532094);
        DAT_005450b8 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_0050b04c();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_00532084)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_0050b052();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        __register_thread_local_exe_atexit_callback((_func_int_wchar_t_ptr_ulong_long *)*piVar5);
      }
      FUN_0047d9b8();
      __get_narrow_winmain_command_line();
      UVar6 = FUN_00411ef0();
      uVar7 = FUN_0047d9e8();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          FUN_0048023e();
        }
        ___scrt_uninitialize_crt('\x01','\0');
        ExceptionList = local_14;
        return UVar6;
      }
      FUN_00480212(UVar6);
                    /* WARNING: Subroutine does not return */
      FUN_00480228(local_24);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047da3b();
}


