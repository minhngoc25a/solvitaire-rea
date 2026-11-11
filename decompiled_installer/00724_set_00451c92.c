// Function: set
// Entry: 00451c92
// Size: 43 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00451cad) */
/* Library Function - Single Match
    public: void __thiscall __crt_stdio_input::scanset_buffer<unsigned char>::set(unsigned char)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
__crt_stdio_input::scanset_buffer<unsigned_char>::set
          (scanset_buffer<unsigned_char> *this,uchar param_1)

{
  this[param_1 >> 3] =
       (scanset_buffer<unsigned_char>)((byte)this[param_1 >> 3] | (byte)(1 << (param_1 & 7)));
  return;
}


