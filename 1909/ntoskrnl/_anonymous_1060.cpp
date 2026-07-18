struct _anonymous_1057// Size=0x8 (Id=1057)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _anonymous_1058// Size=0x8 (Id=1058)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _anonymous_1059// Size=0x8 (Id=1059)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _anonymous_1060// Size=0x8 (Id=1060)
{
    struct _anonymous_1057 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _anonymous_1058 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _anonymous_1059 Raw;// Offset=0x0 Size=0x8
};
