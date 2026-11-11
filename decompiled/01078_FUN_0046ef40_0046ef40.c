// Function: FUN_0046ef40
// Entry: 0046ef40
// Size: 353 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046ef40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (puVar1 = (uint *)*param_1, puVar1 != (uint *)0x0)) {
    FUN_0046b4f0(puVar1,param_3);
    FUN_0046b4f0(puVar1,param_2);
    *param_1 = 0;
    FUN_0046d0c0((int)puVar1);
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x99]);
    puVar1[0x99] = 0;
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0xac]);
    puVar1[0xac] = 0;
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0xa8]);
    puVar1[0xa8] = 0;
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x81]);
    puVar1[0x81] = 0;
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x82]);
    puVar1[0x82] = 0;
    if ((puVar1[0x8c] & 0x1000) != 0) {
      thunk_FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x4f]);
      puVar1[0x4f] = 0;
    }
    puVar1[0x8c] = puVar1[0x8c] & 0xffffefff;
    if ((puVar1[0x8c] & 0x2000) != 0) {
      FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x6c]);
      puVar1[0x6c] = 0;
    }
    puVar1[0x8c] = puVar1[0x8c] & 0xffffdfff;
    FUN_0048ae10((int)(puVar1 + 0x21));
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x76]);
    puVar1[0x76] = 0;
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0xa4]);
    puVar1[0xa4] = 0;
    FUN_004a48e0((int)puVar1,(LPVOID)puVar1[0x91]);
    puVar1[0x91] = 0;
    FUN_004a4a40(puVar1);
  }
  return;
}


