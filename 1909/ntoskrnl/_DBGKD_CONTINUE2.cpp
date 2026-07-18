struct _AMD64_DBGKD_CONTROL_SET// Size=0x1c (Id=985)
{
    unsigned long TraceFlag;// Offset=0x0 Size=0x4
    unsigned long long Dr7;// Offset=0x4 Size=0x8
    unsigned long long CurrentSymbolStart;// Offset=0xc Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0x14 Size=0x8
};

struct _X86_DBGKD_CONTROL_SET// Size=0x10 (Id=1241)
{
    unsigned long TraceFlag;// Offset=0x0 Size=0x4
    unsigned long Dr7;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x8 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0xc Size=0x4
};

struct _IA64_DBGKD_CONTROL_SET// Size=0x14 (Id=1412)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long long CurrentSymbolStart;// Offset=0x4 Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0xc Size=0x8
};

struct _ARM_DBGKD_CONTROL_SET// Size=0xc (Id=1087)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _ARM64_DBGKD_CONTROL_SET// Size=0x18 (Id=1279)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long TraceFlag;// Offset=0x4 Size=0x4
    unsigned long long CurrentSymbolStart;// Offset=0x8 Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0x10 Size=0x8
};

struct _ARMCE_DBGKD_CONTROL_SET// Size=0xc (Id=832)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _PPC_DBGKD_CONTROL_SET// Size=0xc (Id=1536)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _DBGKD_ANY_CONTROL_SET// Size=0x1c (Id=684)
{
    union // Size=0x1c (Id=0)
    {
        struct _X86_DBGKD_CONTROL_SET X86ControlSet;// Offset=0x0 Size=0x10
        unsigned long AlphaControlSet;// Offset=0x0 Size=0x4
        struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;// Offset=0x0 Size=0x14
        struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet;// Offset=0x0 Size=0x1c
        struct _ARM_DBGKD_CONTROL_SET ArmControlSet;// Offset=0x0 Size=0xc
        struct _ARM64_DBGKD_CONTROL_SET Arm64ControlSet;// Offset=0x0 Size=0x18
        struct _ARMCE_DBGKD_CONTROL_SET ArmCeControlSet;// Offset=0x0 Size=0xc
        struct _PPC_DBGKD_CONTROL_SET PpcControlSet;// Offset=0x0 Size=0xc
    };
};

struct _DBGKD_CONTINUE2// Size=0x20 (Id=423)
{
    long ContinueStatus;// Offset=0x0 Size=0x4
    union // Size=0x1c (Id=0)
    {
        struct _AMD64_DBGKD_CONTROL_SET ControlSet;// Offset=0x4 Size=0x1c
        struct _DBGKD_ANY_CONTROL_SET AnyControlSet;// Offset=0x4 Size=0x1c
    };
};
