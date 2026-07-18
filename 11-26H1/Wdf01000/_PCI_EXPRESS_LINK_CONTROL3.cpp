struct _PCI_EXPRESS_LINK_CONTROL3// Size=0x4 (Id=3480)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long PerformEq:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long LinkEqIntEn:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};
