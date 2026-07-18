enum _SYSTEM_DLL_TYPE
{
    PsNativeSystemDll=0,
    PsWowX86SystemDll=1,
    PsWowArm32SystemDll=2,
    PsWowAmd64SystemDll=3,
    PsWowChpeX86SystemDll=4,
    PsVsmEnclaveRuntimeDll=5,
    PsSystemDllTotalTypes=6
};

struct _EWOW64PROCESS// Size=0x10 (Id=114)
{
    void * Peb;// Offset=0x0 Size=0x8
    unsigned short Machine;// Offset=0x8 Size=0x2
    enum _SYSTEM_DLL_TYPE NtdllType;// Offset=0xc Size=0x4
};
