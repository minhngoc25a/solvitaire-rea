// Function: ReadFile
// Entry: 0040b8d8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
             LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


