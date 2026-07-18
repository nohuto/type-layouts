struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PO_HIBER_PERF// Size=0x2e8 (Id=2305)
{
    unsigned long long HiberIoTicks;// Offset=0x0 Size=0x8
    unsigned long long HiberIoCpuTicks;// Offset=0x8 Size=0x8
    unsigned long long HiberInitTicks;// Offset=0x10 Size=0x8
    unsigned long long HiberHiberFileTicks;// Offset=0x18 Size=0x8
    unsigned long long BootCompressTicks;// Offset=0x20 Size=0x8
    unsigned long long KernelCompressTicks;// Offset=0x28 Size=0x8
    unsigned long long HiberSharedBufferTicks;// Offset=0x30 Size=0x8
    unsigned long long HiberChecksumTicks;// Offset=0x38 Size=0x8
    unsigned long long HiberChecksumIoTicks;// Offset=0x40 Size=0x8
    union _LARGE_INTEGER TotalHibernateTime;// Offset=0x48 Size=0x8
    union _LARGE_INTEGER HibernateCompleteTimestamp;// Offset=0x50 Size=0x8
    unsigned long POSTTime;// Offset=0x58 Size=0x4
    unsigned long ResumeBootMgrTime;// Offset=0x5c Size=0x4
    unsigned long BootmgrUserInputTime;// Offset=0x60 Size=0x4
    unsigned long long ResumeAppTicks;// Offset=0x68 Size=0x8
    unsigned long long ResumeAppStartTimestamp;// Offset=0x70 Size=0x8
    unsigned long long ResumeLibraryInitTicks;// Offset=0x78 Size=0x8
    unsigned long long ResumeInitTicks;// Offset=0x80 Size=0x8
    unsigned long long ResumeRestoreImageStartTimestamp;// Offset=0x88 Size=0x8
    unsigned long long ResumeHiberFileTicks;// Offset=0x90 Size=0x8
    unsigned long long ResumeIoTicks;// Offset=0x98 Size=0x8
    unsigned long long ResumeDecompressTicks;// Offset=0xa0 Size=0x8
    unsigned long long ResumeAllocateTicks;// Offset=0xa8 Size=0x8
    unsigned long long ResumeUserInOutTicks;// Offset=0xb0 Size=0x8
    unsigned long long ResumeMapTicks;// Offset=0xb8 Size=0x8
    unsigned long long ResumeUnmapTicks;// Offset=0xc0 Size=0x8
    unsigned long long ResumeChecksumTicks;// Offset=0xc8 Size=0x8
    unsigned long long ResumeChecksumIoTicks;// Offset=0xd0 Size=0x8
    unsigned long long ResumeKernelSwitchTimestamp;// Offset=0xd8 Size=0x8
    unsigned long long CyclesPerMs;// Offset=0xe0 Size=0x8
    unsigned long long WriteLogDataTimestamp;// Offset=0xe8 Size=0x8
    unsigned long long KernelReturnFromHandler;// Offset=0xf0 Size=0x8
    unsigned long long TimeStampCounterAtSwitchTime;// Offset=0xf8 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x100 Size=0x8
    unsigned long ProcessorCount;// Offset=0x108 Size=0x4
    unsigned long Reserved;// Offset=0x10c Size=0x4
    unsigned long long SleeperThreadEnd;// Offset=0x110 Size=0x8
    unsigned long long PostCmosUpdateTimestamp;// Offset=0x118 Size=0x8
    unsigned long long KernelReturnSystemPowerStateTimestamp;// Offset=0x120 Size=0x8
    unsigned long long IoBoundedness;// Offset=0x128 Size=0x8
    unsigned long long KernelDecompressTicks;// Offset=0x130 Size=0x8
    unsigned long long KernelIoTicks;// Offset=0x138 Size=0x8
    unsigned long long KernelCopyTicks;// Offset=0x140 Size=0x8
    unsigned long long ReadCheckCount;// Offset=0x148 Size=0x8
    unsigned long long KernelInitTicks;// Offset=0x150 Size=0x8
    unsigned long long KernelResumeHiberFileTicks;// Offset=0x158 Size=0x8
    unsigned long long KernelIoCpuTicks;// Offset=0x160 Size=0x8
    unsigned long long KernelSharedBufferTicks;// Offset=0x168 Size=0x8
    unsigned long long KernelAnimationTicks;// Offset=0x170 Size=0x8
    unsigned long long KernelChecksumTicks;// Offset=0x178 Size=0x8
    unsigned long long KernelChecksumIoTicks;// Offset=0x180 Size=0x8
    union _LARGE_INTEGER AnimationStart;// Offset=0x188 Size=0x8
    union _LARGE_INTEGER AnimationStop;// Offset=0x190 Size=0x8
    unsigned long DeviceResumeTime;// Offset=0x198 Size=0x4
    unsigned long long SecurePagesProcessed;// Offset=0x1a0 Size=0x8
    unsigned long long BootPagesProcessed;// Offset=0x1a8 Size=0x8
    unsigned long long KernelPagesProcessed;// Offset=0x1b0 Size=0x8
    unsigned long long BootBytesWritten;// Offset=0x1b8 Size=0x8
    unsigned long long KernelBytesWritten;// Offset=0x1c0 Size=0x8
    unsigned long long BootPagesWritten;// Offset=0x1c8 Size=0x8
    unsigned long long KernelPagesWritten;// Offset=0x1d0 Size=0x8
    unsigned long long BytesWritten;// Offset=0x1d8 Size=0x8
    unsigned long PagesWritten;// Offset=0x1e0 Size=0x4
    unsigned long FileRuns;// Offset=0x1e4 Size=0x4
    unsigned long NoMultiStageResumeReason;// Offset=0x1e8 Size=0x4
    unsigned long MaxHuffRatio;// Offset=0x1ec Size=0x4
    unsigned long long AdjustedTotalResumeTime;// Offset=0x1f0 Size=0x8
    unsigned long long ResumeCompleteTimestamp;// Offset=0x1f8 Size=0x8
    unsigned long long WinresumeExitTimestamp;// Offset=0x200 Size=0x8
    unsigned long long TcbLoaderStartTimestamp;// Offset=0x208 Size=0x8
    unsigned long long TcbLoaderEndTimestamp;// Offset=0x210 Size=0x8
    unsigned long long RemappedPageLookupCycles;// Offset=0x218 Size=0x8
    unsigned long long TcbLaunchPrepareCycles;// Offset=0x220 Size=0x8
    unsigned long long TcbLaunchPrepareDataCycles;// Offset=0x228 Size=0x8
    unsigned long long TcbRestoreStateCycles;// Offset=0x230 Size=0x8
    unsigned long long DecryptVsmPagesPhase0Cycles;// Offset=0x238 Size=0x8
    unsigned long long DecryptVsmPagesPhase1Cycles;// Offset=0x240 Size=0x8
    unsigned long long DecryptVsmPagesPhase2Cycles;// Offset=0x248 Size=0x8
    unsigned long long TcbLoaderAuthenticateCycles;// Offset=0x250 Size=0x8
    unsigned long long TcbLoaderDecryptCycles;// Offset=0x258 Size=0x8
    unsigned long long TcbLoaderValidateCycles;// Offset=0x260 Size=0x8
    unsigned long long BootPhaseBlockCountByMethod[5];// Offset=0x268 Size=0x28
    unsigned long long KernelPhaseBlockCountByMethod[5];// Offset=0x290 Size=0x28
    unsigned long long BootPhaseWriteIoTicks;// Offset=0x2b8 Size=0x8
    unsigned long long KernelPhaseWriteIoTicks;// Offset=0x2c0 Size=0x8
    unsigned long long SecurePhaseWriteIoTicks;// Offset=0x2c8 Size=0x8
    unsigned long long BootPhaseSuspendWallTicks;// Offset=0x2d0 Size=0x8
    unsigned long long KernelPhaseSuspendWallTicks;// Offset=0x2d8 Size=0x8
    unsigned long long KernelPhaseResumeWallTicks;// Offset=0x2e0 Size=0x8
};

struct PO_MEMORY_IMAGE// Size=0x4d8 (Id=1973)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long ImageType;// Offset=0x4 Size=0x4
    unsigned long CheckSum;// Offset=0x8 Size=0x4
    unsigned long LengthSelf;// Offset=0xc Size=0x4
    unsigned long long PageSelf;// Offset=0x10 Size=0x8
    unsigned long PageSize;// Offset=0x18 Size=0x4
    union _LARGE_INTEGER SystemTime;// Offset=0x20 Size=0x8
    unsigned long long InterruptTime;// Offset=0x28 Size=0x8
    unsigned long long FeatureFlags;// Offset=0x30 Size=0x8
    unsigned char HiberFlags;// Offset=0x38 Size=0x1
    unsigned char HiberSimulateFlags;// Offset=0x39 Size=0x1
    unsigned char spare[2];// Offset=0x3a Size=0x2
    unsigned long NoHiberPtes;// Offset=0x3c Size=0x4
    unsigned long long HiberVa;// Offset=0x40 Size=0x8
    unsigned long RestoredPagesBitmapSize;// Offset=0x48 Size=0x4
    unsigned long RestoredPagesBitmapBitmapCheck;// Offset=0x4c Size=0x4
    unsigned long WakeCheck;// Offset=0x50 Size=0x4
    unsigned long long NumPagesForLoader;// Offset=0x58 Size=0x8
    unsigned long long FirstSecureRestorePage;// Offset=0x60 Size=0x8
    unsigned long long FirstBootRestorePage;// Offset=0x68 Size=0x8
    unsigned long long FirstKernelRestorePage;// Offset=0x70 Size=0x8
    unsigned long long FirstChecksumRestorePage;// Offset=0x78 Size=0x8
    unsigned long long NoChecksumEntries;// Offset=0x80 Size=0x8
    struct _PO_HIBER_PERF PerfInfo;// Offset=0x88 Size=0x2e8
    unsigned long FirmwareRuntimeInformationPages;// Offset=0x370 Size=0x4
    unsigned long long FirmwareRuntimeInformation[1];// Offset=0x378 Size=0x8
    unsigned long long IumFirmwareRuntimeInformationPageCount;// Offset=0x380 Size=0x8
    unsigned long long IumFirmwareRuntimeInformationPfnBase;// Offset=0x388 Size=0x8
    unsigned long SpareUlong;// Offset=0x390 Size=0x4
    unsigned long NoBootLoaderLogPages;// Offset=0x394 Size=0x4
    unsigned long long BootLoaderLogPages[24];// Offset=0x398 Size=0xc0
    unsigned long NotUsed;// Offset=0x458 Size=0x4
    unsigned long ResumeContextCheck;// Offset=0x45c Size=0x4
    unsigned long ResumeContextPages;// Offset=0x460 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Hiberboot:1;// Offset=0x464 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SecureLaunched:1;// Offset=0x464 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SecureBoot:1;// Offset=0x464 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Fasr:1;// Offset=0x464 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HiberResumeXhciHandoffSkip:1;// Offset=0x464 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InitializeUSBCore:1;// Offset=0x464 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ValidUSBCoreId:1;// Offset=0x464 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SkipMemoryMapValidation:1;// Offset=0x464 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SuppressResumePrompt:1;// Offset=0x464 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long HardwareSignatureValid:1;// Offset=0x464 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long RootPartition:1;// Offset=0x464 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Feature_PlutonDynamicUpgrade_Enabled:1;// Offset=0x464 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved:20;// Offset=0x464 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long long HvPageTableRoot;// Offset=0x468 Size=0x8
    unsigned long long HvEntryPoint;// Offset=0x470 Size=0x8
    unsigned long long HvReservedTransitionAddress;// Offset=0x478 Size=0x8
    unsigned long long HvReservedTransitionAddressSize;// Offset=0x480 Size=0x8
    unsigned long long BootFlags;// Offset=0x488 Size=0x8
    unsigned long long RestoreProcessorStateRoutine;// Offset=0x490 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x498 Size=0x8
    unsigned long long BitlockerKeyPfns[4];// Offset=0x4a0 Size=0x20
    unsigned long HardwareSignature;// Offset=0x4c0 Size=0x4
    union _LARGE_INTEGER SMBiosTablePhysicalAddress;// Offset=0x4c8 Size=0x8
    unsigned long SMBiosTableLength;// Offset=0x4d0 Size=0x4
    unsigned char SMBiosMajorVersion;// Offset=0x4d4 Size=0x1
    unsigned char SMBiosMinorVersion;// Offset=0x4d5 Size=0x1
    unsigned char USBCoreId;// Offset=0x4d6 Size=0x1
};
