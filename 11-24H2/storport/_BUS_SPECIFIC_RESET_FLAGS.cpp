struct _unnamed_883// Size=0x8 (Id=883)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long KeepStackReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

union _BUS_SPECIFIC_RESET_FLAGS// Size=0x8 (Id=884)
{
    struct _unnamed_883 u;// Offset=0x0 Size=0x8
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
