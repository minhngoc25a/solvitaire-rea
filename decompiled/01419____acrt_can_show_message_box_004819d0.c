// Function: ___acrt_can_show_message_box
// Entry: 004819d0
// Size: 39 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_can_show_message_box
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 ___acrt_can_show_message_box(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_004c5535();
  if (iVar1 == 1) {
    iVar1 = FUN_00481daf();
    if (iVar1 != 0) {
      iVar1 = FUN_00481dc9();
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


