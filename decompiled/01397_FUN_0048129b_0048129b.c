// Function: FUN_0048129b
// Entry: 0048129b
// Size: 179 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0048129b(char *param_1,char *param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    return 0;
  }
  if (param_3 != 0) {
    *param_2 = '\0';
  }
  if (param_3 < 2) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    return 0;
  }
  for (; cVar3 = *param_1, cVar3 == ';'; param_1 = param_1 + 1) {
  }
  pcVar4 = param_2 + (param_3 - 1);
  pcVar2 = param_1;
  while (cVar3 != '\0') {
    if (cVar3 == ';') goto LAB_00481337;
    pcVar2 = pcVar2 + 1;
    if (cVar3 == '\"') {
      while ((cVar3 = *pcVar2, cVar3 != '\0' && (pcVar2 = pcVar2 + 1, cVar3 != '\"'))) {
        *param_2 = cVar3;
        param_2 = param_2 + 1;
        if (param_2 == pcVar4) goto LAB_00481326;
      }
    }
    else {
      *param_2 = cVar3;
      param_2 = param_2 + 1;
      if (param_2 == pcVar4) {
LAB_00481326:
        *param_2 = '\0';
        p_Var1 = FUN_0042470e();
        *(undefined4 *)p_Var1 = 0x22;
        return 0;
      }
    }
    cVar3 = *pcVar2;
  }
LAB_0048133d:
  *param_2 = '\0';
  return -(uint)(pcVar2 != param_1) & (uint)pcVar2;
LAB_00481337:
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 == ';');
  goto LAB_0048133d;
}


