struct _unnamed_1185// Size=0x8 (Id=1185)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long KeepStackReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long RecoveringFromBusError:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};

union _DEVICE_RESET_STATUS_FLAGS// Size=0x8 (Id=1186)
{
    struct _unnamed_1185 u;// Offset=0x0 Size=0x8
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
