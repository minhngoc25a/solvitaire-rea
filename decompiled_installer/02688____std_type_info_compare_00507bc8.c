// Function: ___std_type_info_compare
// Entry: 00507bc8
// Size: 60 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___std_type_info_compare
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___std_type_info_compare(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != param_2) {
    pbVar3 = (byte *)(param_2 + 5);
    pbVar2 = (byte *)(param_1 + 5);
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00507bfd:
        return -(uint)bVar4 | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00507bfd;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
  }
  return 0;
}


