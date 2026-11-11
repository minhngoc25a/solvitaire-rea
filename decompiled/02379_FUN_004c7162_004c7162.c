// Function: FUN_004c7162
// Entry: 004c7162
// Size: 44 bytes
// Thunk: false
// External: false


char FUN_004c7162(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
  }
  else if (param_1[1] == '\0') {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (param_1[2] != '\0') + '\x03';
  }
  return cVar1;
}


