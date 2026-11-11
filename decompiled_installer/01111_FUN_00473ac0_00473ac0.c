// Function: FUN_00473ac0
// Entry: 00473ac0
// Size: 377 bytes
// Thunk: false
// External: false


void __cdecl FUN_00473ac0(int *param_1,byte *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (*(char *)((int)param_1 + 9) == '\b') {
    cVar1 = (char)param_1[2];
    if (cVar1 == '\x02') {
      iVar2 = iVar5;
      pbVar3 = param_2;
      if (param_3 != 0) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pbVar3 = *(byte *)((((*param_2 & 0xf8) << 5 | param_2[1] & 0xf8) << 2 |
                              (uint)(param_2[2] >> 3)) + param_3);
          param_2 = param_2 + 3;
          pbVar3 = pbVar3 + 1;
        }
        bVar4 = *(byte *)((int)param_1 + 9);
        *(undefined1 *)(param_1 + 2) = 3;
        *(undefined1 *)((int)param_1 + 10) = 1;
        *(byte *)((int)param_1 + 0xb) = bVar4;
        if (7 < bVar4) {
          param_1[1] = (uint)(bVar4 >> 3) * iVar5;
          return;
        }
LAB_00473bf2:
        param_1[1] = (uint)bVar4 * iVar5 + 7 >> 3;
        return;
      }
    }
    else if (cVar1 == '\x06') {
      iVar2 = iVar5;
      pbVar3 = param_2;
      if (param_3 != 0) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pbVar3 = *(byte *)((((*param_2 & 0xf8) << 5 | param_2[1] & 0xf8) << 2 |
                              (uint)(param_2[2] >> 3)) + param_3);
          param_2 = param_2 + 4;
          pbVar3 = pbVar3 + 1;
        }
        bVar4 = *(byte *)((int)param_1 + 9);
        *(undefined1 *)(param_1 + 2) = 3;
        *(undefined1 *)((int)param_1 + 10) = 1;
        *(byte *)((int)param_1 + 0xb) = bVar4;
        if (7 < bVar4) {
          param_1[1] = (uint)(bVar4 >> 3) * iVar5;
          return;
        }
        goto LAB_00473bf2;
      }
    }
    else if ((cVar1 == '\x03') && (param_4 != 0)) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_2 = *(byte *)((uint)*param_2 + param_4);
        param_2 = param_2 + 1;
      }
    }
  }
  return;
}


