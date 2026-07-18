struct _unnamed_1201// Size=0x1 (Id=1201)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char AccessFrequency:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char AccessLatency:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char SequentialRequest:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Incompressible:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union NVME_CDW13_READ_WRITE// Size=0x4 (Id=1202)
{
    struct _unnamed_1201 DSM;// Offset=0x0 Size=0x1
    unsigned char Reserved;// Offset=0x1 Size=0x1
    unsigned short DSPEC;// Offset=0x2 Size=0x2
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
