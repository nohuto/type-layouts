enum _CM_DIRTY_VECTOR_OPERATION
{
    DirtyVectorModified=0,
    DirtyDataCaptureStart=1,
    DirtyDataCaptureEnd=2
};

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

struct _CM_DIRTY_VECTOR_LOG_ENTRY// Size=0x48 (Id=1417)
{
    struct _ETHREAD * Thread;// Offset=0x0 Size=0x8
    enum _CM_DIRTY_VECTOR_OPERATION Operation;// Offset=0x8 Size=0x4
    union _unnamed_1416 Data;// Offset=0xc Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _CM_DIRTY_VECTOR_LOG// Size=0x488 (Id=1312)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];// Offset=0x8 Size=0x480
};
