enum _SYSTEM_DLL_TYPE
{
    PsNativeSystemDll=0,
    PsWowX86SystemDll=1,
    PsWowChpeX86SystemDll=2,
    PsChpeV2SystemDll=3,
    PsVsmEnclaveRuntimeDll=4,
    PsTrustedAppsRuntimeDll=5,
    PsSystemDllTotalTypes=6
};

struct _EWOW64PROCESS// Size=0x10 (Id=567)
{
    void * Peb;// Offset=0x0 Size=0x8
    enum _SYSTEM_DLL_TYPE NtdllType;// Offset=0x8 Size=0x4
};
