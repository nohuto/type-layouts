struct _OpRegionObj// Size=0x28 (Id=280)
{
    unsigned long long uipOffset;// Offset=0x0 Size=0x8
    unsigned long dwLen;// Offset=0x8 Size=0x4
    unsigned char bRegionSpace;// Offset=0xc Size=0x1
    unsigned char Flags;// Offset=0xd Size=0x1
    unsigned char reserved[2];// Offset=0xe Size=0x2
    long RegionBusy;// Offset=0x10 Size=0x4
    unsigned long long listLock;// Offset=0x18 Size=0x8
    struct _List * plistWaiters;// Offset=0x20 Size=0x8
};
