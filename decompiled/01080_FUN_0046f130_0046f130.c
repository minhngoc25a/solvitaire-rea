// Function: FUN_0046f130
// Entry: 0046f130
// Size: 40 bytes
// Thunk: false
// External: false


void FUN_0046f130(int param_1,undefined4 param_2)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    (**(code **)(param_1 + 0x40))(*(int *)(param_1 + 0x44),param_2);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}


