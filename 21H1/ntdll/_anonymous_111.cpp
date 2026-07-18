struct _anonymous_110// Size=0x8 (Id=110)
{
    union // Size=0x4 (Id=0)
    {
        void  ( * UserApcRoutine)(void * ,struct _IO_STATUS_BLOCK * ,unsigned long );// Offset=0x0 Size=0x4
        void * IssuingProcess;// Offset=0x0 Size=0x4
    };
    void * UserApcContext;// Offset=0x4 Size=0x4
};

struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _anonymous_111// Size=0x8 (Id=111)
{
    struct _anonymous_110 AsynchronousParameters;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
};
