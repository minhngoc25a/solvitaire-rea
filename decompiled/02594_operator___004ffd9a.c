// Function: operator==
// Entry: 004ffd9a
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  uint uVar1;
  
  uVar1 = ___std_type_info_compare((int)(this + 4),(int)(param_1 + 4));
  return (bool)('\x01' - (uVar1 != 0));
}


