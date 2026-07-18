struct _unnamed_441// Size=0x10 (Id=441)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=442)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_441 HeaderX64;// Offset=0x0 Size=0x10
};

struct _NVME_ASYNC_EVENT_CONTEXT// Size=0x20 (Id=832)
{
    unsigned short AERCommandsAllocated;// Offset=0x0 Size=0x2
    unsigned short AERCommandsSent;// Offset=0x2 Size=0x2
    unsigned long AENCount;// Offset=0x4 Size=0x4
    struct _NVME_EXTENDED_COMMAND ** AsyncEventExCommands;// Offset=0x8 Size=0x8
    union _SLIST_HEADER AERExtendedCommandList;// Offset=0x10 Size=0x10
};
