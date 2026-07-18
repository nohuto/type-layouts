struct _anonymous_1264// Size=0x8 (Id=1264)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _anonymous_1265// Size=0x8 (Id=1265)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _anonymous_1266// Size=0x8 (Id=1266)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _anonymous_1267// Size=0x8 (Id=1267)
{
    struct _anonymous_1264 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _anonymous_1265 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _anonymous_1266 Raw;// Offset=0x0 Size=0x8
};
