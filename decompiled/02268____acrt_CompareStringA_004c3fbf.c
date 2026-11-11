// Function: ___acrt_CompareStringA
// Entry: 004c3fbf
// Size: 70 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_CompareStringA
   
   Library: Visual Studio 2019 Release */

void __cdecl
___acrt_CompareStringA
          (int *param_1,wchar_t *param_2,ulong param_3,byte *param_4,int param_5,byte *param_6,
          int param_7,uint param_8)

{
  int local_14;
  int local_10 [2];
  char local_8;
  
  FUN_00425544(&local_14,param_1);
  FUN_004c4005(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}


