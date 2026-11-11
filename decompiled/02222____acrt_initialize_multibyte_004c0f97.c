// Function: ___acrt_initialize_multibyte
// Entry: 004c0f97
// Size: 72 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_initialize_multibyte(void)

{
  int in_EAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_00544a9c == '\0') {
    DAT_00544a94 = &DAT_00540e48;
    DAT_00544a90 = &DAT_00541170;
    DAT_00544a8c = &DAT_00541068;
    p_Var1 = FUN_0047dca7();
    in_EAX = FUN_004c1358(-3,'\x01',(int)p_Var1,&DAT_00544a94);
    DAT_00544a9c = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


