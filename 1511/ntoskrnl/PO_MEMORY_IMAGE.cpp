struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PO_HIBER_PERF// Size=0x1e0 (Id=1397)
{
    unsigned long long HiberIoTicks;// Offset=0x0 Size=0x8
    unsigned long long HiberIoCpuTicks;// Offset=0x8 Size=0x8
    unsigned long long HiberInitTicks;// Offset=0x10 Size=0x8
    unsigned long long HiberHiberFileTicks;// Offset=0x18 Size=0x8
    unsigned long long HiberCompressTicks;// Offset=0x20 Size=0x8
    unsigned long long HiberSharedBufferTicks;// Offset=0x28 Size=0x8
    unsigned long long HiberChecksumTicks;// Offset=0x30 Size=0x8
    unsigned long long HiberChecksumIoTicks;// Offset=0x38 Size=0x8
    union _LARGE_INTEGER TotalHibernateTime;// Offset=0x40 Size=0x8
    unsigned long POSTTime;// Offset=0x48 Size=0x4
    unsigned long ResumeBootMgrTime;// Offset=0x4c Size=0x4
    unsigned long BootmgrUserInputTime;// Offset=0x50 Size=0x4
    unsigned long long ResumeAppTicks;// Offset=0x58 Size=0x8
    unsigned long long ResumeAppStartTimestamp;// Offset=0x60 Size=0x8
    unsigned long long ResumeLibraryInitTicks;// Offset=0x68 Size=0x8
    unsigned long long ResumeInitTicks;// Offset=0x70 Size=0x8
    unsigned long long ResumeRestoreImageStartTimestamp;// Offset=0x78 Size=0x8
    unsigned long long ResumeHiberFileTicks;// Offset=0x80 Size=0x8
    unsigned long long ResumeIoTicks;// Offset=0x88 Size=0x8
    unsigned long long ResumeDecompressTicks;// Offset=0x90 Size=0x8
    unsigned long long ResumeAllocateTicks;// Offset=0x98 Size=0x8
    unsigned long long ResumeUserInOutTicks;// Offset=0xa0 Size=0x8
    unsigned long long ResumeMapTicks;// Offset=0xa8 Size=0x8
    unsigned long long ResumeUnmapTicks;// Offset=0xb0 Size=0x8
    unsigned long long ResumeChecksumTicks;// Offset=0xb8 Size=0x8
    unsigned long long ResumeChecksumIoTicks;// Offset=0xc0 Size=0x8
    unsigned long long ResumeKernelSwitchTimestamp;// Offset=0xc8 Size=0x8
    unsigned long long WriteLogDataTimestamp;// Offset=0xd0 Size=0x8
    unsigned long long KernelReturnFromHandler;// Offset=0xd8 Size=0x8
    unsigned long long TimeStampCounterAtSwitchTime;// Offset=0xe0 Size=0x8
    unsigned long long HalTscOffset;// Offset=0xe8 Size=0x8
    unsigned long long HvlTscOffset;// Offset=0xf0 Size=0x8
    unsigned long long SleeperThreadEnd;// Offset=0xf8 Size=0x8
    unsigned long long KernelReturnSystemPowerStateTimestamp;// Offset=0x100 Size=0x8
    unsigned long long IoBoundedness;// Offset=0x108 Size=0x8
    unsigned long long KernelDecompressTicks;// Offset=0x110 Size=0x8
    unsigned long long KernelIoTicks;// Offset=0x118 Size=0x8
    unsigned long long KernelCopyTicks;// Offset=0x120 Size=0x8
    unsigned long long ReadCheckCount;// Offset=0x128 Size=0x8
    unsigned long long KernelInitTicks;// Offset=0x130 Size=0x8
    unsigned long long KernelResumeHiberFileTicks;// Offset=0x138 Size=0x8
    unsigned long long KernelIoCpuTicks;// Offset=0x140 Size=0x8
    unsigned long long KernelSharedBufferTicks;// Offset=0x148 Size=0x8
    unsigned long long KernelAnimationTicks;// Offset=0x150 Size=0x8
    unsigned long long KernelChecksumTicks;// Offset=0x158 Size=0x8
    unsigned long long KernelChecksumIoTicks;// Offset=0x160 Size=0x8
    union _LARGE_INTEGER AnimationStart;// Offset=0x168 Size=0x8
    union _LARGE_INTEGER AnimationStop;// Offset=0x170 Size=0x8
    unsigned long DeviceResumeTime;// Offset=0x178 Size=0x4
    unsigned long long SecurePagesProcessed;// Offset=0x180 Size=0x8
    unsigned long long BootPagesProcessed;// Offset=0x188 Size=0x8
    unsigned long long KernelPagesProcessed;// Offset=0x190 Size=0x8
    unsigned long long BootBytesWritten;// Offset=0x198 Size=0x8
    unsigned long long KernelBytesWritten;// Offset=0x1a0 Size=0x8
    unsigned long long BootPagesWritten;// Offset=0x1a8 Size=0x8
    unsigned long long KernelPagesWritten;// Offset=0x1b0 Size=0x8
    unsigned long long BytesWritten;// Offset=0x1b8 Size=0x8
    unsigned long PagesWritten;// Offset=0x1c0 Size=0x4
    unsigned long FileRuns;// Offset=0x1c4 Size=0x4
    unsigned long NoMultiStageResumeReason;// Offset=0x1c8 Size=0x4
    unsigned long MaxHuffRatio;// Offset=0x1cc Size=0x4
    unsigned long long AdjustedTotalResumeTime;// Offset=0x1d0 Size=0x8
    unsigned long long ResumeCompleteTimestamp;// Offset=0x1d8 Size=0x8
};

struct PO_MEMORY_IMAGE// Size=0x3b0 (Id=1393)
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
    unsigned char spare[3];// Offset=0x39 Size=0x3
    unsigned long NoHiberPtes;// Offset=0x3c Size=0x4
    unsigned long long HiberVa;// Offset=0x40 Size=0x8
    unsigned long NoFreePages;// Offset=0x48 Size=0x4
    unsigned long FreeMapCheck;// Offset=0x4c Size=0x4
    unsigned long WakeCheck;// Offset=0x50 Size=0x4
    unsigned long long NumPagesForLoader;// Offset=0x58 Size=0x8
    unsigned long long FirstSecureRestorePage;// Offset=0x60 Size=0x8
    unsigned long long FirstBootRestorePage;// Offset=0x68 Size=0x8
    unsigned long long FirstKernelRestorePage;// Offset=0x70 Size=0x8
    unsigned long long FirstChecksumRestorePage;// Offset=0x78 Size=0x8
    unsigned long long NoChecksumEntries;// Offset=0x80 Size=0x8
    struct _PO_HIBER_PERF PerfInfo;// Offset=0x88 Size=0x1e0
    unsigned long FirmwareRuntimeInformationPages;// Offset=0x268 Size=0x4
    unsigned long long FirmwareRuntimeInformation[1];// Offset=0x270 Size=0x8
    unsigned long SiLogOffset;// Offset=0x278 Size=0x4
    unsigned long NoBootLoaderLogPages;// Offset=0x27c Size=0x4
    unsigned long long BootLoaderLogPages[24];// Offset=0x280 Size=0xc0
    unsigned long NotUsed;// Offset=0x340 Size=0x4
    unsigned long ResumeContextCheck;// Offset=0x344 Size=0x4
    unsigned long ResumeContextPages;// Offset=0x348 Size=0x4
    unsigned char Hiberboot;// Offset=0x34c Size=0x1
    unsigned long long HvCr3;// Offset=0x350 Size=0x8
    unsigned long long HvEntryPoint;// Offset=0x358 Size=0x8
    unsigned long long HvReservedTransitionAddress;// Offset=0x360 Size=0x8
    unsigned long long HvReservedTransitionAddressSize;// Offset=0x368 Size=0x8
    unsigned long long BootFlags;// Offset=0x370 Size=0x8
    unsigned long long HalEntryPointPhysical;// Offset=0x378 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x380 Size=0x8
    unsigned long long BitlockerKeyPfns[4];// Offset=0x388 Size=0x20
    unsigned long HardwareSignature;// Offset=0x3a8 Size=0x4
};
