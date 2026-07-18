struct _anonymous_1055// Size=0x8 (Id=1055)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _anonymous_1056// Size=0x8 (Id=1056)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _anonymous_1057// Size=0x8 (Id=1057)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _anonymous_1058// Size=0x8 (Id=1058)
{
    struct _anonymous_1055 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _anonymous_1056 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _anonymous_1057 Raw;// Offset=0x0 Size=0x8
};
