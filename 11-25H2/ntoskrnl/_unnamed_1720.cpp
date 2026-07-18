struct _unnamed_1466// Size=0x8 (Id=1466)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _unnamed_1719// Size=0x8 (Id=1719)
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

union _unnamed_1720// Size=0x8 (Id=1720)
{
    struct _unnamed_1466 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1719 OnList;// Offset=0x0 Size=0x8
};
