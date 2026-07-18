struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CRASHDUMP_BUFFER_DATA// Size=0x18 (Id=487)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned char * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CRASHDUMP_EVENTRING_DATA// Size=0x80 (Id=495)
{
    void * DumperHandle;// Offset=0x0 Size=0x8
    void * RegisterHandle;// Offset=0x8 Size=0x8
    struct _INTERRUPTER_REGISTER_SET * InterrupterRegister;// Offset=0x10 Size=0x8
    struct _CRASHDUMP_BUFFER_DATA EventRingTableBuffer;// Offset=0x18 Size=0x18
    struct _CRASHDUMP_BUFFER_DATA EventRingSegmentBuffer;// Offset=0x30 Size=0x18
    struct _TRB * TRBArray;// Offset=0x48 Size=0x8
    unsigned long UsedEventRingSegments;// Offset=0x50 Size=0x4
    unsigned long TRBsPerSegment;// Offset=0x54 Size=0x4
    unsigned long CycleState;// Offset=0x58 Size=0x4
    unsigned long DequeueIndex;// Offset=0x5c Size=0x4
    unsigned long DequeueSegment;// Offset=0x60 Size=0x4
    struct _XIL_BUFFER_DATA * CurrentBufferData;// Offset=0x68 Size=0x8
    struct _LIST_ENTRY BufferDataList;// Offset=0x70 Size=0x10
};
