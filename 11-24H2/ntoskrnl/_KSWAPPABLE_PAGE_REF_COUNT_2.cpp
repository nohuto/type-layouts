union _KSWAPPABLE_PAGE_REF_COUNT// Size=0x8 (Id=1912)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Resident:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long RefCount:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};
