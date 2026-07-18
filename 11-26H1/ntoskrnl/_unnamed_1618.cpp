struct _unnamed_1615// Size=0x8 (Id=1615)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1616// Size=0x8 (Id=1616)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1617// Size=0x8 (Id=1617)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1618// Size=0x8 (Id=1618)
{
    struct _unnamed_1615 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1616 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1617 Raw;// Offset=0x0 Size=0x8
};
