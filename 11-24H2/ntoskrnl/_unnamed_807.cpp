struct _DBGKD_READ_MEMORY64// Size=0x10 (Id=791)
{
    unsigned long long TargetBaseAddress;// Offset=0x0 Size=0x8
    unsigned long TransferCount;// Offset=0x8 Size=0x4
    unsigned long ActualBytesRead;// Offset=0xc Size=0x4
};

struct _DBGKD_WRITE_MEMORY64// Size=0x10 (Id=793)
{
    unsigned long long TargetBaseAddress;// Offset=0x0 Size=0x8
    unsigned long TransferCount;// Offset=0x8 Size=0x4
    unsigned long ActualBytesWritten;// Offset=0xc Size=0x4
};

struct _DBGKD_GET_CONTEXT// Size=0x4 (Id=1752)
{
    unsigned long Unused;// Offset=0x0 Size=0x4
};

struct _DBGKD_SET_CONTEXT// Size=0x4 (Id=1222)
{
    unsigned long ContextFlags;// Offset=0x0 Size=0x4
};

struct _DBGKD_WRITE_BREAKPOINT64// Size=0x10 (Id=795)
{
    unsigned long long BreakPointAddress;// Offset=0x0 Size=0x8
    unsigned long BreakPointHandle;// Offset=0x8 Size=0x4
};

struct _DBGKD_RESTORE_BREAKPOINT// Size=0x4 (Id=814)
{
    unsigned long BreakPointHandle;// Offset=0x0 Size=0x4
};

struct _DBGKD_CONTINUE// Size=0x4 (Id=815)
{
    long ContinueStatus;// Offset=0x0 Size=0x4
};

struct _AMD64_DBGKD_CONTROL_SET// Size=0x1c (Id=1462)
{
    unsigned long TraceFlag;// Offset=0x0 Size=0x4
    unsigned long long Dr7;// Offset=0x4 Size=0x8
    unsigned long long CurrentSymbolStart;// Offset=0xc Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0x14 Size=0x8
};

struct _X86_DBGKD_CONTROL_SET// Size=0x10 (Id=1757)
{
    unsigned long TraceFlag;// Offset=0x0 Size=0x4
    unsigned long Dr7;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x8 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0xc Size=0x4
};

struct _IA64_DBGKD_CONTROL_SET// Size=0x14 (Id=1936)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long long CurrentSymbolStart;// Offset=0x4 Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0xc Size=0x8
};

struct _ARM_DBGKD_CONTROL_SET// Size=0xc (Id=1583)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _ARM64_DBGKD_CONTROL_SET// Size=0x18 (Id=1792)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long TraceFlag;// Offset=0x4 Size=0x4
    unsigned long long CurrentSymbolStart;// Offset=0x8 Size=0x8
    unsigned long long CurrentSymbolEnd;// Offset=0x10 Size=0x8
};

struct _ARMCE_DBGKD_CONTROL_SET// Size=0xc (Id=1286)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _PPC_DBGKD_CONTROL_SET// Size=0xc (Id=2081)
{
    unsigned long Continue;// Offset=0x0 Size=0x4
    unsigned long CurrentSymbolStart;// Offset=0x4 Size=0x4
    unsigned long CurrentSymbolEnd;// Offset=0x8 Size=0x4
};

struct _DBGKD_ANY_CONTROL_SET// Size=0x1c (Id=1123)
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

struct _DBGKD_CONTINUE2// Size=0x20 (Id=816)
{
    long ContinueStatus;// Offset=0x0 Size=0x4
    union // Size=0x1c (Id=0)
    {
        struct _AMD64_DBGKD_CONTROL_SET ControlSet;// Offset=0x4 Size=0x1c
        struct _DBGKD_ANY_CONTROL_SET AnyControlSet;// Offset=0x4 Size=0x1c
    };
};

struct _DBGKD_READ_WRITE_IO64// Size=0x10 (Id=797)
{
    unsigned long long IoAddress;// Offset=0x0 Size=0x8
    unsigned long DataSize;// Offset=0x8 Size=0x4
    unsigned long DataValue;// Offset=0xc Size=0x4
};

struct _DBGKD_READ_WRITE_IO_EXTENDED64// Size=0x20 (Id=799)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long InterfaceType;// Offset=0x4 Size=0x4
    unsigned long BusNumber;// Offset=0x8 Size=0x4
    unsigned long AddressSpace;// Offset=0xc Size=0x4
    unsigned long long IoAddress;// Offset=0x10 Size=0x8
    unsigned long DataValue;// Offset=0x18 Size=0x4
};

struct _DBGKD_QUERY_SPECIAL_CALLS// Size=0x4 (Id=1105)
{
    unsigned long NumberOfSpecialCalls;// Offset=0x0 Size=0x4
};

struct _DBGKD_SET_SPECIAL_CALL64// Size=0x8 (Id=802)
{
    unsigned long long SpecialCall;// Offset=0x0 Size=0x8
};

struct _DBGKD_SET_INTERNAL_BREAKPOINT64// Size=0x10 (Id=804)
{
    unsigned long long BreakpointAddress;// Offset=0x0 Size=0x8
    unsigned long Flags;// Offset=0x8 Size=0x4
};

struct _DBGKD_GET_INTERNAL_BREAKPOINT64// Size=0x20 (Id=805)
{
    unsigned long long BreakpointAddress;// Offset=0x0 Size=0x8
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long Calls;// Offset=0xc Size=0x4
    unsigned long MaxCallsPerPeriod;// Offset=0x10 Size=0x4
    unsigned long MinInstructions;// Offset=0x14 Size=0x4
    unsigned long MaxInstructions;// Offset=0x18 Size=0x4
    unsigned long TotalInstructions;// Offset=0x1c Size=0x4
};

struct _DBGKD_GET_VERSION64// Size=0x28 (Id=1963)
{
    unsigned short MajorVersion;// Offset=0x0 Size=0x2
    unsigned short MinorVersion;// Offset=0x2 Size=0x2
    unsigned char ProtocolVersion;// Offset=0x4 Size=0x1
    unsigned char KdSecondaryVersion;// Offset=0x5 Size=0x1
    unsigned short Flags;// Offset=0x6 Size=0x2
    unsigned short MachineType;// Offset=0x8 Size=0x2
    unsigned char MaxPacketType;// Offset=0xa Size=0x1
    unsigned char MaxStateChange;// Offset=0xb Size=0x1
    unsigned char MaxManipulate;// Offset=0xc Size=0x1
    unsigned char Simulation;// Offset=0xd Size=0x1
    unsigned short Unused[1];// Offset=0xe Size=0x2
    unsigned long long KernBase;// Offset=0x10 Size=0x8
    unsigned long long PsLoadedModuleList;// Offset=0x18 Size=0x8
    unsigned long long DebuggerDataList;// Offset=0x20 Size=0x8
};

struct _DBGKD_BREAKPOINTEX// Size=0x8 (Id=812)
{
    unsigned long BreakPointCount;// Offset=0x0 Size=0x4
    long ContinueStatus;// Offset=0x4 Size=0x4
};

struct _DBGKD_READ_WRITE_MSR// Size=0xc (Id=811)
{
    unsigned long Msr;// Offset=0x0 Size=0x4
    unsigned long DataValueLow;// Offset=0x4 Size=0x4
    unsigned long DataValueHigh;// Offset=0x8 Size=0x4
};

struct _DBGKD_SEARCH_MEMORY// Size=0x18 (Id=813)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long SearchAddress;// Offset=0x0 Size=0x8
        unsigned long long FoundAddress;// Offset=0x0 Size=0x8
    };
    unsigned long long SearchLength;// Offset=0x8 Size=0x8
    unsigned long PatternLength;// Offset=0x10 Size=0x4
};

struct _DBGKD_GET_SET_BUS_DATA// Size=0x14 (Id=1141)
{
    unsigned long BusDataType;// Offset=0x0 Size=0x4
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    unsigned long SlotNumber;// Offset=0x8 Size=0x4
    unsigned long Offset;// Offset=0xc Size=0x4
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _DBGKD_FILL_MEMORY// Size=0x10 (Id=2088)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned short Flags;// Offset=0xc Size=0x2
    unsigned short PatternLength;// Offset=0xe Size=0x2
};

struct _DBGKD_QUERY_MEMORY// Size=0x18 (Id=1231)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned long long Reserved;// Offset=0x8 Size=0x8
    unsigned long AddressSpace;// Offset=0x10 Size=0x4
    unsigned long Flags;// Offset=0x14 Size=0x4
};

struct _DBGKD_SWITCH_PARTITION// Size=0x4 (Id=1925)
{
    unsigned long Partition;// Offset=0x0 Size=0x4
};

struct _DBGKD_CONTEXT_EX// Size=0xc (Id=1993)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long ByteCount;// Offset=0x4 Size=0x4
    unsigned long BytesCopied;// Offset=0x8 Size=0x4
};

struct _DBGKD_WRITE_CUSTOM_BREAKPOINT// Size=0x18 (Id=1230)
{
    unsigned long long BreakPointAddress;// Offset=0x0 Size=0x8
    unsigned long long BreakPointInstruction;// Offset=0x8 Size=0x8
    unsigned long BreakPointHandle;// Offset=0x10 Size=0x4
    unsigned char BreakPointInstructionSize;// Offset=0x14 Size=0x1
    unsigned char BreakPointInstructionAlignment;// Offset=0x15 Size=0x1
};

union _unnamed_807// Size=0x28 (Id=807)
{
    union // Size=0x28 (Id=0)
    {
        struct _DBGKD_READ_MEMORY64 ReadMemory;// Offset=0x0 Size=0x10
        struct _DBGKD_WRITE_MEMORY64 WriteMemory;// Offset=0x0 Size=0x10
        struct _DBGKD_GET_CONTEXT GetContext;// Offset=0x0 Size=0x4
        struct _DBGKD_SET_CONTEXT SetContext;// Offset=0x0 Size=0x4
        struct _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;// Offset=0x0 Size=0x10
        struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;// Offset=0x0 Size=0x4
        struct _DBGKD_CONTINUE Continue;// Offset=0x0 Size=0x4
        struct _DBGKD_CONTINUE2 Continue2;// Offset=0x0 Size=0x20
        struct _DBGKD_READ_WRITE_IO64 ReadWriteIo;// Offset=0x0 Size=0x10
        struct _DBGKD_READ_WRITE_IO_EXTENDED64 ReadWriteIoExtended;// Offset=0x0 Size=0x20
        struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;// Offset=0x0 Size=0x4
        struct _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;// Offset=0x0 Size=0x8
        struct _DBGKD_SET_INTERNAL_BREAKPOINT64 SetInternalBreakpoint;// Offset=0x0 Size=0x10
        struct _DBGKD_GET_INTERNAL_BREAKPOINT64 GetInternalBreakpoint;// Offset=0x0 Size=0x20
        struct _DBGKD_GET_VERSION64 GetVersion64;// Offset=0x0 Size=0x28
        struct _DBGKD_BREAKPOINTEX BreakPointEx;// Offset=0x0 Size=0x8
        struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;// Offset=0x0 Size=0xc
        struct _DBGKD_SEARCH_MEMORY SearchMemory;// Offset=0x0 Size=0x18
        struct _DBGKD_GET_SET_BUS_DATA GetSetBusData;// Offset=0x0 Size=0x14
        struct _DBGKD_FILL_MEMORY FillMemory;// Offset=0x0 Size=0x10
        struct _DBGKD_QUERY_MEMORY QueryMemory;// Offset=0x0 Size=0x18
        struct _DBGKD_SWITCH_PARTITION SwitchPartition;// Offset=0x0 Size=0x4
        struct _DBGKD_CONTEXT_EX GetContextEx;// Offset=0x0 Size=0xc
        struct _DBGKD_CONTEXT_EX SetContextEx;// Offset=0x0 Size=0xc
        struct _DBGKD_WRITE_CUSTOM_BREAKPOINT WriteCustomBreakPoint;// Offset=0x0 Size=0x18
    };
};
