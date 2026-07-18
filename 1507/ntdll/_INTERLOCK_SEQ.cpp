struct _INTERLOCK_SEQ// Size=0x4 (Id=199)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short Depth;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short Hint:15;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0xf
            unsigned short Lock:1;// Offset=0x2 Size=0x2 BitOffset=0xf BitSize=0x1
        };
        unsigned short Hint16;// Offset=0x2 Size=0x2
        long Exchg;// Offset=0x0 Size=0x4
    };
};
