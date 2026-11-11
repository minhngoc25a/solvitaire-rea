// Function: ___strncnt
// Entry: 004ffb11
// Size: 28 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___strncnt(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 != param_2))) {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return;
}


