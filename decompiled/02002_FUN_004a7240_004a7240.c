// Function: FUN_004a7240
// Entry: 004a7240
// Size: 407 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7240(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 unaff_retaddr;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  if (((*(uint *)(param_1 + 0x74) & 1) == 0) && (param_3 == 0xd)) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
    FUN_00474230(param_1);
    FUN_0046bd70(param_1,(uint *)&uStack_c,0xd);
    FUN_004a5f90(param_1,0);
    uVar5 = CONCAT31(CONCAT21(CONCAT11(uStack_c,uStack_b),uStack_a),uStack_9);
    if ((uVar5 < 0x80000000) &&
       (uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_8,uStack_7),uStack_6),uStack_5),
       uVar4 < 0x80000000)) {
      *(undefined1 *)(param_1 + 0x14c) = unaff_retaddr;
      *(byte *)(param_1 + 0x14f) = bStack_3;
      *(byte *)(param_1 + 0x254) = bStack_1;
      *(uint *)(param_1 + 0x100) = uVar5;
      *(uint *)(param_1 + 0x104) = uVar4;
      *(byte *)(param_1 + 0x150) = bStack_4;
      *(byte *)(param_1 + 0x274) = bStack_2;
      switch(bStack_3) {
      default:
        *(undefined1 *)(param_1 + 0x153) = 1;
        cVar1 = '\x01';
        break;
      case 2:
        *(undefined1 *)(param_1 + 0x153) = 3;
        cVar1 = '\x03';
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x153) = 2;
        cVar1 = '\x02';
        break;
      case 6:
        *(undefined1 *)(param_1 + 0x153) = 4;
        cVar1 = '\x04';
      }
      bVar3 = bStack_4 * cVar1;
      *(byte *)(param_1 + 0x152) = bVar3;
      if (bVar3 < 8) {
        uVar2 = bVar3 * uVar5 + 7 >> 3;
      }
      else {
        uVar2 = (bVar3 >> 3) * uVar5;
      }
      *(uint *)(param_1 + 0x110) = uVar2;
      FUN_004a4fc0(param_1,(uint *)0xd,uVar5,uVar4,bStack_4,bStack_3,unaff_retaddr,bStack_2,bStack_1
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


