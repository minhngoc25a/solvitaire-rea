// Function: FUN_00401f36
// Entry: 00401f36
// Size: 312 bytes
// Thunk: false
// External: false


void FUN_00401f36(void)

{
  DWORD dwMessageId;
  char *local_10 [2];
  
  dwMessageId = GetLastError();
  if (DAT_00410a2c != (FILE *)0x0) {
    fprintf(DAT_00410a2c,"Error msg:\t%s\n",&DAT_00419168);
  }
  if (dwMessageId != 0) {
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPSTR)local_10,0,(va_list *)0x0);
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Error:\t\t%s\n",local_10[0]);
    }
    strcat(&DAT_00419168,"\n\n");
    strcat(&DAT_00419168,local_10[0]);
    LocalFree(local_10[0]);
  }
  FUN_00401ed3(&DAT_00419168);
  if (DAT_00419568 != '\0') {
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Open URL:\t%s\n",&DAT_00419568);
    }
    ShellExecuteA((HWND)0x0,"open",&DAT_00419568,(LPCSTR)0x0,(LPCSTR)0x0,1);
  }
  FUN_00401d21();
  return;
}


