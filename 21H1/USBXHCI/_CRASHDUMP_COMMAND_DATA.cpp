struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CRASHDUMP_BUFFER_DATA// Size=0x18 (Id=508)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned char * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
};

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=898)
{
    unsigned long long CommandPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long CompletionParameter:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long VirtualFunctionId:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _CRASHDUMP_COMMAND_DATA// Size=0x50 (Id=517)
{
    void * DumperHandle;// Offset=0x0 Size=0x8
    void * RegisterHandle;// Offset=0x8 Size=0x8
    union _CRCR * CommandRingControl;// Offset=0x10 Size=0x8
    struct _CRASHDUMP_BUFFER_DATA CommandRingBuffer;// Offset=0x18 Size=0x18
    struct _TRB * TRBArray;// Offset=0x30 Size=0x8
    unsigned long CycleState;// Offset=0x38 Size=0x4
    struct _COMMAND_COMPLETION_EVENT_TRB LastCompletionEvent;// Offset=0x3c Size=0x10
};
