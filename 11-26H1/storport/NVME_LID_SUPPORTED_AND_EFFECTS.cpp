struct NVME_LID_SUPPORTED_AND_EFFECTS// Size=0x4 (Id=1220)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LSUPP:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IOS:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:14;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xe
        unsigned long LIDSpecific:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
