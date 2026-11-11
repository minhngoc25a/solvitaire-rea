// Function: count<char>
// Entry: 00457567
// Size: 24 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: unsigned int __thiscall __crt_stdio_output::formatting_buffer::count<char>(void)const 
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

uint __thiscall __crt_stdio_output::formatting_buffer::count<char>(formatting_buffer *this)

{
  if (*(int *)(this + 0x404) == 0) {
    return 0x200;
  }
  return *(uint *)(this + 0x400) >> 1;
}


