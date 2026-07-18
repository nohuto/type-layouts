union _RAID_ADDRESS// Size=0x4 (Id=338)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    struct // Size=0x4 (Id=0)
    {
        unsigned long NamespaceId:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
