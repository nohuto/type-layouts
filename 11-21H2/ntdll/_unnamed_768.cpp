struct _unnamed_768// Size=0x8 (Id=768)
{
    unsigned short McaErrorCode;// Offset=0x0 Size=0x2
    unsigned short ModelErrorCode;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long OtherInformation:25;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x19
        unsigned long ContextCorrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long AddressValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long MiscValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long ErrorEnabled:1;// Offset=0x4 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long UncorrectedError:1;// Offset=0x4 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long StatusOverFlow:1;// Offset=0x4 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Valid:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
