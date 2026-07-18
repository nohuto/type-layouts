struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WAIT_CONTEXT_BLOCK::_unnamed_307::_unnamed_307// Size=0x18 (Id=307)
{
    struct _LIST_ENTRY DmaWaitEntry;// Offset=0x0 Size=0x10
    unsigned long NumberOfChannels;// Offset=0x10 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SyncCallback:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DmaContext:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ZeroMapRegisters:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x14 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};
