union _unnamed_407// Size=0x8 (Id=407)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Asid:20;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x14
        unsigned long LastInGroupSeen:1;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Error:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Unused:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
    };
    unsigned long long Long;// Offset=0x0 Size=0x8
};
