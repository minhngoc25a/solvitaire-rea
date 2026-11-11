// Function: ___security_init_cookie
// Entry: 0050ac14
// Size: 75 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_0053fbc0 == 0xbb40e64e) || ((DAT_0053fbc0 & 0xffff0000) == 0)) {
    DAT_0053fbc0 = FUN_0050ac5f();
    if (DAT_0053fbc0 == 0xbb40e64e) {
      DAT_0053fbc0 = 0xbb40e64f;
    }
    else if ((DAT_0053fbc0 & 0xffff0000) == 0) {
      DAT_0053fbc0 = DAT_0053fbc0 | (DAT_0053fbc0 | 0x4711) << 0x10;
    }
  }
  DAT_0053fc00 = ~DAT_0053fbc0;
  return;
}


