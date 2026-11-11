// Function: FUN_00416a80
// Entry: 00416a80
// Size: 180 bytes
// Thunk: false
// External: false


undefined4 * FUN_00416a80(void)

{
  int iVar1;
  HANDLE hObject;
  DWORD local_4;
  
  if (DAT_00542890 == 0) {
    DAT_00542890 = 1;
    DAT_00542894 = 0x40;
    iVar1 = FUN_00433cc0((int *)0x0,&DAT_005424b0);
    if (iVar1 == 0) {
      DAT_005424a8 = FUN_004259b4(0x68,0x40,FUN_00416930);
      DAT_00542898 = HeapAlloc(DAT_00542264,8,DAT_00542894 * 0x370);
      DAT_0054289c = (int *)FUN_00434d10(0x5424b0);
      FUN_00431950(DAT_0054289c);
      hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x2000,(LPTHREAD_START_ROUTINE)&LAB_004169e0
                             ,(LPVOID)0x0,0,&local_4);
      if (hObject != (HANDLE)0x0) {
        CloseHandle(hObject);
      }
      DAT_005424ac = 1;
    }
  }
  return DAT_005424a8;
}


