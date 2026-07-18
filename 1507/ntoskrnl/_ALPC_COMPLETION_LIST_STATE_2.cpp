struct _unnamed_1269// Size=0x8 (Id=1269)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Head:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long Tail:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long ActiveThreadCount:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

union _unnamed_1270// Size=0x8 (Id=1270)
{
    struct _unnamed_1269 s1;// Offset=0x0 Size=0x8
    long long Value;// Offset=0x0 Size=0x8
};

struct _ALPC_COMPLETION_LIST_STATE// Size=0x8 (Id=1271)
{
    union _unnamed_1270 u1;// Offset=0x0 Size=0x8
};
