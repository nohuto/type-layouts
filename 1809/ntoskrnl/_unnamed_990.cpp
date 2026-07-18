struct _unnamed_987// Size=0x8 (Id=987)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_988// Size=0x8 (Id=988)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_989// Size=0x8 (Id=989)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_990// Size=0x8 (Id=990)
{
    struct _unnamed_987 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_988 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_989 Raw;// Offset=0x0 Size=0x8
};
