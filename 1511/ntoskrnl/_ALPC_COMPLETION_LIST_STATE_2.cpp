struct _unnamed_1282// Size=0x8 (Id=1282)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Head:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long Tail:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long ActiveThreadCount:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

union _unnamed_1283// Size=0x8 (Id=1283)
{
    struct _unnamed_1282 s1;// Offset=0x0 Size=0x8
    long long Value;// Offset=0x0 Size=0x8
};

struct _ALPC_COMPLETION_LIST_STATE// Size=0x8 (Id=1284)
{
    union _unnamed_1283 u1;// Offset=0x0 Size=0x8
};
