union NVME_CONTROLLER_CONFIGURATION// Size=0x4 (Id=891)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EN:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long CSS:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long MPS:4;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x4
        unsigned long AMS:3;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x3
        unsigned long SHN:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long IOSQES:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long IOCQES:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long CRIME:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long Reserved1:7;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x7
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
