// Function: operator()
// Entry: 0047f1de
// Size: 254 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __thiscall <lambda_b57350f2640456a0859d250846f69caf>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_b57350f2640456a0859d250846f69caf>::operator()
          (<lambda_b57350f2640456a0859d250846f69caf> *this)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  bool bVar6;
  
  __copytlocinfo_nolock
            ((undefined4 *)**(undefined4 **)this,*(undefined4 **)(**(int **)(this + 4) + 0x4c));
  iVar2 = FUN_0047ee2e(**(int **)this,**(int **)(this + 0xc),
                       (wchar_t *)**(undefined4 **)(this + 0x10));
  **(int **)(this + 8) = iVar2;
  if (iVar2 == 0) {
    ___acrt_release_locale_ref(**(int **)this);
    ___acrt_free_locale((LPVOID)**(undefined4 **)this);
  }
  else {
    puVar3 = (ushort *)**(undefined4 **)(this + 0x10);
    if (puVar3 != (ushort *)0x0) {
      puVar5 = &DAT_00540750;
      do {
        uVar1 = *puVar3;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_0047f24f:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_0047f253;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar3[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_0047f24f;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_0047f253:
      if (uVar4 != 0) {
        LOCK();
        DAT_005441f0 = 1;
        UNLOCK();
      }
    }
    __updatetlocinfoEx_nolock
              ((undefined4 *)(**(int **)(this + 4) + 0x4c),(undefined **)**(undefined4 **)this);
    ___acrt_release_locale_ref(**(int **)this);
    if (((*(byte *)(**(int **)(this + 4) + 0x350) & 2) == 0) && (((byte)DAT_00540e44 & 1) == 0)) {
      __updatetlocinfoEx_nolock(&DAT_005441f4,*(undefined ***)(**(int **)(this + 4) + 0x4c));
      PTR_PTR_005413b8 = (undefined *)DAT_005441f4[0x22];
      PTR_DAT_005407ac = (undefined *)*DAT_005441f4;
      _DAT_00540754 = DAT_005441f4[1];
      return;
    }
  }
  return;
}


