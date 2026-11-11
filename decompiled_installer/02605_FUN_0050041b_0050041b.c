// Function: FUN_0050041b
// Entry: 0050041b
// Size: 932 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0050041b(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  _s_FuncInfo *p_Var7;
  EHRegistrationNode *pEVar8;
  __ehstate_t *p_Var9;
  _s_TryBlockMapEntry *p_Var10;
  int *piVar11;
  _s_TryBlockMapEntry local_68;
  _s_HandlerType local_54;
  int *local_44;
  _s_FuncInfo *local_40 [2];
  _s_FuncInfo *local_38;
  _s_FuncInfo *local_34;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  HandlerType *local_18;
  int local_14;
  _s_FuncInfo *local_10;
  int local_c;
  _CONTEXT *local_8;
  
  local_14 = 0;
  local_1c = local_1c & 0xffffff00;
  local_c = __FrameHandler3::GetCurrentState(param_2,param_4,param_5);
  if ((local_c < -1) || (param_5->maxState <= local_c)) goto LAB_005007ba;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) ||
       (*(int *)(param_1 + 0x14) == 0x19930522)) &&
      (pEVar8 = (EHRegistrationNode *)0x0, *(int *)(param_1 + 0x1c) == 0)))) {
    iVar2 = ___vcrt_getptd();
    if (*(int *)(iVar2 + 0x10) == 0) {
      return;
    }
    iVar2 = ___vcrt_getptd();
    param_1 = *(EHExceptionRecord **)(iVar2 + 0x10);
    iVar2 = ___vcrt_getptd();
    local_1c = CONCAT31(local_1c._1_3_,1);
    local_8 = *(_CONTEXT **)(iVar2 + 0x14);
    if ((param_1 == (EHExceptionRecord *)0x0) ||
       ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
         ((*(int *)(param_1 + 0x14) == 0x19930520 ||
          ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522))))))
        && (*(int *)(param_1 + 0x1c) == 0)))) goto LAB_005007ba;
    iVar2 = ___vcrt_getptd();
    if (*(int *)(iVar2 + 0x1c) != 0) {
      iVar2 = ___vcrt_getptd();
      local_10 = *(_s_FuncInfo **)(iVar2 + 0x1c);
      iVar2 = ___vcrt_getptd();
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      uVar3 = FUN_004fffd2((int)param_1,(int *)local_10);
      p_Var7 = local_10;
      if ((char)uVar3 == '\0') {
        if (0 < (int)local_10->magicNumber_and_bbtFlags) {
          do {
            bVar1 = type_info::operator==
                              (*(type_info **)(pEVar8 + p_Var7->maxState + 4),
                               (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
            if (bVar1) {
              ___DestructExceptionObject((int *)param_1);
              FUN_004ffd56(local_40);
              __CxxThrowException_8((int *)local_40,&DAT_00534d74);
              param_8 = pEVar8;
              param_5 = p_Var7;
              goto LAB_0050077e;
            }
            pEVar8 = pEVar8 + 0x10;
            local_14 = local_14 + 1;
          } while (local_14 < (int)p_Var7->magicNumber_and_bbtFlags);
        }
        goto LAB_00500759;
      }
    }
  }
  else {
    local_8 = param_3;
  }
  local_34 = param_5;
  local_30 = 0;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((*(int *)(param_1 + 0x14) == 0x19930520 ||
      ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522)))))) {
    if (param_5->nTryBlocks != 0) {
      FUN_004c4c92(&local_44,&local_34,local_c,param_4,(int)param_5,param_7);
      local_2c = local_44;
      local_10 = local_40[0];
      if (local_40[0] < local_38) {
        local_20 = (int)local_40[0] * 0x14;
        p_Var7 = local_40[0];
        do {
          iVar4 = local_c;
          p_Var9 = (__ehstate_t *)(*(int *)(*local_2c + 0x10) + local_20);
          p_Var10 = &local_68;
          local_10 = p_Var7;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            p_Var10->tryLow = *p_Var9;
            p_Var9 = p_Var9 + 1;
            p_Var10 = (_s_TryBlockMapEntry *)&p_Var10->tryHigh;
          }
          if (((local_68.tryLow <= iVar4) && (iVar4 <= local_68.tryHigh)) &&
             (local_14 = 0, local_68.nCatches != 0)) {
            pbVar6 = *(byte **)(param_1 + 0x1c);
            local_28 = **(int **)(pbVar6 + 0xc);
            local_24 = *(int **)(pbVar6 + 0xc) + 1;
            local_18 = local_68.pHandlerArray;
            do {
              local_54.adjectives = local_18->adjectives;
              local_54.pType = local_18->pType;
              local_54.dispCatchObj = local_18->dispCatchObj;
              local_54.addressOfHandler = local_18->addressOfHandler;
              piVar11 = local_24;
              p_Var7 = local_10;
              for (iVar2 = local_28; local_10 = p_Var7, 0 < iVar2; iVar2 = iVar2 + -1) {
                iVar4 = FID_conflict____TypeMatch((byte *)&local_54,(byte *)*piVar11,pbVar6);
                if (iVar4 != 0) {
                  CatchIt<__FrameHandler3>
                            (param_1,param_2,local_8,param_4,param_5,&local_54,
                             (_s_CatchableType *)*piVar11,&local_68,param_7,param_8,(uchar)local_1c,
                             param_6);
                  p_Var7 = local_10;
                  goto LAB_005006a4;
                }
                pbVar6 = *(byte **)(param_1 + 0x1c);
                piVar11 = piVar11 + 1;
                p_Var7 = local_10;
              }
              local_14 = local_14 + 1;
              local_18 = local_18 + 1;
            } while (local_14 != local_68.nCatches);
          }
LAB_005006a4:
          p_Var7 = (_s_FuncInfo *)((int)&p_Var7->magicNumber_and_bbtFlags + 1);
          local_20 = local_20 + 0x14;
          local_10 = p_Var7;
        } while (p_Var7 < local_38);
      }
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject((int *)param_1);
    }
    if (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) {
      uVar5 = (uint)param_5->EHFlags >> 2;
      if (param_5->pESTypeList == (ESTypeList *)0x0) {
        if (((uVar5 & 1) != 0) && (param_7 == 0)) {
LAB_005006fd:
          iVar2 = ___vcrt_getptd();
          *(EHExceptionRecord **)(iVar2 + 0x10) = param_1;
          iVar2 = ___vcrt_getptd();
          *(_CONTEXT **)(iVar2 + 0x14) = local_8;
LAB_00500759:
                    /* WARNING: Subroutine does not return */
          FUN_004c09f0();
        }
      }
      else {
        if ((uVar5 & 1) != 0) goto LAB_005006fd;
        uVar3 = FUN_004fffd2((int)param_1,&param_5->pESTypeList->nCount);
        if ((char)uVar3 == '\0') {
LAB_0050077e:
          iVar2 = ___vcrt_getptd();
          *(EHExceptionRecord **)(iVar2 + 0x10) = param_1;
          iVar2 = ___vcrt_getptd();
          *(_CONTEXT **)(iVar2 + 0x14) = local_8;
          if (param_8 == (EHRegistrationNode *)0x0) {
            param_8 = param_2;
          }
          _UnwindNestedFrames(param_8,param_1);
          __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
          uVar3 = FUN_004ffcc2((int)param_5);
          FUN_0050006c(uVar3);
          goto LAB_005007ba;
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') goto LAB_005007ba;
    FUN_00500840(param_1,param_2,local_8,param_4,param_5,local_c,param_7,param_8);
  }
  iVar2 = ___vcrt_getptd();
  if (*(int *)(iVar2 + 0x1c) == 0) {
    return;
  }
LAB_005007ba:
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


