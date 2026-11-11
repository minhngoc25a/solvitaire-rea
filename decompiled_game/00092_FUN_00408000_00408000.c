// Function: FUN_00408000
// Entry: 00408000
// Size: 2325 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00408000(uint param_1,int param_2,undefined4 param_3,char *param_4,undefined1 (*param_5) [10])

{
  uint uVar1;
  undefined1 auVar2 [10];
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  size_t sVar7;
  uint uVar8;
  char cVar9;
  char *pcVar10;
  wchar_t *_Str;
  int iVar11;
  uint local_5c;
  int local_58;
  int *local_54;
  uint local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  uVar1 = param_1 & 0x3000;
  local_40 = param_2;
  local_38 = -1;
  local_34 = -1;
  local_30 = 0xfffffffd;
  local_2c = 0;
  local_28 = 0;
  local_24 = param_3;
  local_3c = uVar1;
  pcVar6 = getenv("PRINTF_EXPONENT_DIGITS");
  if (pcVar6 == (char *)0x0) {
    local_20 = 3;
  }
  else {
    local_20 = 3 - (uint)((int)*pcVar6 - 0x30U < 3);
  }
LAB_00408090:
  do {
    cVar9 = *param_4;
    pcVar6 = param_4;
    while( true ) {
      if (cVar9 == '\0') {
        return local_28;
      }
      pcVar10 = pcVar6 + 1;
      if (cVar9 != '%') break;
      local_34 = -1;
      local_38 = -1;
      local_58 = 0;
      cVar9 = pcVar6[1];
      local_54 = &local_38;
      local_5c = 0;
      local_3c = uVar1;
      pcVar6 = pcVar10;
joined_r0x004080df:
      if (cVar9 != '\0') {
        iVar11 = (int)cVar9;
        param_4 = pcVar6 + 1;
        switch(cVar9) {
        case ' ':
          if (local_5c == 0) {
            local_3c = local_3c | 0x40;
            cVar9 = pcVar6[1];
            pcVar6 = param_4;
            goto joined_r0x004080df;
          }
          break;
        default:
          goto switchD_004080f5_caseD_21;
        case '#':
          if (local_5c == 0) {
            local_3c = local_3c | 0x800;
            cVar9 = pcVar6[1];
            pcVar6 = param_4;
            goto joined_r0x004080df;
          }
          break;
        case '%':
          FUN_00406ba0(pcVar6,&local_40);
          goto LAB_00408090;
        case '*':
          if (local_54 == (int *)0x0) goto LAB_00408611;
          if ((local_5c & 0xfffffffd) != 0) {
            cVar9 = pcVar6[1];
            local_54 = (int *)0x0;
            local_5c = 4;
            pcVar6 = param_4;
            goto joined_r0x004080df;
          }
          iVar11 = *(int *)*param_5;
          param_5 = (undefined1 (*) [10])(*param_5 + 4);
          *local_54 = iVar11;
          if (iVar11 < 0) {
            if (local_5c != 0) {
              local_34 = -1;
              cVar9 = pcVar6[1];
              local_54 = (int *)0x0;
              pcVar6 = param_4;
              goto joined_r0x004080df;
            }
            local_3c = local_3c | 0x400;
            local_38 = -local_38;
          }
          cVar9 = pcVar6[1];
          local_54 = (int *)0x0;
          pcVar6 = param_4;
          goto joined_r0x004080df;
        case '+':
          if (local_5c == 0) {
            local_3c = local_3c | 0x100;
            cVar9 = pcVar6[1];
            pcVar6 = param_4;
            goto joined_r0x004080df;
          }
          break;
        case '-':
          if (local_5c == 0) {
            local_3c = local_3c | 0x400;
            cVar9 = pcVar6[1];
            pcVar6 = param_4;
            goto joined_r0x004080df;
          }
          break;
        case '.':
          if (local_5c < 2) {
            local_54 = &local_34;
            local_34 = 0;
            cVar9 = pcVar6[1];
            local_5c = 2;
            pcVar6 = param_4;
          }
          else {
LAB_00408611:
            cVar9 = pcVar6[1];
            local_5c = 4;
            pcVar6 = param_4;
          }
          goto joined_r0x004080df;
        case '0':
          if (local_5c == 0) {
            local_3c = local_3c | 0x200;
            cVar9 = pcVar6[1];
            pcVar6 = param_4;
            goto joined_r0x004080df;
          }
switchD_004080f5_caseD_21:
          if ((local_5c == 4) || (9 < (byte)(cVar9 - 0x30U))) {
            FUN_00406ba0(pcVar6,&local_40);
            param_4 = pcVar10;
            goto LAB_00408090;
          }
          if (local_5c == 0) {
            local_5c = 1;
            uVar4 = local_5c;
          }
          else {
            uVar4 = 3;
            if (local_5c != 2) {
              uVar4 = local_5c;
            }
          }
          local_5c = uVar4;
          if (local_54 != (int *)0x0) {
            if (*local_54 < 0) {
              *local_54 = iVar11 + -0x30;
              cVar9 = pcVar6[1];
              pcVar6 = param_4;
              goto joined_r0x004080df;
            }
            *local_54 = iVar11 + -0x30 + *local_54 * 10;
          }
          break;
        case 'A':
          if ((local_3c & 4) != 0) goto LAB_00408477;
LAB_00408523:
          puVar5 = *param_5;
          param_5 = (undefined1 (*) [10])(*param_5 + 8);
          FUN_00407a20((float10)*(double *)puVar5);
          goto LAB_00408090;
        case 'C':
          goto LAB_004085bd;
        case 'E':
          if ((local_3c & 4) != 0) goto LAB_00408393;
LAB_0040859c:
          puVar5 = *param_5;
          param_5 = (undefined1 (*) [10])(*param_5 + 8);
          FUN_00407710((undefined1  [10])(float10)*(double *)puVar5);
          goto LAB_00408090;
        case 'F':
          if ((local_3c & 4) != 0) goto LAB_004082b3;
LAB_004085ed:
          puVar5 = *param_5;
          param_5 = (undefined1 (*) [10])(*param_5 + 8);
          FUN_004077c0((undefined1  [10])(float10)*(double *)puVar5);
          goto LAB_00408090;
        case 'G':
          if ((local_3c & 4) != 0) goto LAB_00408287;
LAB_0040849c:
          puVar5 = *param_5;
          param_5 = (undefined1 (*) [10])(*param_5 + 8);
          FUN_004078a0((undefined1  [10])(float10)*(double *)puVar5);
          goto LAB_00408090;
        case 'I':
          cVar9 = pcVar6[1];
          if (cVar9 == '6') {
            if (pcVar6[2] == '4') {
              cVar9 = pcVar6[3];
              local_58 = 3;
              local_5c = 4;
              pcVar6 = pcVar6 + 3;
            }
            else {
              cVar9 = '6';
              local_58 = 2;
              local_5c = 4;
              pcVar6 = param_4;
            }
          }
          else {
            if (cVar9 != '3') goto LAB_0040821d;
            if (pcVar6[2] == '2') {
              cVar9 = pcVar6[3];
              local_58 = 2;
              local_5c = 4;
              pcVar6 = pcVar6 + 3;
            }
            else {
              cVar9 = '3';
              local_58 = 2;
              local_5c = 4;
              pcVar6 = param_4;
            }
          }
          goto joined_r0x004080df;
        case 'L':
          local_3c = local_3c | 4;
          cVar9 = pcVar6[1];
          local_5c = 4;
          pcVar6 = param_4;
          goto joined_r0x004080df;
        case 'S':
          goto switchD_004080f5_caseD_53;
        case 'X':
        case 'o':
        case 'u':
        case 'x':
          if (local_58 == 3) {
            local_4c = *(uint *)*param_5;
            local_48 = *(uint *)(*param_5 + 4);
            param_5 = (undefined1 (*) [10])(*param_5 + 8);
          }
          else if (local_58 == 2) {
            local_4c = *(uint *)*param_5;
            local_48 = 0;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
          }
          else {
            local_4c = *(uint *)*param_5;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            local_48 = 0;
            if (local_58 == 1) {
              local_4c = local_4c & 0xffff;
              local_48 = 0;
            }
            else if (local_58 == 4) {
              local_4c = local_4c & 0xff;
              local_48 = 0;
            }
          }
          if (iVar11 == 0x75) goto LAB_004083f7;
          FUN_00407040(local_48,local_4c,(byte *)&local_40);
          goto LAB_00408090;
        case 'a':
          uVar8 = local_3c | 0x20;
          uVar4 = local_3c & 4;
          local_3c = uVar8;
          if (uVar4 == 0) goto LAB_00408523;
LAB_00408477:
          auVar2 = *param_5;
          param_5 = (undefined1 (*) [10])(param_5[1] + 2);
          FUN_00407a20((float10)auVar2);
          goto LAB_00408090;
        case 'c':
          local_34 = -1;
          if (local_58 - 2U < 2) {
LAB_004085bd:
            local_34 = -1;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            FUN_00406c00(&local_40,1);
          }
          else {
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            FUN_00406cf0(&local_40,1);
          }
          goto LAB_00408090;
        case 'd':
        case 'i':
          local_3c = local_3c | 0x80;
          if (local_58 == 3) {
            local_48 = *(uint *)(*param_5 + 4);
            param_5 = (undefined1 (*) [10])(*param_5 + 8);
          }
          else if (local_58 == 2) {
            local_48 = *(int *)*param_5 >> 0x1f;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
          }
          else {
            iVar11 = *(int *)*param_5;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            local_48 = iVar11 >> 0x1f;
            if (local_58 == 1) {
              local_4c._0_2_ = (short)iVar11;
              local_48 = (int)(short)local_4c >> 0x1f;
            }
            else if (local_58 == 4) {
              local_4c._0_1_ = (char)iVar11;
              local_48 = (int)(char)local_4c >> 0x1f;
            }
          }
LAB_004083f7:
          FUN_00406e20(&local_40,local_48);
          goto LAB_00408090;
        case 'e':
          uVar8 = local_3c | 0x20;
          uVar4 = local_3c & 4;
          local_3c = uVar8;
          if (uVar4 == 0) goto LAB_0040859c;
LAB_00408393:
          auVar2 = *param_5;
          param_5 = (undefined1 (*) [10])(param_5[1] + 2);
          FUN_00407710(auVar2);
          goto LAB_00408090;
        case 'f':
          uVar8 = local_3c | 0x20;
          uVar4 = local_3c & 4;
          local_3c = uVar8;
          if (uVar4 == 0) goto LAB_004085ed;
LAB_004082b3:
          auVar2 = *param_5;
          param_5 = (undefined1 (*) [10])(param_5[1] + 2);
          FUN_004077c0(auVar2);
          goto LAB_00408090;
        case 'g':
          uVar8 = local_3c | 0x20;
          uVar4 = local_3c & 4;
          local_3c = uVar8;
          if (uVar4 == 0) goto LAB_0040849c;
LAB_00408287:
          auVar2 = *param_5;
          param_5 = (undefined1 (*) [10])(param_5[1] + 2);
          FUN_004078a0(auVar2);
          goto LAB_00408090;
        case 'h':
          cVar9 = pcVar6[1];
          if (cVar9 == 'h') {
            cVar9 = pcVar6[2];
            local_58 = 4;
            local_5c = 4;
            pcVar6 = pcVar6 + 2;
          }
          else {
            local_58 = 1;
            local_5c = 4;
            pcVar6 = param_4;
          }
          goto joined_r0x004080df;
        case 'j':
          cVar9 = pcVar6[1];
          local_58 = 3;
          local_5c = 4;
          pcVar6 = param_4;
          goto joined_r0x004080df;
        case 'l':
          cVar9 = pcVar6[1];
          if (cVar9 == 'l') {
            cVar9 = pcVar6[2];
            local_58 = 3;
            local_5c = 4;
            pcVar6 = pcVar6 + 2;
          }
          else {
LAB_0040821d:
            local_58 = 2;
            local_5c = 4;
            pcVar6 = param_4;
          }
          goto joined_r0x004080df;
        case 'n':
          if (local_58 == 4) {
            puVar5 = *param_5;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            **(undefined1 **)puVar5 = (char)local_28;
          }
          else {
            piVar3 = *(int **)*param_5;
            if (local_58 == 1) {
              *(short *)piVar3 = (short)local_28;
              param_5 = (undefined1 (*) [10])(*param_5 + 4);
            }
            else if (local_58 == 2) {
              *piVar3 = local_28;
              param_5 = (undefined1 (*) [10])(*param_5 + 4);
            }
            else {
              *piVar3 = local_28;
              if (local_58 == 3) {
                param_5 = (undefined1 (*) [10])(*param_5 + 4);
                piVar3[1] = local_28 >> 0x1f;
              }
              else {
                param_5 = (undefined1 (*) [10])(*param_5 + 4);
              }
            }
          }
          goto LAB_00408090;
        case 'p':
          if ((local_5c == 0) && (local_3c == uVar1)) {
            local_34 = 8;
            local_3c = uVar1 | 0x200;
          }
          puVar5 = *param_5;
          param_5 = (undefined1 (*) [10])(*param_5 + 4);
          FUN_00407040(0,*(uint *)puVar5,(byte *)&local_40);
          goto LAB_00408090;
        case 's':
          if (local_58 - 2U < 2) {
switchD_004080f5_caseD_53:
            _Str = *(wchar_t **)*param_5;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            if (_Str == (wchar_t *)0x0) {
              _Str = L"(null)";
            }
            sVar7 = wcslen(_Str);
            FUN_00406c00(&local_40,sVar7);
          }
          else {
            puVar5 = *param_5;
            param_5 = (undefined1 (*) [10])(*param_5 + 4);
            if (*(char **)puVar5 == (char *)0x0) {
              sVar7 = 6;
            }
            else {
              sVar7 = strlen(*(char **)puVar5);
            }
            FUN_00406cf0(&local_40,sVar7);
          }
          goto LAB_00408090;
        case 't':
        case 'z':
          goto switchD_004080f5_caseD_74;
        }
        cVar9 = pcVar6[1];
        pcVar6 = param_4;
        goto joined_r0x004080df;
      }
      cVar9 = *pcVar6;
    }
    FUN_00406ba0(pcVar10,&local_40);
    param_4 = pcVar10;
  } while( true );
switchD_004080f5_caseD_74:
  cVar9 = pcVar6[1];
  local_58 = 2;
  local_5c = 4;
  pcVar6 = param_4;
  goto joined_r0x004080df;
}


