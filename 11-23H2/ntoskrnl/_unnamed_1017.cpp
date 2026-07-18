struct _MM_SESSION_SPACE_FLAGS// Size=0x4 (Id=1122)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeletePending:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long WsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ObjectInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Filler:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};

union _unnamed_1017// Size=0x4 (Id=1017)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MM_SESSION_SPACE_FLAGS Flags;// Offset=0x0 Size=0x4
};
