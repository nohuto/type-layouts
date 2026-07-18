union _MI_FLAGS// Size=0x8 (Id=1401)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long VerifierEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long KernelVerifierEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long LargePageKernel:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long StopOn4d:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long InitializationPhase:2;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x2
        unsigned long long PageKernelStacks:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long CheckZeroPages:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long ProcessorPrewalks:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long ProcessorPostwalks:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long CoverageBuild:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long CheckExecute:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long ProtectedPagesEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long SecureRelocations:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long StrongPageIdentity:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long StrongCodeGuarantees:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long HardCodeGuarantees:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long ExecutePagePrivilegeRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long SecureKernelCfgEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long FullHvci:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long BootDebuggerActive:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long KvaShadow:2;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x2
        unsigned long long ExceptionHandlingReady:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long ShadowStacksSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long AccessBitFenceRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long AccessBitReplacementCapability:2;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x2
        unsigned long long PfnDatabaseExists:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long PfnDatabaseGapsFilled:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long SystemPtesReady:1;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x1
        unsigned long long BootImageUnprivilegedPagesUnregistered:1;// Offset=0x0 Size=0x8 BitOffset=0x1f BitSize=0x1
        unsigned long long ImageProtectedSlabExecutableOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long SpecialReadOnlyProtectedSlabPages:1;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1
        unsigned long long SlabAllocatorsReady:1;// Offset=0x0 Size=0x8 BitOffset=0x22 BitSize=0x1
        unsigned long long KasanEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1
        unsigned long long HvptEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long HvptVisible:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long ProcessorsConfigured:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long GlobalBitsInitialized:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long GlobalBitsChanging:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long ProcessorSupportsShadowStacks:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
    };
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};
