// Function: _TestDefaultCountry
// Entry: 004c3d08
// Size: 37 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _TestDefaultCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_0051ab68 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


