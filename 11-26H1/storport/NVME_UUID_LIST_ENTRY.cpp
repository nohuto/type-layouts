struct NVME_UUID_LIST_ENTRY// Size=0x20 (Id=925)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char IdentifierAssociation:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved1[15];// Offset=0x1 Size=0xf
    unsigned char UUID[16];// Offset=0x10 Size=0x10
};
