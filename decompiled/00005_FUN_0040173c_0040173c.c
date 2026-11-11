// Function: FUN_0040173c
// Entry: 0040173c
// Size: 199 bytes
// Thunk: false
// External: false


HWND FUN_0040173c(void)

{
  HWND hWnd;
  char *pcVar1;
  int iVar2;
  char local_11c [128];
  char local_9c [140];
  
  pcVar1 = local_9c;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  iVar2 = FUN_0040206e(0x18,local_9c);
  if (iVar2 != 0) {
    for (hWnd = FindWindowExA((HWND)0x0,(HWND)0x0,(LPCSTR)0x0,(LPCSTR)0x0); hWnd != (HWND)0x0;
        hWnd = FindWindowExA((HWND)0x0,hWnd,(LPCSTR)0x0,(LPCSTR)0x0)) {
      GetWindowTextA(hWnd,local_11c,0x7f);
      pcVar1 = strstr(local_11c,local_9c);
      if (pcVar1 != (char *)0x0) {
        return hWnd;
      }
    }
  }
  return (HWND)0x0;
}


