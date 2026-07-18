struct _unnamed_149// Size=0x10 (Id=149)
{
    union // Size=0x8 (Id=0)
    {
        void  ( * UserApcRoutine)(void * ,struct _IO_STATUS_BLOCK * ,unsigned long );// Offset=0x0 Size=0x8
        void * IssuingProcess;// Offset=0x0 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void * UserApcContext;// Offset=0x8 Size=0x8
        struct _IORING_OBJECT * IoRing;// Offset=0x8 Size=0x8
    };
};

struct _unnamed_46// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=299)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_46 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _unnamed_150// Size=0x10 (Id=150)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_149 AsynchronousParameters;// Offset=0x0 Size=0x10
        union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    };
};
