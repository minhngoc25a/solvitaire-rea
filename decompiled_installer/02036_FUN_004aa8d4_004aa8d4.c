// Function: FUN_004aa8d4
// Entry: 004aa8d4
// Size: 105 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004aa8d4(FILE *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    puVar2 = (uint *)param_1->_cnt;
    uVar5 = (int)param_1->_ptr - (int)puVar2;
    param_1->_ptr = (char *)puVar2;
    param_1->_base = (char *)0x0;
    if (0 < (int)uVar5) {
      pcVar3 = (char *)__fileno(param_1);
      uVar4 = FUN_004f10b1(pcVar3,puVar2,uVar5,param_2);
      if (uVar5 != uVar4) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}


