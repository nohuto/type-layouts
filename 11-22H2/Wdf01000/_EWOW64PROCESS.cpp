enum _SYSTEM_DLL_TYPE
{
    PsNativeSystemDll=0,
    PsWowX86SystemDll=1,
    PsWowArm32SystemDll=2,
    PsWowChpeX86SystemDll=3,
    PsChpeV2SystemDll=4,
    PsVsmEnclaveRuntimeDll=5,
    PsTrustedAppsRuntimeDll=6,
    PsSystemDllTotalTypes=7
};

struct _EWOW64PROCESS// Size=0x10 (Id=1257)
{
    void * Peb;// Offset=0x0 Size=0x8
    enum _SYSTEM_DLL_TYPE NtdllType;// Offset=0x8 Size=0x4
};
