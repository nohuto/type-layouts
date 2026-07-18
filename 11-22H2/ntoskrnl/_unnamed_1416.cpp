struct _unnamed_1413// Size=0x8 (Id=1413)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1414// Size=0x8 (Id=1414)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1415// Size=0x8 (Id=1415)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1416// Size=0x8 (Id=1416)
{
    struct _unnamed_1413 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1414 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1415 Raw;// Offset=0x0 Size=0x8
};
