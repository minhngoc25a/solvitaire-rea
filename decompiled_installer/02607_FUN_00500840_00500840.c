// Function: FUN_00500840
// Entry: 00500840
// Size: 309 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00500840(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  int iVar1;
  PVOID pvVar2;
  _s_HandlerType *p_Var3;
  uint uVar4;
  __ehstate_t *p_Var5;
  _s_TryBlockMapEntry *p_Var6;
  _s_TryBlockMapEntry local_3c;
  int *local_28;
  uint local_24;
  uint local_1c;
  _s_FuncInfo *local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    iVar1 = ___vcrt_getptd();
    if (*(int *)(iVar1 + 8) != 0) {
      pvVar2 = EncodePointer((PVOID)0x0);
      iVar1 = ___vcrt_getptd();
      if ((((*(PVOID *)(iVar1 + 8) != pvVar2) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar1 = FUN_004c4de2((int *)param_1,(undefined4 *)param_2,param_3,param_4,param_5,param_7,
                               param_8), iVar1 != 0)) {
        return;
      }
    }
    local_18 = param_5;
    local_14 = 0;
    if (param_5->nTryBlocks == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0047d96c();
    }
    FUN_004c4c92(&local_28,&local_18,param_6,param_4,(int)param_5,param_7);
    local_10 = local_28;
    if (local_24 < local_1c) {
      local_c = local_24 * 0x14;
      uVar4 = local_24;
      do {
        p_Var5 = (__ehstate_t *)(*(int *)(*local_10 + 0x10) + local_c);
        p_Var6 = &local_3c;
        local_8 = uVar4;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          p_Var6->tryLow = *p_Var5;
          p_Var5 = p_Var5 + 1;
          p_Var6 = (_s_TryBlockMapEntry *)&p_Var6->tryHigh;
        }
        if ((local_3c.tryLow <= param_6) && (param_6 <= local_3c.tryHigh)) {
          p_Var3 = local_3c.pHandlerArray + local_3c.nCatches + -1;
          if (((p_Var3->pType == (TypeDescriptor *)0x0) ||
              (*(char *)&p_Var3->pType[1].pVFTable == '\0')) && ((p_Var3->adjectives & 0x40) == 0))
          {
            CatchIt<__FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var3,(_s_CatchableType *)0x0,
                       &local_3c,param_7,param_8,'\x01','\0');
            uVar4 = local_8;
          }
        }
        uVar4 = uVar4 + 1;
        local_c = local_c + 0x14;
      } while (uVar4 < local_1c);
    }
  }
  return;
}


