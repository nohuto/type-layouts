struct _unnamed_1469// Size=0x8 (Id=1469)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _unnamed_1723// Size=0x8 (Id=1723)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xb
        unsigned long long Flink:22;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x16
        unsigned long long Blink:22;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x16
    };
};

union _unnamed_1724// Size=0x8 (Id=1724)
{
    struct _unnamed_1469 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1723 OnList;// Offset=0x0 Size=0x8
};

struct _MI_HUGE_PFN_COLORHEAD// Size=0x8 (Id=1725)
{
    union _unnamed_1724 u1;// Offset=0x0 Size=0x8
};
