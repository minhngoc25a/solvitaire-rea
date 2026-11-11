// Function: FUN_00402168
// Entry: 00402168
// Size: 67 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00402168(uint param_1)

{
  int iVar1;
  char *pcVar2;
  char local_20 [24];
  
  pcVar2 = local_20;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  FUN_0040206e(param_1,local_20);
  iVar1 = strcmp(local_20,"true");
  return iVar1 == 0;
}


