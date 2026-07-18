struct _DBGKD_READ_MEMORY32// Size=0xc (Id=349)
{
    unsigned long TargetBaseAddress;// Offset=0x0 Size=0x4
    unsigned long TransferCount;// Offset=0x4 Size=0x4
    unsigned long ActualBytesRead;// Offset=0x8 Size=0x4
};

struct _DBGKD_WRITE_MEMORY32// Size=0xc (Id=351)
{
    unsigned long TargetBaseAddress;// Offset=0x0 Size=0x4
    unsigned long TransferCount;// Offset=0x4 Size=0x4
    unsigned long ActualBytesWritten;// Offset=0x8 Size=0x4
};

struct _DBGKD_READ_MEMORY64// Size=0x10 (Id=348)
{
    unsigned long long TargetBaseAddress;// Offset=0x0 Size=0x8
    unsigned long TransferCount;// Offset=0x8 Size=0x4
    unsigned long ActualBytesRead;// Offset=0xc Size=0x4
};

struct _DBGKD_WRITE_MEMORY64// Size=0x10 (Id=350)
{
    unsigned long long TargetBaseAddress;// Offset=0x0 Size=0x8
    unsigned long TransferCount;// Offset=0x8 Size=0x4
    unsigned long ActualBytesWritten;// Offset=0xc Size=0x4
};

struct _DBGKD_GET_CONTEXT// Size=0x4 (Id=1162)
{
    unsigned long Unused;// Offset=0x0 Size=0x4
};

struct _DBGKD_SET_CONTEXT// Size=0x4 (Id=704)
{
    unsigned long ContextFlags;// Offset=0x0 Size=0x4
};

struct _DBGKD_WRITE_BREAKPOINT32// Size=0x8 (Id=353)
{
    unsigned long BreakPointAddress;// Offset=0x0 Size=0x4
    unsigned long BreakPointHandle;// Offset=0x4 Size=0x4
};

struct _DBGKD_RESTORE_BREAKPOINT// Size=0x4 (Id=371)
{
    unsigned long BreakPointHandle;// Offset=0x0 Size=0x4
};

struct _DBGKD_CONTINUE// Size=0x4 (Id=372)
{
    long ContinueStatus;// Offset=0x0 Size=0x4
};

struct _AMD64_DBGKD_CONTROL_SET// Size=0x1c (Id=916)
{
    unsigned long TraceFlag;// Offset=0x0 Size=0x4
    unsigned long long Dr7;// Offset=0x4 Size=0x8
    unsigned long long CurrentSymbolStart;// Offset=0xc Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0x14 Size=0x8
};

struct _X86_DBGKD_CONTROL_SET// Size=0x10 (Id=1166)
{
    unsigned long TraceFlag;// Offset=0x0 Size=0x4
    unsigned long Dr7;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x8 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0xc Size=0x4
};

struct _IA64_DBGKD_CONTROL_SET// Size=0x14 (Id=1316)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long long CurrentSymbolStart;// Offset=0x4 Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0xc Size=0x8
};

struct _ARM_DBGKD_CONTROL_SET// Size=0xc (Id=1017)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _ARM64_DBGKD_CONTROL_SET// Size=0x18 (Id=1199)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long TraceFlag;// Offset=0x4 Size=0x4
    unsigned long long CurrentSymbolStart;// Offset=0x8 Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0x10 Size=0x8
};

struct _ARMCE_DBGKD_CONTROL_SET// Size=0xc (Id=768)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _PPC_DBGKD_CONTROL_SET// Size=0xc (Id=1447)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _DBGKD_ANY_CONTROL_SET// Size=0x1c (Id=622)
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

struct _DBGKD_CONTINUE2// Size=0x20 (Id=373)
{
    long ContinueStatus;// Offset=0x0 Size=0x4
    union // Size=0x1c (Id=0)
    {
        struct _AMD64_DBGKD_CONTROL_SET ControlSet;// Offset=0x4 Size=0x1c
        struct _DBGKD_ANY_CONTROL_SET AnyControlSet;// Offset=0x4 Size=0x1c
    };
};

struct _DBGKD_READ_WRITE_IO32// Size=0xc (Id=355)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long IoAddress;// Offset=0x4 Size=0x4
    unsigned long DataValue;// Offset=0x8 Size=0x4
};

struct _DBGKD_READ_WRITE_IO_EXTENDED32// Size=0x18 (Id=357)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long InterfaceType;// Offset=0x4 Size=0x4
    unsigned long BusNumber;// Offset=0x8 Size=0x4
    unsigned long AddressSpace;// Offset=0xc Size=0x4
    unsigned long IoAddress;// Offset=0x10 Size=0x4
    unsigned long DataValue;// Offset=0x14 Size=0x4
};

struct _DBGKD_QUERY_SPECIAL_CALLS// Size=0x4 (Id=601)
{
    unsigned long NumberOfSpecialCalls;// Offset=0x0 Size=0x4
};

struct _DBGKD_SET_SPECIAL_CALL32// Size=0x4 (Id=358)
{
    unsigned long SpecialCall;// Offset=0x0 Size=0x4
};

struct _DBGKD_SET_INTERNAL_BREAKPOINT32// Size=0x8 (Id=360)
{
    unsigned long BreakpointAddress;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
};

struct _DBGKD_GET_INTERNAL_BREAKPOINT32// Size=0x1c (Id=363)
{
    unsigned long BreakpointAddress;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long Calls;// Offset=0x8 Size=0x4
    unsigned long MaxCallsPerPeriod;// Offset=0xc Size=0x4
    unsigned long MinInstructions;// Offset=0x10 Size=0x4
    unsigned long MaxInstructions;// Offset=0x14 Size=0x4
    unsigned long TotalInstructions;// Offset=0x18 Size=0x4
};

struct _DBGKD_GET_VERSION32// Size=0x28 (Id=597)
{
    unsigned short MajorVersion;// Offset=0x0 Size=0x2
    unsigned short MinorVersion;// Offset=0x2 Size=0x2
    unsigned short ProtocolVersion;// Offset=0x4 Size=0x2
    unsigned short Flags;// Offset=0x6 Size=0x2
    unsigned long KernBase;// Offset=0x8 Size=0x4
    unsigned long PsLoadedModuleList;// Offset=0xc Size=0x4
    unsigned short MachineType;// Offset=0x10 Size=0x2
    unsigned short ThCallbackStack;// Offset=0x12 Size=0x2
    unsigned short NextCallback;// Offset=0x14 Size=0x2
    unsigned short FramePointer;// Offset=0x16 Size=0x2
    unsigned long KiCallUserMode;// Offset=0x18 Size=0x4
    unsigned long KeUserCallbackDispatcher;// Offset=0x1c Size=0x4
    unsigned long BreakpointWithStatus;// Offset=0x20 Size=0x4
    unsigned long DebuggerDataList;// Offset=0x24 Size=0x4
};

struct _DBGKD_BREAKPOINTEX// Size=0x8 (Id=369)
{
    unsigned long BreakPointCount;// Offset=0x0 Size=0x4
    long ContinueStatus;// Offset=0x4 Size=0x4
};

struct _DBGKD_READ_WRITE_MSR// Size=0xc (Id=368)
{
    unsigned long Msr;// Offset=0x0 Size=0x4
    unsigned long DataValueLow;// Offset=0x4 Size=0x4
    unsigned long DataValueHigh;// Offset=0x8 Size=0x4
};

struct _DBGKD_SEARCH_MEMORY// Size=0x18 (Id=370)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long SearchAddress;// Offset=0x0 Size=0x8
        unsigned long long FoundAddress;// Offset=0x0 Size=0x8
    };
    unsigned long long SearchLength;// Offset=0x8 Size=0x8
    unsigned long PatternLength;// Offset=0x10 Size=0x4
};

struct _DBGKD_CONTEXT_EX// Size=0xc (Id=1367)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long ByteCount;// Offset=0x4 Size=0x4
    unsigned long BytesCopied;// Offset=0x8 Size=0x4
};

union _unnamed_366// Size=0x28 (Id=366)
{
    union // Size=0x28 (Id=0)
    {
        struct _DBGKD_READ_MEMORY32 ReadMemory;// Offset=0x0 Size=0xc
        struct _DBGKD_WRITE_MEMORY32 WriteMemory;// Offset=0x0 Size=0xc
        struct _DBGKD_READ_MEMORY64 ReadMemory64;// Offset=0x0 Size=0x10
        struct _DBGKD_WRITE_MEMORY64 WriteMemory64;// Offset=0x0 Size=0x10
        struct _DBGKD_GET_CONTEXT GetContext;// Offset=0x0 Size=0x4
        struct _DBGKD_SET_CONTEXT SetContext;// Offset=0x0 Size=0x4
        struct _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;// Offset=0x0 Size=0x8
        struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;// Offset=0x0 Size=0x4
        struct _DBGKD_CONTINUE Continue;// Offset=0x0 Size=0x4
        struct _DBGKD_CONTINUE2 Continue2;// Offset=0x0 Size=0x20
        struct _DBGKD_READ_WRITE_IO32 ReadWriteIo;// Offset=0x0 Size=0xc
        struct _DBGKD_READ_WRITE_IO_EXTENDED32 ReadWriteIoExtended;// Offset=0x0 Size=0x18
        struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;// Offset=0x0 Size=0x4
        struct _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;// Offset=0x0 Size=0x4
        struct _DBGKD_SET_INTERNAL_BREAKPOINT32 SetInternalBreakpoint;// Offset=0x0 Size=0x8
        struct _DBGKD_GET_INTERNAL_BREAKPOINT32 GetInternalBreakpoint;// Offset=0x0 Size=0x1c
        struct _DBGKD_GET_VERSION32 GetVersion32;// Offset=0x0 Size=0x28
        struct _DBGKD_BREAKPOINTEX BreakPointEx;// Offset=0x0 Size=0x8
        struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;// Offset=0x0 Size=0xc
        struct _DBGKD_SEARCH_MEMORY SearchMemory;// Offset=0x0 Size=0x18
        struct _DBGKD_CONTEXT_EX GetContextEx;// Offset=0x0 Size=0xc
        struct _DBGKD_CONTEXT_EX SetContextEx;// Offset=0x0 Size=0xc
    };
};
