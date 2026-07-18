struct _RTL_STD_LIST_ENTRY// Size=0x4 (Id=538)
{
    struct _RTL_STD_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _RTL_STACK_TRACE_ENTRY// Size=0x8c (Id=387)
{
    struct _RTL_STD_LIST_ENTRY HashChain;// Offset=0x0 Size=0x4
    struct // Size=0x2 (Id=0)
    {
        unsigned short TraceCount:11;// Offset=0x4 Size=0x2 BitOffset=0x0 BitSize=0xb
        unsigned short BlockDepth:5;// Offset=0x4 Size=0x2 BitOffset=0xb BitSize=0x5
    };
    unsigned short IndexHigh;// Offset=0x6 Size=0x2
    unsigned short Index;// Offset=0x8 Size=0x2
    unsigned short Depth;// Offset=0xa Size=0x2
    union // Size=0x80 (Id=0)
    {
        void * BackTrace[32];// Offset=0xc Size=0x80
        struct _SINGLE_LIST_ENTRY FreeChain;// Offset=0xc Size=0x4
    };
};
