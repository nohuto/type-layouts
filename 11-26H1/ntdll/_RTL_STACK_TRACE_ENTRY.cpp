struct _RTL_STD_LIST_ENTRY// Size=0x8 (Id=662)
{
    struct _RTL_STD_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=111)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RTL_STACK_TRACE_ENTRY// Size=0x110 (Id=497)
{
    struct _RTL_STD_LIST_ENTRY HashChain;// Offset=0x0 Size=0x8
    struct // Size=0x2 (Id=0)
    {
        unsigned short TraceCount:11;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0xb
        unsigned short BlockDepth:5;// Offset=0x8 Size=0x2 BitOffset=0xb BitSize=0x5
    };
    unsigned short IndexHigh;// Offset=0xa Size=0x2
    unsigned short Index;// Offset=0xc Size=0x2
    unsigned short Depth;// Offset=0xe Size=0x2
    union // Size=0x100 (Id=0)
    {
        void * BackTrace[32];// Offset=0x10 Size=0x100
        struct _SLIST_ENTRY FreeChain;// Offset=0x10 Size=0x10
    };
};
