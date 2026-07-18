union _MMSECTION_FLAGS1// Size=0x4 (Id=1227)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PartitionId:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SectionOfInterest:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Unused:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};
