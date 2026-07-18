struct _anonymous_388// Size=0x4 (Id=388)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _anonymous_389// Size=0x4 (Id=389)
{
    struct _anonymous_388 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PCI_SLOT_NUMBER// Size=0x4 (Id=390)
{
    union _anonymous_389 u;// Offset=0x0 Size=0x4
};
