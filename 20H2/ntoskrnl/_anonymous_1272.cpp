struct _anonymous_1269// Size=0x8 (Id=1269)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _anonymous_1270// Size=0x8 (Id=1270)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _anonymous_1271// Size=0x8 (Id=1271)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _anonymous_1272// Size=0x8 (Id=1272)
{
    struct _anonymous_1269 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _anonymous_1270 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _anonymous_1271 Raw;// Offset=0x0 Size=0x8
};
