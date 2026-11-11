// Function: FUN_0048f250
// Entry: 0048f250
// Size: 217 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048f250(uint *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    *param_1 = 0xfffd;
    return -1;
  }
  if (param_4 == 0) {
    uVar1 = param_2[1];
    uVar2 = *param_2;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
  }
  uVar3 = (uint)CONCAT11(uVar1,uVar2);
  puVar4 = param_2 + 2;
  if (0xd7ff < uVar3) {
    if (uVar3 < 0xdc00) {
      if (param_3 < 4) {
LAB_0048f30a:
        *param_1 = 0xfffd;
        return -2;
      }
      if (param_4 == 0) {
        uVar1 = param_2[3];
        uVar2 = *puVar4;
      }
      else {
        uVar1 = *puVar4;
        uVar2 = param_2[3];
      }
      if (0x3ff < CONCAT11(uVar1,uVar2) - 0xdc00) goto LAB_0048f30a;
      puVar4 = param_2 + 4;
      uVar3 = uVar3 * 0x400 + -0x35fdc00 + (uint)CONCAT11(uVar1,uVar2);
      if (uVar3 < 0xd800) goto LAB_0048f2f1;
    }
    if (uVar3 < 0xe000) goto LAB_0048f2f9;
  }
LAB_0048f2f1:
  if (uVar3 < 0x110000) {
    *param_1 = uVar3;
    return (int)puVar4 - (int)param_2;
  }
LAB_0048f2f9:
  *param_1 = 0xfffd;
  return (int)param_2 - (int)puVar4;
}


