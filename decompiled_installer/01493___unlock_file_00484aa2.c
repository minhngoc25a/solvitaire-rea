// Function: __unlock_file
// Entry: 00484aa2
// Size: 20 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


