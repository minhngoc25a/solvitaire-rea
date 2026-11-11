// Function: FUN_004766d4
// Entry: 004766d4
// Size: 67 bytes
// Thunk: false
// External: false


HBITMAP __cdecl FUN_004766d4(HBITMAP param_1,int param_2,int param_3)

{
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  ushort local_a;
  
  GetObjectW(param_1,0x18,local_1c);
  if ((local_18 != param_2) || (local_14 != param_3)) {
    param_1 = FUN_0047baee(param_1,local_18,local_14,param_2,param_3,(uint)local_a,0);
  }
  return param_1;
}


