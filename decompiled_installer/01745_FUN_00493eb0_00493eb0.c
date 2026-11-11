// Function: FUN_00493eb0
// Entry: 00493eb0
// Size: 213 bytes
// Thunk: false
// External: false


undefined1 * __cdecl FUN_00493eb0(undefined1 *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *puVar7;
  
  *param_1 = 0;
  uVar4 = -param_2 & param_2;
  do {
    if (uVar4 == 0) {
      return param_1;
    }
    param_2 = param_2 & ~uVar4;
    if (uVar4 < 0x11) {
      if (uVar4 == 0x10) {
        pcVar2 = "eof";
        pcVar3 = pcVar2;
      }
      else if (uVar4 == 1) {
        pcVar2 = "new";
        pcVar3 = pcVar2;
      }
      else if (uVar4 == 2) {
        pcVar2 = "header";
        pcVar3 = pcVar2;
      }
      else {
        if (uVar4 != 4) goto LAB_00493f15;
        pcVar2 = "data";
        pcVar3 = pcVar2;
      }
    }
    else if (uVar4 == 0x20) {
      pcVar2 = "closed";
      pcVar3 = pcVar2;
    }
    else if (uVar4 == 0x8000) {
      pcVar2 = "fatal";
      pcVar3 = pcVar2;
    }
    else {
LAB_00493f15:
      pcVar2 = "??";
      pcVar3 = pcVar2;
    }
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar6 = param_1 + -1;
    do {
      pcVar5 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = pcVar3;
    for (uVar4 = (uint)((int)pcVar2 - (int)pcVar3) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = (int)pcVar2 - (int)pcVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if (param_2 != 0) {
      puVar7 = (undefined2 *)(param_1 + -1);
      do {
        pcVar3 = (char *)((int)puVar7 + 1);
        puVar7 = (undefined2 *)((int)puVar7 + 1);
      } while (*pcVar3 != '\0');
      *puVar7 = DAT_00529d38;
    }
    uVar4 = -param_2 & param_2;
  } while( true );
}


