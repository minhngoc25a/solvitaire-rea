// Function: _tolower
// Entry: 004d2f79
// Size: 48 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_005441f0 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = FUN_004d2fa9(_C,(int *)0x0);
  }
  return _C;
}


