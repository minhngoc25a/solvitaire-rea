// Function: FUN_0043a100
// Entry: 0043a100
// Size: 390 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0043a100(uint *param_1,int *param_2,ushort *param_3,undefined4 param_4,uint *param_5)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_EBX;
  uint **lpWideCharStr;
  int *apiStack_8 [2];
  
  puVar1 = param_1;
  if (param_1 == (uint *)0x0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5419);
  }
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pMMDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x541a);
  }
  puVar3 = param_5;
  if (param_5 == (uint *)0x0) {
    FID_conflict___assert
              (L"pInfo != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x541b);
  }
  iVar4 = FUN_0043a050(puVar1,piVar2,puVar3);
  if ((iVar4 == 0) && (param_3 != (ushort *)0x0)) {
    iVar4 = FUN_00435d80((ushort *)puVar3,param_3);
    if (iVar4 == 0) {
      puVar3[0x80] = 1;
    }
  }
  lpWideCharStr = &param_1;
  iVar4 = (**(code **)(*piVar2 + 0x10))();
  if (-1 < iVar4) {
    unaff_EBX = (int *)0x0;
    iVar4 = (**(code **)(*apiStack_8[0] + 0x14))(apiStack_8[0],&DAT_0050c238,&stack0xffffffdc);
    if (-1 < iVar4) {
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)lpWideCharStr,-1,(LPSTR)(puVar3 + 0x40),0x100,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      (*(code *)puVar1[0x52])(&stack0xffffffd0);
    }
    (**(code **)(iRam00000000 + 8))(0);
  }
  if (param_1 == (uint *)0x0) {
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,&DAT_0050c270,0x17,0,apiStack_8);
    if (-1 < iVar4) {
      uVar5 = FUN_00439aa0(puVar1,piVar2,unaff_EBX,(int)puVar3);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      return uVar5;
    }
    if (puVar1 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = puVar1[0xe];
    }
    FUN_004277a0(uVar6,1,0x52f6f0);
    uVar5 = FUN_00435aa0(iVar4);
    return uVar5;
  }
  return 0;
}


