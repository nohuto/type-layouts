struct _PREBOOT_CONTEXT// Size=0x18 (Id=2446)
{
    unsigned long long DoorBell;// Offset=0x0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long AllFlags;// Offset=0x8 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Complete:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Spare:63;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x3f
        };
    };
    unsigned char BspState[1];// Offset=0x10 Size=0x1
};
