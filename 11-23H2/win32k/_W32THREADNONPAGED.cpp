struct _GUID// Size=0x10 (Id=4)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _FAST_OWNER_ENTRY// Size=0x48 (Id=496)
{
    void * Reserved[9];// Offset=0x0 Size=0x48
};

struct _W32THREADNONPAGED// Size=0xc8 (Id=162)
{
    struct _W32THREAD * pW32Thread;// Offset=0x0 Size=0x8
    long long llQPCUserCritAcquire;// Offset=0x8 Size=0x8
    unsigned long long ullUserCritAcquireToken;// Offset=0x10 Size=0x8
    long cInputPerfRegions;// Offset=0x18 Size=0x4
    struct _GUID InputActivityGuid;// Offset=0x1c Size=0x10
    struct // Size=0x4 (Id=0)
    {
        int bTracedCritAcquire:1;// Offset=0x2c Size=0x4 BitOffset=0x0 BitSize=0x1
        int bAlwaysTraceUserCrit:1;// Offset=0x2c Size=0x4 BitOffset=0x1 BitSize=0x1
        int bIsOnStack:1;// Offset=0x2c Size=0x4 BitOffset=0x2 BitSize=0x1
    };
    unsigned long cAtomicExecution;// Offset=0x30 Size=0x4
    struct _FAST_OWNER_ENTRY gpresUserOwnerEntry;// Offset=0x38 Size=0x48
    struct _FAST_OWNER_ENTRY gpresRenderOwnerEntry;// Offset=0x80 Size=0x48
};
