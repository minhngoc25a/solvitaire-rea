// Function: FUN_004873c0
// Entry: 004873c0
// Size: 78 bytes
// Thunk: false
// External: false


void FUN_004873c0(UINT param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  
  FUN_00497a00(2,"Fatal Internal Error in libarchive: ",0x24);
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00497a00(2,param_2,(int)pcVar3 - (int)(param_2 + 1));
  FUN_00497a00(2,&DAT_0052b9d0,1);
  FUN_00480212(param_1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


