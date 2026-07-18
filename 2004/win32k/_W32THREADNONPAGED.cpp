struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _W32THREADNONPAGED// Size=0x38 (Id=135)
{
    struct _W32THREAD * pW32Thread;// Offset=0x0 Size=0x4
    long long llQPCUserCritAcquire;// Offset=0x8 Size=0x8
    unsigned long long ullUserCritAcquireToken;// Offset=0x10 Size=0x8
    long cInputPerfRegions;// Offset=0x18 Size=0x4
    struct _GUID InputActivityGuid;// Offset=0x1c Size=0x10
    int bTracedCritAcquire;// Offset=0x2c Size=0x4
    int bAlwaysTraceUserCrit;// Offset=0x30 Size=0x4
    void _W32THREADNONPAGED(struct _W32THREADNONPAGED * );
    void _W32THREADNONPAGED(struct _W32THREADNONPAGED & );
    struct _W32THREADNONPAGED & operator=(struct _W32THREADNONPAGED * );
    struct _W32THREADNONPAGED & operator=(struct _W32THREADNONPAGED & );
};
