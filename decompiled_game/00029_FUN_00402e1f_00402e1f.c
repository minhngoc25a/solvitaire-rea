// Function: FUN_00402e1f
// Entry: 00402e1f
// Size: 126 bytes
// Thunk: false
// External: false


void __cdecl FUN_00402e1f(char *param_1)

{
  _MEMORYSTATUSEX local_4c;
  
  local_4c.dwLength = 0x40;
  GlobalMemoryStatusEx(&local_4c);
  FUN_00402cce(param_1,0x19,0x1a,local_4c.ullAvailPhys._0_4_,local_4c.ullAvailPhys._4_4_,"-Xms");
  FUN_00402cce(param_1,0x1b,0x1c,local_4c.ullAvailPhys._0_4_,local_4c.ullAvailPhys._4_4_,"-Xmx");
  return;
}


