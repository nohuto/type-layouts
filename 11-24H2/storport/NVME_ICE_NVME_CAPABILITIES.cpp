union _unnamed_841// Size=0x4 (Id=841)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MarkLastPRPList:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct NVME_ICE_NVME_CAPABILITIES// Size=0x20 (Id=842)
{
    unsigned short MaxSQCount;// Offset=0x0 Size=0x2
    unsigned short MaxCQCount;// Offset=0x2 Size=0x2
    unsigned long MaxNSID;// Offset=0x4 Size=0x4
    unsigned long MaxERCount;// Offset=0x8 Size=0x4
    unsigned char CECDWNumber;// Offset=0xc Size=0x1
    unsigned char CECDWBitPosition;// Offset=0xd Size=0x1
    unsigned char KSICDWNumber;// Offset=0xe Size=0x1
    unsigned char KSICDWStartBit;// Offset=0xf Size=0x1
    unsigned char KSINumberOfBits;// Offset=0x10 Size=0x1
    unsigned char IV0CDWNumber;// Offset=0x11 Size=0x1
    unsigned char IV1CDWNumber;// Offset=0x12 Size=0x1
    unsigned char IV2CDWNumber;// Offset=0x13 Size=0x1
    unsigned char IV3CDWNumber;// Offset=0x14 Size=0x1
    union _unnamed_841 Flags;// Offset=0x18 Size=0x4
    unsigned char Reserved[3];// Offset=0x1c Size=0x3
};
