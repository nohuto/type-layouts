enum _CM_DIRTY_VECTOR_OPERATION
{
    DirtyVectorModified=0,
    DirtyDataCaptureStart=1,
    DirtyDataCaptureEnd=2
};

struct _unnamed_1541// Size=0x8 (Id=1541)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1542// Size=0x8 (Id=1542)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1543// Size=0x8 (Id=1543)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1544// Size=0x8 (Id=1544)
{
    struct _unnamed_1541 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1542 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1543 Raw;// Offset=0x0 Size=0x8
};

struct _CM_DIRTY_VECTOR_LOG_ENTRY// Size=0x48 (Id=1545)
{
    struct _ETHREAD * Thread;// Offset=0x0 Size=0x8
    enum _CM_DIRTY_VECTOR_OPERATION Operation;// Offset=0x8 Size=0x4
    union _unnamed_1544 Data;// Offset=0xc Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _CM_DIRTY_VECTOR_LOG// Size=0x488 (Id=1421)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];// Offset=0x8 Size=0x480
};
