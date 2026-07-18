union NVME_CDW11_MFND_OPERATION_FEATURE// Size=0x4 (Id=636)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SEL:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long EnableFlag:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long NumberOfChildFunctions:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
