// Function: operator()<>
// Entry: 00424f1e
// Size: 76 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall __crt_seh_guarded_call<bool>::operator()<class
   <lambda_1f7e3ac85ca3635646511ad93ac0febe>,class <lambda_555255fdfb9471e5fa7bfca50021c162> &,class
   <lambda_24f51f8b0c33fe186c624e6675644b7a> >(class <lambda_1f7e3ac85ca3635646511ad93ac0febe>
   &&,class <lambda_555255fdfb9471e5fa7bfca50021c162> &,class
   <lambda_24f51f8b0c33fe186c624e6675644b7a> &&)
    public: bool __thiscall __crt_seh_guarded_call<bool>::operator()<class
   <lambda_7c2f2fda812d734ae099d3f4ed455c3b>,class <lambda_82ba946ffbe3ee0aa3b627dec756a6af> &,class
   <lambda_a4380b3ede4825a309b82fda1395b002> >(class <lambda_7c2f2fda812d734ae099d3f4ed455c3b>
   &&,class <lambda_82ba946ffbe3ee0aa3b627dec756a6af> &,class
   <lambda_a4380b3ede4825a309b82fda1395b002> &&)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined1 operator()<>(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  uVar1 = FUN_00424bf5(param_2);
  FUN_00424f6d();
  ExceptionList = local_14;
  return uVar1;
}


