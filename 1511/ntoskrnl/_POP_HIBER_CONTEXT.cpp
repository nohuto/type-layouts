struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _POP_IO_STATUS
{
    IoReady=0,
    IoPending=1,
    IoDone=2
};

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

struct _POP_IO_INFO// Size=0x70 (Id=1407)
{
    struct _MDL * DumpMdl;// Offset=0x0 Size=0x8
    enum _POP_IO_STATUS IoStatus;// Offset=0x8 Size=0x4
    unsigned long long IoStartCount;// Offset=0x10 Size=0x8
    unsigned long long IoBytesCompleted;// Offset=0x18 Size=0x8
    unsigned long long IoBytesInProgress;// Offset=0x20 Size=0x8
    unsigned long long RequestSize;// Offset=0x28 Size=0x8
    union _LARGE_INTEGER IoLocation;// Offset=0x30 Size=0x8
    unsigned long long FileOffset;// Offset=0x38 Size=0x8
    void * Buffer;// Offset=0x40 Size=0x8
    unsigned char AsyncCapable;// Offset=0x48 Size=0x1
    unsigned long long BytesToRead;// Offset=0x50 Size=0x8
    unsigned long Pages;// Offset=0x58 Size=0x4
    unsigned long long HighestChecksumIndex;// Offset=0x60 Size=0x8
    unsigned short PreviousChecksum;// Offset=0x68 Size=0x2
};

struct _POP_HIBER_CONTEXT// Size=0x1d0 (Id=1365)
{
    unsigned char Reset;// Offset=0x0 Size=0x1
    unsigned char HiberFlags;// Offset=0x1 Size=0x1
    unsigned char WroteHiberFile;// Offset=0x2 Size=0x1
    unsigned char VerifyKernelPhaseOnResume;// Offset=0x3 Size=0x1
    unsigned char KernelPhaseVerificationActive;// Offset=0x4 Size=0x1
    unsigned char InitializationFinished;// Offset=0x5 Size=0x1
    long NextTableLockHeld;// Offset=0x8 Size=0x4
    long BootPhaseFinishedBarrier;// Offset=0xc Size=0x4
    long KernelResumeFinishedBarrier;// Offset=0x10 Size=0x4
    long HvCaptureReadyBarrier;// Offset=0x14 Size=0x4
    long HvCaptureCompletedBarrier;// Offset=0x18 Size=0x4
    unsigned char MapFrozen;// Offset=0x1c Size=0x1
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BITMAP DiscardMap;// Offset=0x20 Size=0x10
        struct _RTL_BITMAP KernelPhaseMap;// Offset=0x20 Size=0x10
    };
    struct _RTL_BITMAP BootPhaseMap;// Offset=0x30 Size=0x10
    struct _LIST_ENTRY ClonedRanges;// Offset=0x40 Size=0x10
    unsigned long ClonedRangeCount;// Offset=0x50 Size=0x4
    unsigned long long ClonedPageCount;// Offset=0x58 Size=0x8
    struct _RTL_BITMAP * CurrentMap;// Offset=0x60 Size=0x8
    struct _LIST_ENTRY * NextCloneRange;// Offset=0x68 Size=0x8
    unsigned long long NextPreserve;// Offset=0x70 Size=0x8
    struct _MDL * LoaderMdl;// Offset=0x78 Size=0x8
    struct _MDL * AllocatedMdl;// Offset=0x80 Size=0x8
    unsigned long long PagesOut;// Offset=0x88 Size=0x8
    void * IoPages;// Offset=0x90 Size=0x8
    unsigned long IoPagesCount;// Offset=0x98 Size=0x4
    void * CurrentMcb;// Offset=0xa0 Size=0x8
    struct _DUMP_STACK_CONTEXT * DumpStack;// Offset=0xa8 Size=0x8
    struct _KPROCESSOR_STATE * WakeState;// Offset=0xb0 Size=0x8
    unsigned long IoProgress;// Offset=0xb8 Size=0x4
    long Status;// Offset=0xbc Size=0x4
    unsigned long GraphicsProc;// Offset=0xc0 Size=0x4
    struct PO_MEMORY_IMAGE * MemoryImage;// Offset=0xc8 Size=0x8
    unsigned long * PerformanceStats;// Offset=0xd0 Size=0x8
    struct _MDL * BootLoaderLogMdl;// Offset=0xd8 Size=0x8
    unsigned long SiLogOffset;// Offset=0xe0 Size=0x4
    struct _MDL * FirmwareRuntimeInformationMdl;// Offset=0xe8 Size=0x8
    void * FirmwareRuntimeInformationVa;// Offset=0xf0 Size=0x8
    void * ResumeContext;// Offset=0xf8 Size=0x8
    unsigned long ResumeContextPages;// Offset=0x100 Size=0x4
    unsigned long SecurePages;// Offset=0x104 Size=0x4
    unsigned long ProcessorCount;// Offset=0x108 Size=0x4
    struct _POP_PER_PROCESSOR_CONTEXT * ProcessorContext;// Offset=0x110 Size=0x8
    char * ProdConsBuffer;// Offset=0x118 Size=0x8
    unsigned long ProdConsSize;// Offset=0x120 Size=0x4
    unsigned long MaxDataPages;// Offset=0x124 Size=0x4
    void * ExtraBuffer;// Offset=0x128 Size=0x8
    unsigned long long ExtraBufferSize;// Offset=0x130 Size=0x8
    void * ExtraMapVa;// Offset=0x138 Size=0x8
    unsigned long long BitlockerKeyPFN;// Offset=0x140 Size=0x8
    struct _POP_IO_INFO IoInfo;// Offset=0x148 Size=0x70
    unsigned short * IoChecksums;// Offset=0x1b8 Size=0x8
    unsigned long long IoChecksumsSize;// Offset=0x1c0 Size=0x8
    unsigned long HardwareConfigurationSignature;// Offset=0x1c8 Size=0x4
    unsigned char IumEnabled;// Offset=0x1cc Size=0x1
};
