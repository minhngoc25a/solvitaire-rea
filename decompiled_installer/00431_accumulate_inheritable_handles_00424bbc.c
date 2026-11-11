// Function: accumulate_inheritable_handles
// Entry: 00424bbc
// Size: 57 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl accumulate_inheritable_handles(unsigned char * * const,unsigned int * const,bool)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool __cdecl accumulate_inheritable_handles(uchar **param_1,uint *param_2,bool param_3)

{
  undefined1 uVar1;
  uchar ***local_1c;
  uint **local_18;
  bool *local_14;
  int local_10 [3];
  
  local_1c = &param_1;
  local_18 = &param_2;
  local_14 = &param_3;
  local_10[1] = 7;
  local_10[0] = 7;
  uVar1 = operator()<>(local_10,&local_1c);
  return (bool)uVar1;
}


