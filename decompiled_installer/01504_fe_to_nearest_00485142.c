// Function: fe_to_nearest
// Entry: 00485142
// Size: 163 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl fe_to_nearest(double const * const,unsigned __int64,short)
   
   Library: Visual Studio 2019 Release */

bool __cdecl fe_to_nearest(double *param_1,__uint64 param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  uVar2 = *(uint *)param_1;
  bVar3 = (byte)(param_2 >> 0x20);
  uVar4 = __aullshr(bVar3,uVar1 & (uint)param_2 & 0xfffff);
  if ((ushort)uVar4 < 9) {
    if ((ushort)uVar4 < 8) {
      return false;
    }
    lVar5 = __allshl(bVar3,0);
    if (((uint)(lVar5 + -1) & uVar2) == 0 &&
        ((uint)((ulonglong)(lVar5 + -1) >> 0x20) & uVar1 & 0xfffff) == 0) {
      if (param_2._4_2_ == 0x30) {
        bVar3 = 0;
        if ((uVar1 & 0x7ff00000) != 0) {
          bVar3 = 1;
        }
      }
      else {
        uVar4 = __aullshr(bVar3,uVar1 >> 4 & (uint)param_2 & 0xffff);
        bVar3 = (byte)uVar4;
      }
      return (bool)(bVar3 & 1);
    }
  }
  return true;
}


