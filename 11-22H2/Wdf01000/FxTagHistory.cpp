union _LARGE_INTEGER// Size=0x8 (Id=915)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12193)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct FxTagHistory// Size=0x30 (Id=2633)
{
    union // Size=0x30 (Id=0)
    {
        enum FxTagRefType RefType;// Offset=0x0 Size=0x4
        unsigned long RefCount;// Offset=0x4 Size=0x4
        char * File;// Offset=0x8 Size=0x8
        long Line;// Offset=0x10 Size=0x4
        void * Tag;// Offset=0x18 Size=0x8
        union _LARGE_INTEGER Time;// Offset=0x20 Size=0x8
        struct FxTagTrackingStackFrames * StackFrames;// Offset=0x28 Size=0x8
        void FxTagHistory();// Offset=0x0 Size=0xa
        void ~FxTagHistory();// Offset=0x0 Size=0x23
        void * __vecDelDtor(unsigned int );
    };
};
