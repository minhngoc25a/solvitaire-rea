// Function: FUN_0049ac20
// Entry: 0049ac20
// Size: 180 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0049ac20(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,uint *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  char *pcVar4;
  
  puVar1 = (undefined4 *)FUN_0047f911(1,0x38);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_4 == 0) {
      iVar2 = FUN_0048dd00((int)(puVar1 + 1),param_5);
    }
    else {
      iVar2 = FUN_0048dca0(puVar1 + 1,param_5);
    }
    if (-1 < iVar2) {
      *puVar1 = 0xffffffff;
      iVar2 = FUN_00494670(param_3,(uint)puVar1,0x49aa00,0x49abc0,0x49a9c0,0x49a9e0);
      return iVar2;
    }
    p_Var3 = FUN_0042470e();
    if (*(int *)p_Var3 != 0xc) {
      pcVar4 = "Can\'t convert \'%S\' to MBS";
      if (param_4 != 0) {
        pcVar4 = "Can\'t convert \'%s\' to WCS";
      }
      FUN_00487380((int)param_3,0xffffffff,(int)pcVar4);
      return -0x19;
    }
  }
  FUN_00487380((int)param_3,0xc,0x5237ac);
  return -0x1e;
}


