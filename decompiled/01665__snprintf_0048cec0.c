// Function: _snprintf
// Entry: 0048cec0
// Size: 50 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _snprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = &stack0x00000010;
  puVar3 = (undefined4 *)0x0;
  puVar1 = (uint *)FUN_00417ffc();
  iVar2 = FUN_004544af(*puVar1 | 1,puVar1[1],(undefined1 ****)_Dest,_Count,(int)_Format,puVar3,
                       puVar4);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


