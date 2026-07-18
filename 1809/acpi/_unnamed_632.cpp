struct _unnamed_631// Size=0x4 (Id=631)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_632// Size=0x4 (Id=632)
{
    struct _unnamed_631 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
