union _LARGE_INTEGER// Size=0x8 (Id=18)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=3654)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _IRP::<unnamed-type-Overlay>// Size=0x8 (Id=426)
{
    struct <unnamed-type-AsynchronousParameters>// Size=0x8 (Id=3161)
    {
        void  ( * UserApcRoutine)(void * ,struct _IO_STATUS_BLOCK * ,unsigned long );// Offset=0x0 Size=0x4
        void * IssuingProcess;// Offset=0x0 Size=0x4
        void * UserApcContext;// Offset=0x4 Size=0x4
    };
    struct _IRP::<unnamed-type-Overlay>::<unnamed-type-AsynchronousParameters> AsynchronousParameters;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
};
