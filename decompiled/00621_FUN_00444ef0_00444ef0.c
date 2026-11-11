// Function: FUN_00444ef0
// Entry: 00444ef0
// Size: 276 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00444ef0(int param_1,uint param_2,int param_3,uint param_4,undefined1 *param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_8;
  
  if (((param_5 == (undefined1 *)0x0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0xfffffffe;
  }
  local_8 = 0;
  if (param_4 != 0) {
    iVar3 = param_3 - (int)param_5;
    do {
      *param_5 = 0xff;
      if (param_3 == 0) {
        cVar1 = FUN_00448a20(0,param_4,local_8);
      }
      else {
        cVar1 = param_5[iVar3];
      }
      uVar4 = 0;
      if (param_2 != 0) {
        do {
          if (param_1 == 0) {
            cVar2 = FUN_00448a20(0,param_2,uVar4);
          }
          else if (uVar4 < param_2) {
            cVar2 = *(char *)(uVar4 + param_1);
          }
          else {
            cVar2 = '\0';
          }
          if (cVar1 == cVar2) {
            *param_5 = (char)uVar4;
            break;
          }
          switch(cVar1) {
          case '\x02':
          case '\v':
            if (cVar2 != '\x02') {
              bVar5 = cVar2 == '\v';
LAB_00444fc4:
              if (!bVar5) goto switchD_00444fa8_caseD_4;
            }
            break;
          case '\x03':
          case '\f':
            if (cVar2 != '\x03') {
              bVar5 = cVar2 == '\f';
              goto LAB_00444fc4;
            }
            break;
          default:
            goto switchD_00444fa8_caseD_4;
          }
          *param_5 = (char)uVar4;
switchD_00444fa8_caseD_4:
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
      }
      local_8 = local_8 + 1;
      param_5 = param_5 + 1;
    } while (local_8 < param_4);
  }
  return 0;
}


