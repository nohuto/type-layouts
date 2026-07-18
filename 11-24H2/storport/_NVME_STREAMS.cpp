struct _NVME_STREAMS// Size=0x1c (Id=1029)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Enabled:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char NSIDValid:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reallocate:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved0:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char Reserved1[7];// Offset=0x1 Size=0x7
    unsigned long NamespaceID;// Offset=0x8 Size=0x4
    unsigned short MaxStreamsLimit;// Offset=0xc Size=0x2
    unsigned short AllocatedStreamCount;// Offset=0xe Size=0x2
    unsigned short OpenStreamCount;// Offset=0x10 Size=0x2
    unsigned short TotalStreamCount;// Offset=0x12 Size=0x2
    unsigned long OptimalWriteSizeInBlocks;// Offset=0x14 Size=0x4
    unsigned long StreamSizeInOWSUnits;// Offset=0x18 Size=0x4
};
