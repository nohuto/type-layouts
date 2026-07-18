struct _ETW_AUTOBOOST_CLEAR_PRIORITY_FLOOR_EVENT// Size=0x10 (Id=2108)
{
    void * Lock;// Offset=0x0 Size=0x8
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short IoBoost:1;// Offset=0xc Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short CpuBoostsBitmap:15;// Offset=0xc Size=0x2 BitOffset=0x1 BitSize=0xf
        };
        unsigned short BoostBitmap;// Offset=0xc Size=0x2
    };
    unsigned short Reserved;// Offset=0xe Size=0x2
};
