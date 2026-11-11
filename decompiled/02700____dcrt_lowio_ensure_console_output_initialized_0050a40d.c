// Function: ___dcrt_lowio_ensure_console_output_initialized
// Entry: 0050a40d
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool ___dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_005421e0 == -2) {
    __dcrt_lowio_initialize_console_output();
  }
  return DAT_005421e0 != -1;
}


