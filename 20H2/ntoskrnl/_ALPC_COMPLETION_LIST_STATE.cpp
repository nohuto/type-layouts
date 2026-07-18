struct _anonymous_1654// Size=0x8 (Id=1654)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Head:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long Tail:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long ActiveThreadCount:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

union _anonymous_1655// Size=0x8 (Id=1655)
{
    struct _anonymous_1654 s1;// Offset=0x0 Size=0x8
    long long Value;// Offset=0x0 Size=0x8
};

struct _ALPC_COMPLETION_LIST_STATE// Size=0x8 (Id=1413)
{
    union _anonymous_1655 u1;// Offset=0x0 Size=0x8
};
