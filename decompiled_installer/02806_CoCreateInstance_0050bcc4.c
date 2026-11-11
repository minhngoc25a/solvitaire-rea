// Function: CoCreateInstance
// Entry: 0050bcc4
// Size: 6 bytes
// Thunk: true
// External: false


HRESULT CoCreateInstance(IID *rclsid,LPUNKNOWN pUnkOuter,DWORD dwClsContext,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);
  return HVar1;
}


