// Function: FUN_004519dd
// Entry: 004519dd
// Size: 693 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_004519dd(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined4 *puVar9;
  byte *local_c;
  int iVar10;
  
  uVar3 = (uint)**(byte **)(param_1 + 8);
  if (uVar3 < 0x65) {
    if (uVar3 == 100) {
      *(undefined4 *)(param_1 + 0x28) = 3;
    }
    else {
      if (0x49 < uVar3) {
        if (uVar3 == 0x53) {
LAB_00451b2d:
          pbVar4 = (byte *)FUN_004519bc(param_1);
          *(undefined4 *)(param_1 + 0x28) = 1;
        }
        else {
          if (uVar3 == 0x58) goto LAB_00451b47;
          if (uVar3 == 0x5b) {
            pbVar4 = (byte *)FUN_004519bc(param_1);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            *(undefined4 *)(param_1 + 0x28) = 8;
            if ((undefined4 *)(param_1 + 0x2c) == (undefined4 *)0x0) {
              *(undefined4 *)(param_1 + 0xc) = 0xc;
              *(undefined2 *)(param_1 + 0x14) = 0;
            }
            else {
              puVar9 = (undefined4 *)(param_1 + 0x2c);
              for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
              pbVar5 = *(byte **)(param_1 + 8);
              bVar8 = *pbVar5;
              iVar6 = (uint)bVar8 << 8;
              bVar7 = bVar8;
              if (bVar8 == 0x5e) {
                pbVar5 = pbVar5 + 1;
                *(byte **)(param_1 + 8) = pbVar5;
                bVar7 = *pbVar5;
              }
              if (bVar7 == 0x5d) {
                pbVar5 = pbVar5 + 1;
                *(byte **)(param_1 + 8) = pbVar5;
                *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 0x20;
              }
              local_c = (byte *)0x0;
              pbVar4 = pbVar5;
              if (*pbVar5 != 0x5d) {
                bVar7 = *pbVar5;
                do {
                  bVar8 = (byte)((uint)iVar6 >> 8);
                  if (bVar7 == 0) break;
                  if (((bVar7 == 0x2d) && (pbVar4 + -1 != local_c)) && (pbVar4 != pbVar5)) {
                    pbVar1 = pbVar4 + 1;
                    bVar8 = *pbVar1;
                    if (bVar8 == 0x5d) goto LAB_00451c3f;
                    bVar7 = pbVar4[-1];
                    bVar2 = bVar7;
                    if (bVar8 < bVar7) {
                      bVar2 = bVar8;
                      bVar8 = bVar7;
                    }
                    iVar6 = CONCAT13(bVar2,CONCAT12(bVar8 + 1,(short)iVar6));
                    local_c = pbVar1;
                    iVar10 = iVar6;
                    if (bVar2 != (byte)(bVar8 + 1)) {
                      do {
                        __crt_stdio_input::scanset_buffer<unsigned_char>::set
                                  ((scanset_buffer<unsigned_char> *)(param_1 + 0x2c),bVar2);
                        bVar2 = (char)((uint)iVar10 >> 0x18) + 1;
                        iVar6 = CONCAT13(bVar2,(int3)iVar10);
                        uVar3 = (uint)iVar10 >> 0x10;
                        iVar10 = iVar6;
                      } while (bVar2 != (byte)uVar3);
                    }
                  }
                  else {
LAB_00451c3f:
                    __crt_stdio_input::scanset_buffer<unsigned_char>::set
                              ((scanset_buffer<unsigned_char> *)(param_1 + 0x2c),bVar7);
                  }
                  bVar8 = (byte)((uint)iVar6 >> 8);
                  pbVar4 = (byte *)(*(int *)(param_1 + 8) + 1);
                  *(byte **)(param_1 + 8) = pbVar4;
                  bVar7 = *pbVar4;
                } while (bVar7 != 0x5d);
              }
              pbVar5 = (byte *)(param_1 + 0x2c);
              if (*pbVar4 != 0) {
                if (bVar8 == 0x5e) {
                  pbVar4 = (byte *)(param_1 + 0x4c);
                  for (; pbVar5 != pbVar4; pbVar5 = pbVar5 + 1) {
                    *pbVar5 = ~*pbVar5;
                  }
                }
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
                return CONCAT31((int3)((uint)pbVar4 >> 8),1);
              }
              *(undefined2 *)(param_1 + 0x14) = 0;
              *(undefined4 *)(param_1 + 0xc) = 0x16;
            }
            *(undefined4 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x24) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
            *(undefined1 *)(param_1 + 0x16) = 0;
            *(undefined4 *)(param_1 + 0x10) = 0;
            return (uint)pbVar4 & 0xffffff00;
          }
          if (uVar3 == 0x61) goto LAB_00451a22;
          uVar3 = uVar3 - 99;
          if (uVar3 != 0) goto LAB_00451afe;
LAB_00451a54:
          if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
            *(undefined4 *)(param_1 + 0x18) = 1;
            *(undefined4 *)(param_1 + 0x1c) = 0;
          }
          pbVar4 = (byte *)FUN_004519bc(param_1);
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        goto LAB_00451b54;
      }
      if (uVar3 == 0x49) {
LAB_00451ad7:
        *(undefined4 *)(param_1 + 0x28) = 2;
      }
      else {
        if (uVar3 != 0x41) {
          if (uVar3 == 0x43) goto LAB_00451a54;
          if (((uVar3 != 0x45) && (uVar3 != 0x46)) && (uVar3 = uVar3 - 0x47, uVar3 != 0))
          goto LAB_00451afe;
        }
LAB_00451a22:
        *(undefined4 *)(param_1 + 0x28) = 7;
      }
    }
  }
  else if (uVar3 < 0x70) {
    if (uVar3 == 0x6f) {
      *(undefined4 *)(param_1 + 0x28) = 4;
    }
    else {
      if (((uVar3 == 0x65) || (uVar3 == 0x66)) || (uVar3 == 0x67)) goto LAB_00451a22;
      if (uVar3 == 0x69) goto LAB_00451ad7;
      uVar3 = uVar3 - 0x6e;
      if (uVar3 != 0) {
LAB_00451afe:
        *(undefined4 *)(param_1 + 0xc) = 0x16;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined2 *)(param_1 + 0x14) = 0;
        *(undefined1 *)(param_1 + 0x16) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return uVar3 & 0xffffff00;
      }
      *(undefined4 *)(param_1 + 0x28) = 9;
    }
  }
  else {
    if (uVar3 == 0x70) {
      *(undefined4 *)(param_1 + 0x20) = 9;
    }
    else {
      if (uVar3 == 0x73) goto LAB_00451b2d;
      if (uVar3 == 0x75) {
        *(undefined4 *)(param_1 + 0x28) = 5;
        goto LAB_00451b4e;
      }
      uVar3 = uVar3 - 0x78;
      if (uVar3 != 0) goto LAB_00451afe;
    }
LAB_00451b47:
    *(undefined4 *)(param_1 + 0x28) = 6;
  }
LAB_00451b4e:
  pbVar4 = *(byte **)(param_1 + 8) + 1;
  *(byte **)(param_1 + 8) = pbVar4;
LAB_00451b54:
  return CONCAT31((int3)((uint)pbVar4 >> 8),1);
}


