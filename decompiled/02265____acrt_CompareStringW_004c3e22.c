// Function: ___acrt_CompareStringW
// Entry: 004c3e22
// Size: 101 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_CompareStringW
   
   Library: Visual Studio 2019 Release */

int __cdecl
___acrt_CompareStringW
          (wchar_t *param_1,ulong param_2,wchar_t *param_3,uint param_4,wchar_t *param_5,
          uint param_6)

{
  int iVar1;
  
  if (0 < (int)param_4) {
    param_4 = FUN_0044bf32(param_3,param_4);
  }
  if (0 < (int)param_6) {
    param_6 = FUN_0044bf32(param_5,param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    if (param_4 - param_6 == 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = ((int)(param_4 - param_6) >> 0x1f & 0xfffffffeU) + 3;
    }
  }
  else {
    iVar1 = ___acrt_CompareStringEx_36
                      (param_1,param_2,param_3,param_4,param_5,param_6,(_nlsversioninfo *)0x0,
                       (void *)0x0,0);
  }
  return iVar1;
}


