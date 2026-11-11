// Function: FUN_0047b191
// Entry: 0047b191
// Size: 222 bytes
// Thunk: false
// External: false


void FUN_0047b191(int param_1,HBITMAP param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  DWORD DVar1;
  int iVar2;
  HBITMAP ho;
  undefined1 local_70 [4];
  int local_6c;
  int local_68;
  ushort local_5e;
  undefined1 local_1c [24];
  
  DVar1 = GetObjectType(param_2);
  if (DVar1 == 7) {
    iVar2 = GetObjectW(param_2,0x54,local_70);
    if (iVar2 == 0x54) {
      if ((((param_5 == -1) || (param_5 == local_6c)) && ((param_6 == -1 || (param_6 == local_68))))
         && (0x17 < local_5e)) {
        FUN_0047adcf(param_1,param_2,param_3,param_4,param_7,param_8);
        return;
      }
      ho = FUN_0047ae46(param_2,param_5,param_6);
      if (ho == (HBITMAP)0x0) {
        return;
      }
      FUN_0047adcf(param_1,ho,param_3,param_4,param_7,param_8);
      goto LAB_0047b263;
    }
    iVar2 = GetObjectW(param_2,0x18,local_1c);
    if (iVar2 != 0x18) {
      return;
    }
    ho = FUN_0047aff0(param_2);
    if (ho == (HBITMAP)0x0) {
      return;
    }
  }
  else {
    ho = FUN_004be98d((HICON)param_2);
    if (ho == (HBITMAP)0x0) {
      return;
    }
    param_8 = 1;
  }
  FUN_0047b191(param_1,ho,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_0047b263:
  DeleteObject(ho);
  return;
}


