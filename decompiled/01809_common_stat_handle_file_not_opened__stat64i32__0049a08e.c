// Function: common_stat_handle_file_not_opened<_stat64i32>
// Entry: 0049a08e
// Size: 138 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl common_stat_handle_file_not_opened<struct _stat64i32>(wchar_t const * const,struct
   _stat64i32 &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl common_stat_handle_file_not_opened<_stat64i32>(wchar_t *param_1,_stat64i32 *param_2)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  undefined8 uVar4;
  int local_8;
  
  cVar1 = FUN_00499d66(param_1);
  if (cVar1 == '\0') {
    ___acrt_errno_map_os_error(2);
    return false;
  }
  uVar3 = convert_to_stat_mode(0x10,param_1);
  local_8 = 0;
  *(ushort *)(param_2 + 6) = uVar3;
  *(undefined2 *)(param_2 + 8) = 1;
  bVar2 = get_drive_number_from_path(param_1,&local_8);
  if (bVar2) {
    *(int *)(param_2 + 0x10) = local_8 + -1;
    *(int *)param_2 = local_8 + -1;
    uVar4 = FUN_004e7110(0x7bc,1,1,0,0,0,-1);
    *(undefined8 *)(param_2 + 0x20) = uVar4;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    *(undefined8 *)(param_2 + 0x28) = uVar4;
  }
  return bVar2;
}


