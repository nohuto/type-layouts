struct _unnamed_1486// Size=0x4 (Id=1486)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NodeBlinkHigh:21;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x15
        unsigned long NodeFlinkMiddle:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

struct _unnamed_1487// Size=0x1 (Id=1487)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ModifiedListBucketIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
};

struct _unnamed_1488// Size=0x4 (Id=1488)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned char AnchorLargePageSize:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Spare0:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
        unsigned char Spare1:8;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x8
    };
    unsigned short Spare2;// Offset=0x2 Size=0x2
};

struct _MI_PFN_ULONG5// Size=0x4 (Id=1489)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct _unnamed_1486 StandbyList;// Offset=0x0 Size=0x4
        struct _unnamed_1487 MappedPageList;// Offset=0x0 Size=0x1
        struct _unnamed_1488 Active;// Offset=0x0 Size=0x4
    };
};
