union _LARGE_INTEGER// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=4078)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _IRP::<unnamed-type-Overlay>// Size=0x10 (Id=459)
{
    union // Size=0x10 (Id=0)
    {
        struct <unnamed-type-AsynchronousParameters>// Size=0x10 (Id=3454)
        {
            void  ( * UserApcRoutine)(void * ,struct _IO_STATUS_BLOCK * ,unsigned long );// Offset=0x0 Size=0x8
            void * IssuingProcess;// Offset=0x0 Size=0x8
            void * UserApcContext;// Offset=0x8 Size=0x8
        };
        struct _IRP::<unnamed-type-Overlay>::<unnamed-type-AsynchronousParameters> AsynchronousParameters;// Offset=0x0 Size=0x10
        union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    };
};
