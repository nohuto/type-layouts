union NVME_PRP_ENTRY// Size=0x8 (Id=955)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved0:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
        unsigned long long PBAO:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
