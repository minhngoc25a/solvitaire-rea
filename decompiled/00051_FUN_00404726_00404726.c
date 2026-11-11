// Function: FUN_00404726
// Entry: 00404726
// Size: 362 bytes
// Thunk: false
// External: false


int __cdecl FUN_00404726(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined *puVar3;
  int iVar4;
  
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fputs("jreSearch()\n",DAT_00410a2c);
  }
  bVar1 = FUN_00402168(0x12);
  DAT_00418c50 = CONCAT31(extraout_var,bVar1);
  if (DAT_00410a2c != (FILE *)0x0) {
    puVar3 = &DAT_0040d0f1;
    if (DAT_00418c50 == 0) {
      puVar3 = &DAT_0040d0f5;
    }
    fprintf(DAT_00410a2c,"Requires JDK:\t%s\n",puVar3);
  }
  bVar1 = FUN_00402168(0x1d);
  DAT_00418c54 = CONCAT31(extraout_var_00,bVar1);
  if (DAT_00410a2c != (FILE *)0x0) {
    puVar3 = &DAT_0040d0f1;
    if (DAT_00418c54 == 0) {
      puVar3 = &DAT_0040d0f5;
    }
    fprintf(DAT_00410a2c,"Requires 64-Bit: %s\n",puVar3);
  }
  FUN_0040206e(2,&DAT_00418c5c);
  FUN_004023b8(&DAT_00418d5c,&DAT_00418c5c);
  if (DAT_00410a2c != (FILE *)0x0) {
    fprintf(DAT_00410a2c,"Java min ver:\t%s\n",&DAT_00418d5c);
  }
  FUN_0040206e(3,&DAT_00418cdc);
  FUN_004023b8(&DAT_00418ddc,&DAT_00418cdc);
  if (DAT_00410a2c != (FILE *)0x0) {
    fprintf(DAT_00410a2c,"Java max ver:\t%s\n",&DAT_00418ddc);
  }
  iVar4 = 1;
  iVar2 = FUN_0040449f(param_1,param_2);
  if (iVar2 == 0) {
    bVar1 = FUN_00404214();
    iVar4 = CONCAT31(extraout_var_01,bVar1);
    if (iVar4 == 0) {
      FUN_0040319c();
    }
  }
  return iVar4;
}


