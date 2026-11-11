// Function: ftprintf<>
// Entry: 0048244b
// Size: 40 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __crt_char_traits<char>::ftprintf<struct _iobuf *,char const *,char
   const * const &,char const * const &,unsigned int const &>(struct _iobuf * &&,char const *
   &&,char const * const &,char const * const &,unsigned int const &)
    public: static int __cdecl __crt_char_traits<wchar_t>::ftprintf<struct _iobuf *,wchar_t const
   *,wchar_t const * const &,wchar_t const * const &,unsigned int const &>(struct _iobuf *
   &&,wchar_t const * &&,wchar_t const * const &,wchar_t const * const &,unsigned int const &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
ftprintf<>(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5)

{
  FID_conflict__fwprintf((FILE *)*param_1,(wchar_t *)*param_2,*param_3,*param_4,*param_5);
  return;
}


