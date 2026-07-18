struct _unnamed_1502// Size=0x8 (Id=1502)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1503// Size=0x8 (Id=1503)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1504// Size=0x8 (Id=1504)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1505// Size=0x8 (Id=1505)
{
    struct _unnamed_1502 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1503 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1504 Raw;// Offset=0x0 Size=0x8
};
