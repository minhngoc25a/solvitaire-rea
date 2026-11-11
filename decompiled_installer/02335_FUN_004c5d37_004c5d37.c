// Function: FUN_004c5d37
// Entry: 004c5d37
// Size: 146 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_004c5d37(uint param_1)

{
  __acrt_ptd *p_Var1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_14;
  
  if (param_1 < 0x2000) {
    uVar4 = 0;
    ___acrt_lock(7);
    iVar5 = 0;
    iVar3 = DAT_00544578;
    while (iVar3 <= (int)param_1) {
      if ((&DAT_00544378)[iVar5] == 0) {
        puVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_00544378)[iVar5] = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          uVar4 = 0xc;
          break;
        }
        iVar3 = DAT_00544578 + 0x40;
        DAT_00544578 = iVar3;
      }
      iVar5 = iVar5 + 1;
    }
    FUN_004c5dcc();
  }
  else {
    p_Var1 = FUN_0042470e();
    uVar4 = 9;
    *(undefined4 *)p_Var1 = 9;
    FUN_004243be();
  }
  ExceptionList = local_14;
  return uVar4;
}


