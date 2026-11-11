// Function: FUN_004c93ad
// Entry: 004c93ad
// Size: 210 bytes
// Thunk: false
// External: false


char __cdecl FUN_004c93ad(undefined1 param_1,FILE *param_2,int *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  
  pcVar1 = (char *)__fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar3 = FUN_004f10b1(pcVar1,(uint *)&param_1,1,param_3);
    cVar6 = '\x01' - (iVar3 != 1);
  }
  else {
    uVar5 = 0;
    uVar4 = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 1);
    param_2->_base = (char *)(param_2->_bufsiz + -1);
    if ((int)uVar4 < 1) {
      if ((pcVar1 == (char *)0xffffffff) || (pcVar1 == (char *)0xfffffffe)) {
        puVar2 = &DAT_00540760;
      }
      else {
        puVar2 = (undefined *)(((uint)pcVar1 & 0x3f) * 0x38 + (&DAT_00544378)[(int)pcVar1 >> 6]);
      }
      if (((puVar2[0x28] & 0x20) != 0) &&
         (lVar7 = FUN_0049d463((uint)pcVar1,0,0,(PLARGE_INTEGER)0x2), lVar7 == -1)) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return '\x01';
      }
    }
    else {
      uVar5 = FUN_004f10b1(pcVar1,(uint *)param_2->_cnt,uVar4,param_3);
    }
    cVar6 = uVar5 == uVar4;
    *(undefined1 *)param_2->_cnt = param_1;
  }
  return cVar6;
}


