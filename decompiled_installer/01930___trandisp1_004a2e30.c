// Function: __trandisp1
// Entry: 004a2e30
// Size: 117 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __trandisp1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  byte bVar1;
  float10 fVar2;
  char cVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar2 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar2) << 9 | (ushort)(in_ST0 != fVar2) << 10 |
       (ushort)(in_ST0 == fVar2) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  cVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  bVar1 = cVar3 << 1;
  cVar3 = (&DAT_0051924e)[bVar1 & 0xf | cVar3 < '\0'];
  (*(code *)PTR_guard_check_icall_00532084)
            (CONCAT31((int3)((uint)param_1 >> 8),bVar1) & 0x404,param_2,(int)cVar3);
                    /* WARNING: Could not recover jumptable at 0x004a2ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + cVar3 + 0x10))();
  return;
}


