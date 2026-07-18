union _KLOCK_ENTRY_LOCK_STATE// Size=0x8 (Id=303)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CrossThreadReleasable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Busy:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3d
        unsigned long long InTree:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
    void * LockState;// Offset=0x0 Size=0x8
};
