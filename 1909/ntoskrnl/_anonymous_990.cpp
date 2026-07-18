struct _anonymous_988// Size=0x8 (Id=988)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _anonymous_989// Size=0x8 (Id=989)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:18;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x12
        unsigned long long PageState:2;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x2
        unsigned long long Blink:18;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x12
        unsigned long long WriteInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long HasError:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0xb
        unsigned long long NodeNumber:6;// Offset=0x0 Size=0x8 BitOffset=0x33 BitSize=0x6
        unsigned long long Reserved:7;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x7
    };
};

union _anonymous_990// Size=0x8 (Id=990)
{
    struct _anonymous_988 e1;// Offset=0x0 Size=0x8
    struct _anonymous_989 e2;// Offset=0x0 Size=0x8
};
