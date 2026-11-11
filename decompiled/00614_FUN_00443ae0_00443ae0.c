// Function: FUN_00443ae0
// Entry: 00443ae0
// Size: 271 bytes
// Thunk: false
// External: false


int __cdecl FUN_00443ae0(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_4c [3];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20 [8];
  
  if (param_2 == (uint *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc7c5);
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if ((param_1 == (int *)0x0) || (((*param_1 != 5 && (*param_1 != 2)) || (param_1[1] == 0)))) {
    iVar4 = -2;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    uVar2 = ((uint)(*param_1 == 5) * 2 + 2) * param_1[1];
    *param_2 = uVar2;
    param_2[2] = uVar2;
    if (*param_1 == 5) {
      iVar4 = param_1[1] * 4;
    }
    else {
      iVar4 = param_1[1] * 2;
    }
    *param_2 = uVar2 + iVar4;
    uVar1 = DAT_0050c098;
    param_2[3] = uVar2 + iVar4 + 7 & 0xfffffff8;
    puVar3 = FUN_00428150(local_20,*param_1,param_1[1],1,uVar1,param_1[4]);
    local_40 = *puVar3;
    uStack_3c = puVar3[1];
    uStack_38 = puVar3[2];
    uStack_34 = puVar3[3];
    local_30 = puVar3[4];
    uStack_2c = puVar3[5];
    uStack_28 = puVar3[6];
    uStack_24 = puVar3[7];
    iVar4 = FUN_00441b30((int)&local_40,local_4c);
    if (iVar4 == 0) {
      *param_2 = *param_2 + 7 + local_4c[0] & 0xfffffff8;
      return 0;
    }
  }
  return iVar4;
}


