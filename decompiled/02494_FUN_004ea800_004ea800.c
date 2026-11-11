// Function: FUN_004ea800
// Entry: 004ea800
// Size: 182 bytes
// Thunk: false
// External: false


longlong __cdecl FUN_004ea800(undefined4 *param_1)

{
  longlong lVar1;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((((uint)param_1[3] < 5) && ((uint)param_1[4] < 5)) && ((uint)(param_1[3] + param_1[4]) < 5))
     && ((((uint)param_1[5] < 5 && (param_1[7] - 2 < 0x110)) &&
         ((param_1[6] == 1 || (param_1[6] == 2)))))) {
    local_20 = *param_1;
    local_14 = param_1[7];
    local_10 = param_1[8];
    local_c = param_1[9];
    local_8 = param_1[1];
    local_4 = param_1[2];
    local_24 = 0x1000;
    local_1c = 0x1001;
    local_18 = 0x111;
    lVar1 = FUN_005053f0(&local_24);
    if (lVar1 != -1) {
      return lVar1 + 0x3cdf8;
    }
  }
  return -1;
}


