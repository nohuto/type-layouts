union _WHEA_NMI_ERROR_SECTION_FLAGS// Size=0x4 (Id=2165)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HypervisorError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_NMI_ERROR_SECTION// Size=0xc (Id=2223)
{
    unsigned char Data[8];// Offset=0x0 Size=0x8
    union _WHEA_NMI_ERROR_SECTION_FLAGS Flags;// Offset=0x8 Size=0x4
};
