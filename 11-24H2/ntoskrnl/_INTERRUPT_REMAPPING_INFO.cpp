struct _unnamed_2199// Size=0xc (Id=2199)
{
    unsigned long MessageAddressHigh;// Offset=0x0 Size=0x4
    unsigned long MessageAddressLow;// Offset=0x4 Size=0x4
    unsigned long MessageData;// Offset=0x8 Size=0x4
};

union _unnamed_2200// Size=0xc (Id=2200)
{
    struct _unnamed_2199 Msi;// Offset=0x0 Size=0xc
};

struct _INTERRUPT_REMAPPING_INFO// Size=0x10 (Id=2201)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IrtIndex:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long FlagHalInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long FlagTranslated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    union _unnamed_2200 u;// Offset=0x4 Size=0xc
};
