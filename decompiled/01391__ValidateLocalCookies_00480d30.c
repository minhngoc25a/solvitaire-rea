// Function: _ValidateLocalCookies
// Entry: 00480d30
// Size: 50 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _ValidateLocalCookies
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _ValidateLocalCookies(int *param_1,int param_2)

{
  if (*param_1 != -2) {
    FUN_004257be(param_1[1] + param_2 ^ *(uint *)(*param_1 + param_2));
  }
  FUN_004257be(param_1[3] + param_2 ^ *(uint *)(param_1[2] + param_2));
  return;
}


