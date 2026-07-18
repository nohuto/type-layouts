struct _unnamed_570// Size=0x4 (Id=570)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _unnamed_571// Size=0x4 (Id=571)
{
    struct _unnamed_570 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_SLOT_NUMBER// Size=0x4 (Id=572)
{
    union _unnamed_571 u;// Offset=0x0 Size=0x4
};
