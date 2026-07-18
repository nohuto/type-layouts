union NVME_CDW10_SECURITY_SEND_RECEIVE// Size=0x4 (Id=618)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SPSP:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long SECP:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
