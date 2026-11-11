// Function: LongLongSub
// Entry: 004743ef
// Size: 122 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    long __cdecl LongLongSub(__int64,__int64,__int64 *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

long __cdecl LongLongSub(__int64 param_1,__int64 param_2,__int64 *param_3)

{
  longlong lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = param_1 - param_2;
  lVar2 = 0;
  iVar3 = 1;
  if ((0xffffffff < param_1) || (iVar4 = iVar3, -1 < param_1)) {
    iVar4 = 0;
  }
  if ((0xffffffff < param_2) || (iVar5 = iVar3, -1 < param_2)) {
    iVar5 = 0;
  }
  if (iVar4 != iVar5) {
    if ((0xffffffff < param_1) || (iVar4 = iVar3, -1 < param_1)) {
      iVar4 = 0;
    }
    if ((0 < (int)((ulonglong)lVar1 >> 0x20)) || (-1 < lVar1)) {
      iVar3 = 0;
    }
    if (iVar4 != iVar3) {
      lVar2 = -0x7ff8fdea;
      lVar1 = -1;
    }
  }
  *param_3 = lVar1;
  return lVar2;
}


