union FAST_ERESOURCE_LOCK_STATE// Size=0x8 (Id=1903)
{
    long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        long long Exclusive:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        long long Conflict:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        long long ShareCount:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};
