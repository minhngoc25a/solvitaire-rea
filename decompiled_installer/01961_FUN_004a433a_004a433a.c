// Function: FUN_004a433a
// Entry: 004a433a
// Size: 442 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a433a(uint param_1,ushort *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  HANDLE hFile;
  ushort uVar4;
  ushort *puVar5;
  BOOL BVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  DWORD local_1c;
  uint local_18;
  undefined4 local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;
  
  local_c = (int)param_1 >> 6;
  iVar9 = (param_1 & 0x3f) * 0x38;
  iVar3 = (&DAT_00544378)[local_c];
  local_1c = 10;
  hFile = *(HANDLE *)(iVar3 + 0x18 + iVar9);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(iVar3 + 0x28 + iVar9);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar3 + 0x28 + iVar9);
    *pbVar1 = *pbVar1 | 4;
  }
  local_10 = param_2 + param_3;
  local_8 = param_2;
  puVar8 = param_2;
  if (param_2 < local_10) {
    local_14 = 0xd;
    puVar7 = param_2;
    do {
      uVar4 = *local_8;
      local_18 = (uint)uVar4;
      puVar8 = puVar7;
      if (local_18 == 0x1a) {
        bVar2 = *(byte *)((&DAT_00544378)[local_c] + 0x28 + iVar9);
        if ((bVar2 & 0x40) == 0) {
          *(byte *)((&DAT_00544378)[local_c] + 0x28 + iVar9) = bVar2 | 2;
        }
        else {
          *puVar7 = uVar4;
LAB_004a44e5:
          puVar8 = puVar7 + 1;
        }
        break;
      }
      puVar5 = local_8 + 1;
      if (uVar4 == 0xd) {
        if (local_10 <= puVar5) {
          BVar6 = ReadFile(hFile,&local_8,2,&local_1c,(LPOVERLAPPED)0x0);
          if ((BVar6 == 0) || (local_1c == 0)) {
LAB_004a44c3:
            uVar4 = 0xd;
          }
          else {
            if ((*(byte *)((&DAT_00544378)[local_c] + 0x28 + iVar9) & 0x48) != 0) {
              puVar8 = puVar7 + 1;
              if ((short)local_8 == 10) {
                *puVar7 = 10;
              }
              else {
                *puVar7 = 0xd;
                *(char *)((&DAT_00544378)[local_c] + 0x2a + iVar9) = (char)local_8;
                *(char *)((&DAT_00544378)[local_c] + 0x2b + iVar9) = (char)((uint)local_8 >> 8);
                *(undefined1 *)((&DAT_00544378)[local_c] + 0x2c + iVar9) = 10;
              }
              break;
            }
            uVar4 = 10;
            if (((short)local_8 != 10) || (puVar7 != param_2)) {
              FUN_0049d4a3(param_1,0xfffffffe,0xffffffff,(PLARGE_INTEGER)0x1);
              if ((short)local_8 != 10) goto LAB_004a44c3;
              break;
            }
          }
          *puVar7 = uVar4;
          goto LAB_004a44e5;
        }
        uVar4 = *puVar5;
        puVar5 = local_8 + (uVar4 == 10) + 1;
        *puVar7 = ((uVar4 == 10) - 1 & 3) + 10;
      }
      else {
        *puVar7 = uVar4;
      }
      puVar8 = puVar7 + 1;
      puVar7 = puVar8;
      local_8 = puVar5;
    } while (puVar5 < local_10);
  }
  return (int)puVar8 - (int)param_2 & 0xfffffffe;
}


