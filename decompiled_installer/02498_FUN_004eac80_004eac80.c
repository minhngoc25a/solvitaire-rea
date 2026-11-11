// Function: FUN_004eac80
// Entry: 004eac80
// Size: 575 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004eac80(uint *param_1,int *param_2,int param_3,uint *param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  piVar3 = param_2;
  puVar2 = param_1;
  if (*(char *)((int)param_1 + 0xa9d) == '\0') {
    if (param_2[5] == param_2[7]) {
      if (param_2[0x14] == 0) {
        return 0;
      }
    }
    else {
      (*(code *)param_2[0xb])(param_2,1);
      piVar3[6] = 0;
      puVar2[puVar2[6] + 8] = 0;
      puVar2[puVar2[6] + 0x42] = (uint)(puVar2 + 0x1aab);
      puVar2[6] = puVar2[6] + 1;
      FUN_004ea4f0((int)puVar2,(int)(puVar2 + 0x2ab),8,(uint)*(byte *)*piVar3);
    }
    *(undefined1 *)((int)puVar2 + 0xa9d) = 1;
  }
  uVar6 = piVar3[5] - piVar3[6];
  uVar4 = FUN_004ea590(puVar2,param_3,(int *)param_4,param_5);
  while( true ) {
    if ((char)uVar4 != '\0') {
      return 0;
    }
    if ((param_6 != 0xffffffff) &&
       (((param_6 <= (uint)(piVar3[5] - piVar3[6]) ||
         (uVar5 = *param_4 + puVar2[2],
         puVar2[3] + (uint)CARRY4(*param_4,puVar2[2]) + (uint)(0xfffffffb < uVar5) != 0)) ||
        (0xeffe < uVar5 + 4)))) break;
    if ((uint)piVar3[7] <= (uint)piVar3[5]) {
      if (piVar3[0x14] == 0) {
        return 0;
      }
      if (piVar3[6] == 0) break;
    }
    if ((char)puVar2[0x2a7] == '\0') {
      FUN_00505ef0(puVar2,piVar3,&local_4,(uint *)&param_1,uVar6);
    }
    else {
      FUN_00505aa0((int)puVar2,piVar3,&local_4,(uint *)&param_1);
    }
    FUN_004eb420((int)puVar2,piVar3,local_4,(uint)param_1,uVar6);
    uVar6 = uVar6 + (int)param_1;
    uVar4 = FUN_004ea590(puVar2,param_3,(int *)param_4,param_5);
  }
  if (*(char *)((int)puVar2 + 0xa9e) == '\0') {
    *(undefined1 *)((int)puVar2 + 0xa9e) = 1;
    if (param_6 == 0xffffffff) {
      uVar5 = puVar2[0x7c];
      uVar1 = puVar2[0x2a8];
      puVar2[puVar2[6] + 8] = 1;
      puVar2[puVar2[6] + 0x42] = (int)puVar2 + (uVar5 * 0x10 + 0x3556 + (uVar1 & uVar6)) * 2;
      puVar2[6] = puVar2[6] + 1;
      uVar5 = puVar2[0x7c];
      puVar2[puVar2[6] + 8] = 0;
      puVar2[puVar2[6] + 0x42] = (int)puVar2 + (uVar5 + 0x3616) * 2;
      puVar2[6] = puVar2[6] + 1;
      FUN_004eb160((int)puVar2,uVar1 & uVar6,0xffffffff,2);
    }
    puVar2[puVar2[6] + 8] = 4;
    puVar2[6] = puVar2[6] + 1;
    puVar2[puVar2[6] + 8] = 4;
    puVar2[6] = puVar2[6] + 1;
    puVar2[puVar2[6] + 8] = 4;
    puVar2[6] = puVar2[6] + 1;
    puVar2[puVar2[6] + 8] = 4;
    puVar2[6] = puVar2[6] + 1;
    puVar2[puVar2[6] + 8] = 4;
    puVar2[6] = puVar2[6] + 1;
    uVar4 = FUN_004ea590(puVar2,param_3,(int *)param_4,param_5);
    if ((char)uVar4 != '\0') {
      return 0;
    }
  }
  *(undefined1 *)((int)puVar2 + 0xa9e) = 0;
  return 1;
}


