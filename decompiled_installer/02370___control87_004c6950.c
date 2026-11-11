// Function: __control87
// Entry: 004c6950
// Size: 769 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2019 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  uVar1 = (in_FPUControlWord & 1) << 4;
  if ((in_FPUControlWord & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar3 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar3 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar3 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar3 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  uVar4 = ~_Mask & uVar1 | _NewValue & _Mask;
  if (uVar4 != uVar1) {
    uVar1 = __hw_cw(uVar4);
    uVar4 = (uVar1 & 1) << 4;
    if ((uVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar2 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar2 == 0x800) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        uVar4 = uVar4 | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      uVar4 = uVar4 | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      uVar4 = uVar4 | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar4 = uVar4 | 0x40000;
    }
  }
  if (0 < DAT_00544988) {
    uVar1 = MXCSR >> 3 & 0x10;
    if ((MXCSR & 0x200) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
    uVar2 = MXCSR & 0x6000;
    if (uVar2 != 0) {
      if (uVar2 == 0x2000) {
        uVar1 = uVar1 | 0x100;
      }
      else if (uVar2 == 0x4000) {
        uVar1 = uVar1 | 0x200;
      }
      else if (uVar2 == 0x6000) {
        uVar1 = uVar1 | 0x300;
      }
    }
    uVar2 = MXCSR & 0x8040;
    if (uVar2 == 0x40) {
      uVar1 = uVar1 | 0x2000000;
    }
    else if (uVar2 == 0x8000) {
      uVar1 = uVar1 | 0x3000000;
    }
    else if (uVar2 == 0x8040) {
      uVar1 = uVar1 | 0x1000000;
    }
    uVar2 = ~(_Mask & 0x308031f) & uVar1 | _Mask & 0x308031f & _NewValue;
    if (uVar2 != uVar1) {
      uVar1 = ___hw_cw_sse2(uVar2);
      ___set_fpsr_sse2(uVar1);
      uVar1 = MXCSR >> 3 & 0x10;
      if ((MXCSR & 0x200) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
      uVar2 = MXCSR & 0x6000;
      if (uVar2 != 0) {
        if (uVar2 == 0x2000) {
          uVar1 = uVar1 | 0x100;
        }
        else if (uVar2 == 0x4000) {
          uVar1 = uVar1 | 0x200;
        }
        else if (uVar2 == 0x6000) {
          uVar1 = uVar1 | 0x300;
        }
      }
      uVar2 = MXCSR & 0x8040;
      if (uVar2 == 0x40) {
        uVar1 = uVar1 | 0x2000000;
      }
      else if (uVar2 == 0x8000) {
        uVar1 = uVar1 | 0x3000000;
      }
      else if (uVar2 == 0x8040) {
        uVar1 = uVar1 | 0x1000000;
      }
    }
    uVar2 = uVar1 ^ uVar4;
    uVar4 = uVar1 | uVar4;
    if ((uVar2 & 0x8031f) != 0) {
      uVar4 = uVar4 | 0x80000000;
    }
  }
  return uVar4;
}


