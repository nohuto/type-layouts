struct _KSCHEDULING_GROUP_POLICY// Size=0x8 (Id=586)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Value;// Offset=0x0 Size=0x4
        unsigned short Weight;// Offset=0x0 Size=0x2
        unsigned short MinRate;// Offset=0x0 Size=0x2
        unsigned short MaxRate;// Offset=0x2 Size=0x2
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long AllFlags;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Type:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Disabled:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Spare1:30;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
};
