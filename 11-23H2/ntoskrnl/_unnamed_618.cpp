struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=939)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_1523// Size=0x8 (Id=1523)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2b
    };
};

struct _unnamed_1524// Size=0x8 (Id=1524)
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

struct _MI_ACTIVE_PFN// Size=0x8 (Id=1525)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_1523 Leaf;// Offset=0x0 Size=0x8
        struct _unnamed_1524 PageTable;// Offset=0x0 Size=0x8
        unsigned long long EntireActiveField;// Offset=0x0 Size=0x8
    };
};

union _unnamed_618// Size=0x8 (Id=618)
{
    struct _SINGLE_LIST_ENTRY NextSlistPfn;// Offset=0x0 Size=0x8
    void * Next;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
        unsigned long long NodeFlinkLow:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
    };
    struct _MI_ACTIVE_PFN Active;// Offset=0x0 Size=0x8
};
