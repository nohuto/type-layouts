struct _unnamed_686// Size=0xc (Id=686)
{
    unsigned long MessageAddressHigh;// Offset=0x0 Size=0x4
    unsigned long MessageAddressLow;// Offset=0x4 Size=0x4
    unsigned short MessageData;// Offset=0x8 Size=0x2
    unsigned short Reserved;// Offset=0xa Size=0x2
};

union _unnamed_687// Size=0xc (Id=687)
{
    struct _unnamed_686 Msi;// Offset=0x0 Size=0xc
};

struct _INTERRUPT_REMAPPING_INFO// Size=0x10 (Id=688)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IrtIndex:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long FlagHalInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long FlagTranslated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    union _unnamed_687 u;// Offset=0x4 Size=0xc
};
