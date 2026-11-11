// Function: FUN_00499640
// Entry: 00499640
// Size: 203 bytes
// Thunk: false
// External: false


void __cdecl FUN_00499640(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = FUN_0048bcc0((int)param_2);
  uVar1 = (ushort)uVar2;
  if (uVar1 < 0x6001) {
    if ((uVar1 != 0x6000) && (((uVar1 != 0x1000 && (uVar1 != 0x2000)) && (uVar1 != 0x4000)))) {
LAB_004996b2:
      FUN_0048bfb0((int)param_2);
      FUN_0048c000(param_2);
      FUN_00487380(param_1,0x2a,0x525870);
      return;
    }
  }
  else if ((uVar1 != 0xa000) && (uVar1 != 0xc000)) goto LAB_004996b2;
  FUN_0048c000(param_2);
  FUN_00487380(param_1,0x2a,0x524fd0);
  return;
}


