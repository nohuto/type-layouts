enum _CM_DIRTY_VECTOR_OPERATION
{
    DirtyVectorModified=0,
    DirtyDataCaptureStart=1,
    DirtyDataCaptureEnd=2
};

struct _unnamed_1615// Size=0x8 (Id=1615)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1616// Size=0x8 (Id=1616)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1617// Size=0x8 (Id=1617)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1618// Size=0x8 (Id=1618)
{
    struct _unnamed_1615 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1616 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1617 Raw;// Offset=0x0 Size=0x8
};

struct _CM_DIRTY_VECTOR_LOG_ENTRY// Size=0x48 (Id=1619)
{
    struct _ETHREAD * Thread;// Offset=0x0 Size=0x8
    enum _CM_DIRTY_VECTOR_OPERATION Operation;// Offset=0x8 Size=0x4
    union _unnamed_1618 Data;// Offset=0xc Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _CM_DIRTY_VECTOR_LOG// Size=0x488 (Id=1487)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];// Offset=0x8 Size=0x480
};
