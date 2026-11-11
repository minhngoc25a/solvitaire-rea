// Function: FUN_00404d10
// Entry: 00404d10
// Size: 227 bytes
// Thunk: false
// External: false


void __fastcall FUN_00404d10(size_t param_1,void *param_2)

{
  LPCVOID in_EAX;
  SIZE_T SVar1;
  DWORD local_3c;
  _MEMORY_BASIC_INFORMATION local_38;
  
  SVar1 = VirtualQuery(in_EAX,&local_38,0x1c);
  if (SVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404cc0("  VirtualQuery failed for %d bytes at address %p");
  }
  if ((local_38.Protect == 4) || (local_38.Protect == 0x40)) {
    memcpy(in_EAX,param_2,param_1);
  }
  else {
    VirtualProtect(local_38.BaseAddress,local_38.RegionSize,0x40,&local_3c);
    memcpy(in_EAX,param_2,param_1);
    if ((local_38.Protect != 4) && (local_38.Protect != 0x40)) {
      VirtualProtect(local_38.BaseAddress,local_38.RegionSize,local_3c,&local_3c);
      return;
    }
  }
  return;
}


