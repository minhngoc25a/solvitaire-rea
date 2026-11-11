// Function: __fpclass
// Entry: 0047d2b1
// Size: 164 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __fpclass
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __fpclass(double _X)

{
  byte bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    bVar1 = FUN_004bfd19(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
    iVar2 = CONCAT31(extraout_var,bVar1);
    if (iVar2 == 1) {
      return 0x200;
    }
    if (iVar2 == 2) {
      iVar2 = 4;
    }
    else {
      if (iVar2 != 3) {
        return 1;
      }
      iVar2 = 2;
    }
    return iVar2;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}


