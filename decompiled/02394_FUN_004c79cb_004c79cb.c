// Function: FUN_004c79cb
// Entry: 004c79cb
// Size: 35 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004c79cb(char *param_1,int param_2)

{
  if (param_2 == 0) {
    return true;
  }
  for (; *param_1 == '0'; param_1 = param_1 + 1) {
  }
  return *param_1 != '\0';
}


