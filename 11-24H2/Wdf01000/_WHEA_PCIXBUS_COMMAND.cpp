union _WHEA_PCIXBUS_COMMAND// Size=0x8 (Id=3203)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Command:56;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x38
        unsigned long long PCIXCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long Reserved:7;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x7
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};
