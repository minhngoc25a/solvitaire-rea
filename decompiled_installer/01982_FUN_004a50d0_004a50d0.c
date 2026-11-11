// Function: FUN_004a50d0
// Entry: 004a50d0
// Size: 610 bytes
// Thunk: false
// External: false


void * __cdecl
FUN_004a50d0(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,uint param_7,uint *param_8,int param_9)

{
  char *pcVar1;
  SIZE_T _Size;
  char cVar2;
  void *in_EAX;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (uint *)0x0)) &&
     ((param_8 != (uint *)0x0 && (((int)param_7 < 1 || (param_9 != 0)))))) {
    puVar5 = param_3;
    do {
      uVar3 = *puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
    } while ((char)uVar3 != '\0');
    pcVar1 = (char *)((int)puVar5 + (1 - ((int)param_3 + 1)));
    if (param_6 < 4) {
      if (0xff < param_7) {
        pvVar4 = (void *)FUN_0046f6d0(param_1,"Invalid pCAL parameter count",1);
        return pvVar4;
      }
      iVar8 = 0;
      if (0 < (int)param_7) {
        do {
          pcVar7 = *(char **)(param_9 + iVar8 * 4);
          if (pcVar7 == (char *)0x0) {
LAB_004a51b5:
            pvVar4 = (void *)FUN_0046f6d0(param_1,"Invalid format for pCAL parameter",1);
            return pvVar4;
          }
          pcVar6 = pcVar7;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          uVar3 = FUN_0046cbe0((int)pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
          if (uVar3 == 0) goto LAB_004a51b5;
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)param_7);
      }
      puVar5 = (uint *)FUN_004a4890(param_1,(SIZE_T)pcVar1);
      *(uint **)(param_2 + 0xd0) = puVar5;
      if (puVar5 == (uint *)0x0) {
        pvVar4 = (void *)FUN_0046f6d0(param_1,"Insufficient memory for pCAL purpose",1);
        return pvVar4;
      }
      FUN_0044c490(puVar5,param_3,(uint)pcVar1);
      *(undefined4 *)(param_2 + 0xd4) = param_4;
      *(undefined4 *)(param_2 + 0xd8) = param_5;
      *(char *)(param_2 + 0xe4) = (char)param_6;
      *(char *)(param_2 + 0xe5) = (char)param_7;
      puVar5 = param_8;
      do {
        uVar3 = *puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
      } while ((char)uVar3 != '\0');
      pcVar1 = (char *)((int)puVar5 + (1 - ((int)param_8 + 1)));
      puVar5 = (uint *)FUN_004a4890(param_1,(SIZE_T)pcVar1);
      *(uint **)(param_2 + 0xdc) = puVar5;
      if (puVar5 != (uint *)0x0) {
        FUN_0044c490(puVar5,param_8,(uint)pcVar1);
        _Size = param_7 * 4 + 4;
        pvVar4 = (void *)FUN_004a4890(param_1,_Size);
        *(void **)(param_2 + 0xe0) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)FUN_0046f1c0(param_1,"Insufficient memory for pCAL params");
          return pvVar4;
        }
        pvVar4 = _memset(pvVar4,0,_Size);
        iVar8 = 0;
        if (0 < (int)param_7) {
          do {
            pcVar7 = *(char **)(param_9 + iVar8 * 4);
            pcVar1 = pcVar7 + 1;
            do {
              cVar2 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            puVar5 = (uint *)FUN_004a4890(param_1,(SIZE_T)(pcVar7 + (1 - (int)pcVar1)));
            *(uint **)(*(int *)(param_2 + 0xe0) + iVar8 * 4) = puVar5;
            if (puVar5 == (uint *)0x0) {
              pvVar4 = (void *)FUN_0046f1c0(param_1,"Insufficient memory for pCAL parameter");
              return pvVar4;
            }
            uVar9 = FUN_0044c490(puVar5,*(uint **)(param_9 + iVar8 * 4),
                                 (uint)(pcVar7 + (1 - (int)pcVar1)));
            pvVar4 = (void *)uVar9;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)param_7);
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
        *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x80;
        return pvVar4;
      }
      pvVar4 = (void *)FUN_0046f1c0(param_1,"Insufficient memory for pCAL units");
      return pvVar4;
    }
    in_EAX = (void *)FUN_0046f6d0(param_1,"Invalid pCAL equation type",1);
  }
  return in_EAX;
}


