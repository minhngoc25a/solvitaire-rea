// Function: find_or_allocate_unused_stream_nolock
// Entry: 004bf3e4
// Size: 194 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    class __crt_stdio_stream __cdecl find_or_allocate_unused_stream_nolock(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl find_or_allocate_unused_stream_nolock(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  FILE *_File;
  int *piVar6;
  bool bVar7;
  undefined4 *in_stack_00000004;
  
  piVar6 = (int *)(DAT_0054499c + 0xc);
  piVar2 = piVar6 + DAT_00544998 + -3;
  do {
    if (piVar6 == piVar2) {
LAB_004bf44d:
      *in_stack_00000004 = 0;
      return;
    }
    _File = (FILE *)*piVar6;
    if (_File == (FILE *)0x0) {
      pvVar5 = __calloc_base(1,0x38);
      *piVar6 = (int)pvVar5;
      FUN_004247be((LPVOID)0x0);
      if (*piVar6 != 0) {
        *(undefined4 *)(*piVar6 + 0x10) = 0xffffffff;
        ___acrt_InitializeCriticalSectionEx_12((LPCRITICAL_SECTION)(*piVar6 + 0x20),4000,0);
        _File = (FILE *)*piVar6;
        LOCK();
        _File->_flag = _File->_flag | 0x2000;
        UNLOCK();
        __lock_file(_File);
LAB_004bf458:
        *in_stack_00000004 = _File;
        return;
      }
      goto LAB_004bf44d;
    }
    if (((uint)_File->_flag >> 0xd & 1) == 0) {
      __lock_file(_File);
      piVar1 = &_File->_flag;
      uVar3 = *piVar1;
      do {
        LOCK();
        uVar4 = *piVar1;
        bVar7 = uVar3 == uVar4;
        if (bVar7) {
          *piVar1 = uVar3 | 0x2000;
          uVar4 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar4;
      } while (!bVar7);
      if ((~(byte)(uVar4 >> 0xd) & 1) != 0) goto LAB_004bf458;
      __unlock_file(_File);
    }
    piVar6 = piVar6 + 1;
  } while( true );
}


