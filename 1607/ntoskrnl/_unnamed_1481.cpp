struct _unnamed_1478// Size=0x8 (Id=1478)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1479// Size=0x8 (Id=1479)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1480// Size=0x8 (Id=1480)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1481// Size=0x8 (Id=1481)
{
    struct _unnamed_1478 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1479 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1480 Raw;// Offset=0x0 Size=0x8
};
