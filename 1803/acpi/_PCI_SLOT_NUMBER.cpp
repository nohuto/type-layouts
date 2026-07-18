struct _unnamed_573// Size=0x4 (Id=573)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _unnamed_574// Size=0x4 (Id=574)
{
    struct _unnamed_573 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_SLOT_NUMBER// Size=0x4 (Id=575)
{
    union _unnamed_574 u;// Offset=0x0 Size=0x4
};
