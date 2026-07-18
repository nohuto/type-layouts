struct _unnamed_2043// Size=0x4 (Id=2043)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NodeBlinkHigh:21;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x15
        unsigned long NodeFlinkMiddle:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

struct _unnamed_2044// Size=0x1 (Id=2044)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ModifiedListBucketIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
};

struct _unnamed_2045// Size=0x4 (Id=2045)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageTableBlinkLow:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PageTableBuddyHigh:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
        unsigned long PageTableLinked:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long AnchorLargePageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x2
        unsigned long Spare1:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
};

struct _MI_PFN_FLAGS5// Size=0x4 (Id=2046)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct _unnamed_2043 StandbyList;// Offset=0x0 Size=0x4
        struct _unnamed_2044 MappedPageList;// Offset=0x0 Size=0x1
        struct _unnamed_2045 Active;// Offset=0x0 Size=0x4
    };
};
