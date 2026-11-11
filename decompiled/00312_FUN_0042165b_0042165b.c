// Function: FUN_0042165b
// Entry: 0042165b
// Size: 111 bytes
// Thunk: false
// External: false


undefined4
FUN_0042165b(HANDLE param_1,int param_2,int param_3,int param_4,HANDLE param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_1c [20];
  int local_8;
  
  uVar4 = 0;
  iVar1 = GetObjectW(param_5,0x18,local_1c);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = local_8;
  }
  iVar2 = GetObjectW(param_1,0x18,local_1c);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = local_8;
  }
  if ((iVar3 != 0) && (iVar1 != 0)) {
    iVar3 = FUN_0047bc80(iVar3,param_6,param_7,param_8,iVar1,param_2,param_3,param_4,param_9);
    if (iVar3 != 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


