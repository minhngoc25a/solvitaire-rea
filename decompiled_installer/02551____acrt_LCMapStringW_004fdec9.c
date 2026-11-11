// Function: ___acrt_LCMapStringW
// Entry: 004fdec9
// Size: 62 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_LCMapStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___acrt_LCMapStringW
          (wchar_t *param_1,ulong param_2,wchar_t *param_3,uint param_4,wchar_t *param_5,int param_6
          )

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0 < (int)param_4) {
    uVar1 = FUN_0044bf32(param_3,param_4);
    uVar2 = uVar1 + 1;
    if ((int)param_4 <= (int)uVar1) {
      uVar2 = uVar1;
    }
  }
  ___acrt_LCMapStringEx_36
            (param_1,param_2,param_3,uVar2,param_5,param_6,(_nlsversioninfo *)0x0,(void *)0x0,0);
  return;
}


