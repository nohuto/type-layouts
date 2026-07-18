struct _unnamed_1415// Size=0x8 (Id=1415)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1416// Size=0x8 (Id=1416)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1417// Size=0x8 (Id=1417)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1418// Size=0x8 (Id=1418)
{
    struct _unnamed_1415 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1416 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1417 Raw;// Offset=0x0 Size=0x8
};
