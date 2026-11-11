// Function: FUN_0046e260
// Entry: 0046e260
// Size: 483 bytes
// Thunk: false
// External: false


int __cdecl FUN_0046e260(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar4 = 0x10000;
  uVar5 = 0;
  if (((byte)*(undefined4 *)(param_1 + 0x20c) & 0x30) == 0x30) {
    return 0;
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if ((((CONCAT31(CONCAT21(CONCAT11((char)param_2[0x15],*(undefined1 *)((int)param_2 + 0x55)),
                             *(undefined1 *)((int)param_2 + 0x56)),
                    *(undefined1 *)((int)param_2 + 0x57)) == *(int *)((int)&DAT_0050da3c + uVar1))
         && (CONCAT31(CONCAT21(CONCAT11((char)param_2[0x16],*(undefined1 *)((int)param_2 + 0x59)),
                               *(undefined1 *)((int)param_2 + 0x5a)),
                      *(undefined1 *)((int)param_2 + 0x5b)) == *(int *)((int)&DAT_0050da40 + uVar1))
         ) && (CONCAT31(CONCAT21(CONCAT11((char)param_2[0x17],*(undefined1 *)((int)param_2 + 0x5d)),
                                 *(undefined1 *)((int)param_2 + 0x5e)),
                        *(undefined1 *)((int)param_2 + 0x5f)) ==
               *(int *)((int)&DAT_0050da44 + uVar1))) &&
       (CONCAT31(CONCAT21(CONCAT11((char)param_2[0x18],*(undefined1 *)((int)param_2 + 0x61)),
                          *(undefined1 *)((int)param_2 + 0x62)),*(undefined1 *)((int)param_2 + 99))
        == *(int *)((int)&DAT_0050da48 + uVar1))) {
      if (uVar5 == 0) {
        uVar5 = CONCAT31(CONCAT21(CONCAT11((char)*param_2,*(undefined1 *)((int)param_2 + 1)),
                                  *(undefined1 *)((int)param_2 + 2)),
                         *(undefined1 *)((int)param_2 + 3));
        uVar4 = CONCAT31(CONCAT21(CONCAT11((char)param_2[0x10],*(undefined1 *)((int)param_2 + 0x41))
                                  ,*(undefined1 *)((int)param_2 + 0x42)),
                         *(undefined1 *)((int)param_2 + 0x43));
      }
      if ((uVar5 == *(uint *)((int)&DAT_0050da38 + uVar1)) &&
         (uVar4 == *(ushort *)((int)&DAT_0050da4e + uVar1))) {
        if (param_3 == 0) {
          uVar4 = thunk_FUN_004a4c70(0,(byte *)0x0,0);
          param_3 = thunk_FUN_004a4c70(uVar4,(byte *)param_2,uVar5);
        }
        iVar3 = iVar2 * 0x20;
        if (param_3 != (&DAT_0050da30)[iVar2 * 8]) {
LAB_0046e428:
          FUN_0046f6d0(param_1,"Not recognizing known sRGB profile that has been edited",0);
          return 0;
        }
        uVar4 = thunk_FUN_0048b320(0,(uint *)0x0,0);
        uVar4 = thunk_FUN_0048b320(uVar4,param_2,uVar5);
        if (uVar4 != (&DAT_0050da34)[iVar2 * 8]) goto LAB_0046e428;
        if ((&DAT_0050da4d)[iVar3] == '\0') {
          if ((&DAT_0050da4c)[iVar3] != '\0') goto LAB_0046e41a;
          iVar2 = 0;
          pcVar6 = "out-of-date sRGB profile with no signature";
        }
        else {
          iVar2 = 2;
          pcVar6 = "known incorrect sRGB profile";
        }
        FUN_0046f6d0(param_1,pcVar6,iVar2);
LAB_0046e41a:
        return (byte)(&DAT_0050da4d)[iVar3] + 1;
      }
    }
    uVar1 = uVar1 + 0x20;
    iVar2 = iVar2 + 1;
    if (0xdf < uVar1) {
      return 0;
    }
  } while( true );
}


