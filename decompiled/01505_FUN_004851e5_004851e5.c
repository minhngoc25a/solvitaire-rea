// Function: FUN_004851e5
// Entry: 004851e5
// Size: 147 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0048526f) */

char __cdecl
FUN_004851e5(double *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  short unaff_DI;
  ulonglong uVar3;
  
  uVar3 = __aullshr((byte)param_4,*(uint *)((int)param_1 + 4) & param_3 & 0xfffff);
  if (param_5 == 0) {
    cVar1 = '\x01' - (((uint)uVar3 & 0xffff) < 8);
  }
  else {
    iVar2 = fegetround();
    if (iVar2 == 0) {
      cVar1 = fe_to_nearest(param_1,CONCAT44(param_4,param_3),unaff_DI);
    }
    else {
      if (iVar2 == 0x200) {
        if ((short)uVar3 == 0) {
          return '\0';
        }
        if (*(int *)((int)param_1 + 4) < 0) {
          return '\0';
        }
      }
      else {
        if (iVar2 != 0x100) {
          return '\0';
        }
        if ((short)uVar3 == 0) {
          return '\0';
        }
        if (0 < *(int *)((int)param_1 + 4)) {
          return '\0';
        }
        if (-1 < *(int *)((int)param_1 + 4)) {
          return '\0';
        }
      }
      cVar1 = '\x01';
    }
  }
  return cVar1;
}


