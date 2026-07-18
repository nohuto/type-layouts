struct _HEAP_BUCKET// Size=0x4 (Id=340)
{
    unsigned short BlockUnits;// Offset=0x0 Size=0x2
    unsigned char SizeIndex;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char UseAffinity:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DebugFlags:2;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x2
        };
        unsigned char Flags;// Offset=0x3 Size=0x1
    };
};
