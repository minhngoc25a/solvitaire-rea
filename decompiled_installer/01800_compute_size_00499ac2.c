// Function: compute_size
// Entry: 00499ac2
// Size: 51 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl compute_size(struct _BY_HANDLE_FILE_INFORMATION const &,long &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl compute_size(_BY_HANDLE_FILE_INFORMATION *param_1,long *param_2)

{
  __acrt_ptd *p_Var1;
  
  *param_2 = 0;
  if ((param_1->nFileSizeHigh == 0) && (param_1->nFileSizeLow < 0x80000000)) {
    *param_2 = param_1->nFileSizeLow;
    return true;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x84;
  return false;
}


