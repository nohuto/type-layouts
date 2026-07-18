struct _unnamed_2443// Size=0x4 (Id=2443)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2444)
{
    struct _unnamed_2443 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
