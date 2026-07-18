struct _unnamed_978// Size=0x8 (Id=978)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_979// Size=0x8 (Id=979)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_980// Size=0x8 (Id=980)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_981// Size=0x8 (Id=981)
{
    struct _unnamed_978 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_979 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_980 Raw;// Offset=0x0 Size=0x8
};
