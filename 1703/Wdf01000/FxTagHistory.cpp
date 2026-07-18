struct _unnamed_118// Size=0x8 (Id=118)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_118 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct FxTagHistory// Size=0x30 (Id=1120)
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
        void FxTagHistory();// Offset=0x0 Size=0x9
        void ~FxTagHistory();// Offset=0x0 Size=0x22
        void * __vecDelDtor(unsigned int );
    };
};
