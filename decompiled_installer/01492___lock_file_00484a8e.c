// Function: __lock_file
// Entry: 00484a8e
// Size: 20 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


