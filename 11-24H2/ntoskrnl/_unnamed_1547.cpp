struct _unnamed_1544// Size=0x8 (Id=1544)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1545// Size=0x8 (Id=1545)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1546// Size=0x8 (Id=1546)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1547// Size=0x8 (Id=1547)
{
    struct _unnamed_1544 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1545 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1546 Raw;// Offset=0x0 Size=0x8
};
