// Function: FUN_0046e040
// Entry: 0046e040
// Size: 540 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0046e040(int param_1,int param_2,char *param_3,uint param_4,char *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  char cVar5;
  uint extraout_EDX;
  char cVar6;
  undefined8 uVar7;
  char local_dc [24];
  char local_c4 [196];
  
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
  uVar1 = FUN_0046f470((int)local_c4,0xc4,0,"profile \'");
  uVar1 = FUN_0046f470((int)local_c4,uVar1 + 0x4f,uVar1,param_3);
  uVar2 = FUN_0046f470((int)local_c4,0xc4,uVar1,"\': ");
  uVar4 = param_4 >> 0x18;
  uVar1 = param_4;
  if ((((uVar4 == 0x20) || ((0x2f < uVar4 && (uVar4 < 0x3a)))) || ((0x40 < uVar4 && (uVar4 < 0x5b)))
      ) || ((0x60 < uVar4 && (uVar4 < 0x7b)))) {
    uVar4 = param_4 >> 0x10 & 0xff;
    if (((((uVar4 == 0x20) || ((0x2f < uVar4 && (uVar4 < 0x3a)))) ||
         ((0x40 < uVar4 && (uVar4 < 0x5b)))) || ((0x60 < uVar4 && (uVar4 < 0x7b)))) &&
       ((((uVar4 = param_4 & 0xff00, uVar4 == 0x2000 || ((0x2fff < uVar4 && (uVar4 < 0x3901)))) ||
         ((0x40ff < uVar4 && (uVar4 < 0x5a01)))) || ((0x60ff < uVar4 && (uVar4 < 0x7a01)))))) {
      iVar3 = FUN_0046e010(param_4 & 0xff);
      uVar1 = extraout_EDX;
      if (iVar3 != 0) {
        cVar6 = '?';
        local_c4[uVar2] = '\'';
        (local_c4 + uVar2 + 5)[0] = '\'';
        (local_c4 + uVar2 + 5)[1] = ':';
        cVar5 = '?';
        if (extraout_ECX - 0x20U < 0x5f) {
          cVar5 = (char)(param_4 >> 0x18);
        }
        uVar4 = param_4 >> 0x10 & 0xff;
        local_c4[uVar2 + 1] = cVar5;
        uVar1 = 0x3f;
        if (uVar4 - 0x20 < 0x5f) {
          uVar1 = uVar4;
        }
        uVar4 = param_4 >> 8 & 0xff;
        local_c4[uVar2 + 2] = (char)uVar1;
        uVar1 = 0x3f;
        if (uVar4 - 0x20 < 0x5f) {
          uVar1 = uVar4;
        }
        local_c4[uVar2 + 3] = (char)uVar1;
        if ((param_4 & 0xff) - 0x20 < 0x5f) {
          cVar6 = (char)param_4;
        }
        local_c4[uVar2 + 4] = cVar6;
        local_c4[uVar2 + 7] = ' ';
        uVar2 = uVar2 + 8;
        goto LAB_0046e21d;
      }
    }
  }
  uVar7 = FUN_0046f4b0(local_dc,(int)local_c4,3,uVar1);
  uVar1 = FUN_0046f470((int)local_c4,0xc4,uVar2,(char *)uVar7);
  uVar2 = FUN_0046f470((int)local_c4,0xc4,uVar1,"h: ");
LAB_0046e21d:
  FUN_0046f470((int)local_c4,0xc4,uVar2,param_5);
  FUN_0046f6d0(param_1,local_c4,(param_2 != 0) + 1);
  return 0;
}


