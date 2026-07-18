struct _unnamed_927// Size=0x8 (Id=927)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_928// Size=0x8 (Id=928)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_929// Size=0x8 (Id=929)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_930// Size=0x8 (Id=930)
{
    struct _unnamed_927 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_928 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_929 Raw;// Offset=0x0 Size=0x8
};
