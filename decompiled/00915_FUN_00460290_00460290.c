// Function: FUN_00460290
// Entry: 00460290
// Size: 450 bytes
// Thunk: false
// External: false


char * __cdecl FUN_00460290(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *_Source;
  
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (2 - (int)(param_4 + 1));
  }
  uVar2 = 0;
  if ((param_3 < (char *)0x64) && (param_4 == (char *)0x0)) {
    _strncpy(param_1,param_2,(size_t)param_3);
    param_1[(int)param_3] = '\0';
    return param_1;
  }
  pcVar7 = param_2 + (int)param_3;
  while( true ) {
    while ((_Source = pcVar7 + -1, param_2 < pcVar7 && (*_Source == '/'))) {
      uVar2 = 1;
      pcVar7 = _Source;
    }
    if (((pcVar7 <= param_2 + 1) || (*_Source != '.')) || (pcVar7[-2] != '/')) break;
    pcVar7 = pcVar7 + -2;
    uVar2 = 1;
  }
  for (; param_2 < _Source; _Source = _Source + -1) {
    if (*_Source == '/') goto LAB_0046033f;
  }
  if (*_Source == '/') {
LAB_0046033f:
    if (_Source < pcVar7 + -1) {
      _Source = _Source + 1;
    }
  }
  iVar3 = ((uVar2 ^ 1) + 0x62) - (int)pcVar4;
  if (_Source + iVar3 < pcVar7) {
    pcVar7 = _Source + iVar3;
  }
  pcVar4 = param_2 + 0x9b;
  if (_Source < param_2 + 0x9b) {
    pcVar4 = _Source;
  }
  for (; (param_2 < pcVar4 && (*pcVar4 != '/')); pcVar4 = pcVar4 + -1) {
  }
  if ((pcVar4 < _Source) && (*pcVar4 == '/')) {
    pcVar4 = pcVar4 + 1;
  }
  pcVar5 = pcVar4 + (int)(_Source + (iVar3 - (int)pcVar7));
  if (_Source < pcVar4 + (int)(_Source + (iVar3 - (int)pcVar7))) {
    pcVar5 = _Source;
  }
  pcVar6 = pcVar4;
  if (pcVar4 <= pcVar5) {
    for (; (pcVar6 = pcVar5, pcVar4 < pcVar5 && (*pcVar5 != '/')); pcVar5 = pcVar5 + -1) {
    }
  }
  if ((pcVar6 < _Source) && (*pcVar6 == '/')) {
    pcVar6 = pcVar6 + 1;
  }
  param_3 = param_1;
  if (param_2 < pcVar4) {
    _strncpy(param_1,param_2,(int)pcVar4 - (int)param_2);
    param_3 = param_1 + ((int)pcVar4 - (int)param_2);
  }
  if (pcVar4 < pcVar6) {
    _strncpy(param_3,pcVar4,(int)pcVar6 - (int)pcVar4);
    param_3 = param_3 + ((int)pcVar6 - (int)pcVar4);
  }
  if (param_4 != (char *)0x0) {
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar4[(int)(param_3 + (-1 - (int)param_4))] = cVar1;
    } while (cVar1 != '\0');
    pcVar4 = param_4 + 1;
    do {
      cVar1 = *param_4;
      param_4 = param_4 + 1;
    } while (cVar1 != '\0');
    param_3[(int)param_4 - (int)pcVar4] = '/';
    param_3 = param_3 + ((int)param_4 - (int)pcVar4) + 1;
  }
  _strncpy(param_3,_Source,(int)pcVar7 - (int)_Source);
  pcVar4 = param_3 + ((int)pcVar7 - (int)_Source);
  if (uVar2 != 0) {
    *pcVar4 = '/';
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  return param_1;
}


