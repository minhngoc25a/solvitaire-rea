// Function: FUN_004c2ac5
// Entry: 004c2ac5
// Size: 257 bytes
// Thunk: false
// External: false


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl
FUN_004c2ac5(int *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int cchSrc;
  LPCWSTR lpSrcStr;
  int local_20;
  int local_1c;
  char local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  FUN_00425544(&local_20,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_1c + 8);
  }
  local_10 = FUN_0048139c(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (local_10 == 0) goto LAB_004c2ba2;
  local_c = local_10 * 2;
  uVar1 = -(uint)(local_c < local_c + 8) & local_c + 8;
  if (uVar1 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
  }
  else if (uVar1 < 0x401) {
    puVar2 = (undefined4 *)&stack0xffffffd4;
    lpSrcStr = (LPCWSTR)&stack0xffffffd4;
    if (&stack0x00000000 != (undefined1 *)0x2c) {
LAB_004c2b5d:
      lpSrcStr = (LPCWSTR)(puVar2 + 2);
      if (lpSrcStr != (LPCWSTR)0x0) {
        _memset(lpSrcStr,0,local_c);
        cchSrc = FUN_0048139c(param_6,1,param_3,param_4,lpSrcStr,local_10);
        if (cchSrc != 0) {
          GetStringTypeW(param_2,lpSrcStr,cchSrc,param_5);
        }
      }
    }
  }
  else {
    puVar2 = __malloc_base(uVar1);
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xdddd;
      goto LAB_004c2b5d;
    }
  }
  FUN_004c2aa5((int)lpSrcStr);
LAB_004c2ba2:
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


