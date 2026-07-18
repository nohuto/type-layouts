enum _PROC_HW_DEBUG_REGISTER_SCOPE
{
    ProcHwDebugRegisterPackage=0,
    ProcHwDebugRegisterLp=1,
    ProcHwDebugRegisterMax=2
};

struct _PROC_HW_DEBUG_REGISTER_DEFINITION// Size=0x28 (Id=627)
{
    wchar_t * Name;// Offset=0x0 Size=0x8
    unsigned long Address;// Offset=0x8 Size=0x4
    enum _PROC_HW_DEBUG_REGISTER_SCOPE Scope;// Offset=0xc Size=0x4
    unsigned char ParameterCount;// Offset=0x10 Size=0x1
    struct _PROC_HW_DEBUG_PARAMETER_DEFINITION * Parameters;// Offset=0x18 Size=0x8
    long  ( * RefreshHandler)(unsigned long long ,unsigned long long * );// Offset=0x20 Size=0x8
};
