struct _unnamed_1541// Size=0x8 (Id=1541)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1542// Size=0x8 (Id=1542)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1543// Size=0x8 (Id=1543)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1544// Size=0x8 (Id=1544)
{
    struct _unnamed_1541 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1542 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1543 Raw;// Offset=0x0 Size=0x8
};
