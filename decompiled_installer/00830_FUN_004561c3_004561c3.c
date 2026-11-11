// Function: FUN_004561c3
// Entry: 004561c3
// Size: 85 bytes
// Thunk: false
// External: false


int __thiscall FUN_004561c3(void *this,int param_1)

{
  int *piVar1;
  ushort uVar2;
  undefined2 extraout_var;
  byte *pbVar3;
  int iVar4;
  
  piVar1 = *(int **)((int)this + 8);
  if ((char)piVar1[5] == '\0') {
    FUN_0044ef90(piVar1);
  }
  pbVar3 = *(byte **)((int)this + 0x30);
  iVar4 = 0;
  if (0 < param_1) {
    do {
      if (*pbVar3 == 0) {
        return iVar4;
      }
      uVar2 = ___acrt_locale_get_ctype_array_value(*(int *)piVar1[3],(uint)*pbVar3,0x8000);
      if (CONCAT22(extraout_var,uVar2) != 0) {
        pbVar3 = pbVar3 + 1;
      }
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  return iVar4;
}


