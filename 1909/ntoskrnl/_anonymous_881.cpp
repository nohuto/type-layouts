struct _anonymous_880// Size=0x4 (Id=880)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _anonymous_881// Size=0x4 (Id=881)
{
    struct _anonymous_880 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
