// Function: FUN_0047f3fd
// Entry: 0047f3fd
// Size: 189 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0047f3fd(int param_1,int *param_2)

{
  ushort uVar1;
  uint in_EAX;
  ushort *puVar2;
  undefined2 extraout_var;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2[2] == 0) {
    if ((param_2[1] != 2) || (in_EAX = FUN_0047f2dc(*param_2,2), (char)in_EAX == '\0')) {
      if (param_2[1] != 3) goto LAB_0047f4a9;
      iVar3 = *param_2;
      do {
        uVar1 = *(ushort *)(iVar3 + uVar4 * 2);
        puVar2 = ___pctype_func();
        uVar1 = ___acrt_locale_get_ctype_array_value((int)puVar2,(uint)uVar1,4);
        in_EAX = 0;
        if (CONCAT22(extraout_var,uVar1) == 0) goto LAB_0047f4a9;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
    iVar3 = FUN_004c2925((short *)(param_1 + 0x80),0x40,*param_2,param_2[1]);
    if (iVar3 == 0) {
      iVar3 = FUN_004c2832((short *)(param_1 + 0x120),0x55,L"-",1);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_004c2832((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]),
         iVar3 == 0)) {
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_0047f4a9:
  return in_EAX & 0xffffff00;
}


