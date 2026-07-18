struct _unnamed_1533// Size=0x8 (Id=1533)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _unnamed_1534// Size=0x8 (Id=1534)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long HasError:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xb
        unsigned long long ZeroedDuringStateChanges:49;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x31
    };
};

struct _unnamed_1535// Size=0x8 (Id=1535)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long HasError:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xb
        unsigned long long Flink:22;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x16
        unsigned long long Blink:22;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x16
        unsigned long long WriteInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
    };
};

struct _unnamed_1536// Size=0x8 (Id=1536)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long HasError:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xb
        unsigned long long DeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long ContentsWereNonZeroWhenInitiallyUnlinked:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long ShareCount:22;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x16
    };
};

struct _unnamed_1537// Size=0x8 (Id=1537)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long HasError:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xb
        unsigned long long DanglingIoNodes:9;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x9
    };
};

union _unnamed_1538// Size=0x8 (Id=1538)
{
    struct _unnamed_1533 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1534 e2;// Offset=0x0 Size=0x8
    struct _unnamed_1535 OnList;// Offset=0x0 Size=0x8
    struct _unnamed_1536 Active;// Offset=0x0 Size=0x8
    struct _unnamed_1537 Transition;// Offset=0x0 Size=0x8
};

struct _MI_HUGE_PFN// Size=0x8 (Id=1539)
{
    union _unnamed_1538 u1;// Offset=0x0 Size=0x8
};
