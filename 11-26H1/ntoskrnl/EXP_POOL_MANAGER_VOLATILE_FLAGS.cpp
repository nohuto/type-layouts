union EXP_POOL_MANAGER_VOLATILE_FLAGS// Size=0x4 (Id=2195)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Phase1InitComplete:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RebalanceWorkerActive:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};
