struct _MI_CACHED_PTE// Size=0x8 (Id=665)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long GlobalTimeStamp:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
            unsigned long long PteIndex:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        };
        unsigned long long Long;// Offset=0x0 Size=0x8
    };
};
