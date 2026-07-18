union _KPRCB_BPB_FEATURES// Size=0x1 (Id=523)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ClearOnIdle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Enabled:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Smep:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char KCet:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char BhbFlushSequence:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char FeaturesReserved2:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char FeaturesReserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};
