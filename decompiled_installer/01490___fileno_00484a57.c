// Function: __fileno
// Entry: 00484a57
// Size: 39 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __fileno(FILE *_File)

{
  __acrt_ptd *p_Var1;
  
  if (_File == (FILE *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return -1;
  }
  return _File->_file;
}


