// Function: FUN_004549be
// Entry: 004549be
// Size: 127 bytes
// Thunk: false
// External: false


void __thiscall FUN_004549be(void *this,byte *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  
  iVar1 = param_4[6];
  iVar2 = param_4[7];
  pbVar4 = param_1 + param_2;
  do {
    if (param_1 == pbVar4) {
LAB_00454a2b:
      param_4[6] = iVar1;
      param_4[7] = iVar2;
      return;
    }
    bVar3 = FUN_00454a75(this,*param_1,param_4);
    if (bVar3) {
LAB_00454a15:
      *param_3 = *param_3 + 1;
    }
    else {
      if (((char)param_4[7] == '\0') || (param_4[6] != 0x2a)) {
        *param_3 = -1;
        goto LAB_00454a2b;
      }
      bVar3 = FUN_00454a75(this,0x3f,param_4);
      if (bVar3) goto LAB_00454a15;
      *param_3 = -1;
    }
    param_1 = param_1 + 1;
  } while( true );
}


