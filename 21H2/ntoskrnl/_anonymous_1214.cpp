struct _anonymous_1212// Size=0x8 (Id=1212)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _anonymous_1213// Size=0x8 (Id=1213)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:18;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x12
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x3
        unsigned long long Blink:18;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x12
        unsigned long long WriteInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long HasError:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0xb
        unsigned long long Reserved:12;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0xc
    };
};

union _anonymous_1214// Size=0x8 (Id=1214)
{
    struct _anonymous_1212 e1;// Offset=0x0 Size=0x8
    struct _anonymous_1213 e2;// Offset=0x0 Size=0x8
};
