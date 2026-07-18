union _MI_FLAGS// Size=0x4 (Id=1151)
{
    long EntireFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long VerifierEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long KernelVerifierEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long LargePageKernel:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long StopOn4d:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long InitializationPhase:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long PageKernelStacks:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long CheckZeroPages:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ProcessorPrewalks:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ProcessorPostwalks:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long CoverageBuild:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AccessBitReplacementDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long CheckExecute:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ProtectedPagesEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long SecureRelocations:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long StrongPageIdentity:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long StrongCodeGuarantees:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long HardCodeGuarantees:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ExecutePagePrivilegeRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long SecureKernelCfgEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long FullHvci:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long BootDebuggerActive:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long ExceptionHandlingReady:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long ShadowStacksSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AccessBitFenceRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long PfnDatabaseExists:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long DeferredHotAddsCompleted:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long SystemPtesReady:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
    };
};

struct _MI_TRIAGE_DUMP_DATA// Size=0x38 (Id=1868)
{
    unsigned long long BadPageCount;// Offset=0x0 Size=0x8
    long BadPagesDetected;// Offset=0x8 Size=0x4
    long ZeroedPageSingleBitErrorsDetected;// Offset=0xc Size=0x4
    long ScrubPasses;// Offset=0x10 Size=0x4
    long ScrubBadPagesFound;// Offset=0x14 Size=0x4
    unsigned long PageHashErrors;// Offset=0x18 Size=0x4
    unsigned long long FeatureBits;// Offset=0x20 Size=0x8
    unsigned long TimeZoneId;// Offset=0x28 Size=0x4
    union _MI_FLAGS Flags;// Offset=0x2c Size=0x4
    void * VsmConnection;// Offset=0x30 Size=0x8
};
