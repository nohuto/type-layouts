struct _SPIN_LOCK// Size=0x10 (Id=1030)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char IsInitialized;// Offset=0x8 Size=0x1
    unsigned char OldIrql;// Offset=0x9 Size=0x1
};
