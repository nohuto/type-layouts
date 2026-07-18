union _KLOCK_ENTRY_BOOST_BITMAP// Size=0x8 (Id=735)
{
    unsigned long long AllFields;// Offset=0x0 Size=0x8
    unsigned long AllBoosts;// Offset=0x0 Size=0x4
    unsigned long WaiterCounts;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long CpuBoostsBitmap:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long IoBoost:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long IoQoSBoost:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        unsigned long IoNormalPriorityWaiterCount:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long IoQoSWaiterCount:7;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x7
    };
};
