struct _MMPTE_SUBSECTION// Size=0x8 (Id=1258)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Uunsed0:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long SubsectionIndex:42;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x2a
        unsigned long long SubsectionTagBits:4;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x4
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
    };
};
