struct _unnamed_985// Size=0x8 (Id=985)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_986// Size=0x8 (Id=986)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_987// Size=0x8 (Id=987)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_988// Size=0x8 (Id=988)
{
    struct _unnamed_985 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_986 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_987 Raw;// Offset=0x0 Size=0x8
};
