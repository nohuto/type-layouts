struct _unnamed_1195// Size=0x4 (Id=1195)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MissedEtwRegistration:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsBootDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_1196// Size=0x4 (Id=1196)
{
    struct _unnamed_1195 Flags;// Offset=0x0 Size=0x4
    unsigned long Whole;// Offset=0x0 Size=0x4
};
