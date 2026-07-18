struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=509)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_1030// Size=0x8 (Id=1030)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2b
    };
};

struct _unnamed_1031// Size=0x8 (Id=1031)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long WsleAge:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long OldestWsleLeafEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xa
        unsigned long long OldestWsleLeafAge:3;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x3
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x2b
    };
};

struct _MI_ACTIVE_PFN// Size=0x8 (Id=1032)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_1030 Leaf;// Offset=0x0 Size=0x8
        struct _unnamed_1031 PageTable;// Offset=0x0 Size=0x8
        unsigned long long EntireActiveField;// Offset=0x0 Size=0x8
    };
};

union _unnamed_231// Size=0x8 (Id=231)
{
    struct _SINGLE_LIST_ENTRY NextSlistPfn;// Offset=0x0 Size=0x8
    void * Next;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
        unsigned long long NodeFlinkHigh:28;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1c
    };
    struct _MI_ACTIVE_PFN Active;// Offset=0x0 Size=0x8
};
