struct _KLOCK_ENTRY_LOCK_STATE// Size=0x8 (Id=516)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long CrossThreadReleasable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Busy:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1d
            unsigned long InTree:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        void * LockState;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        void * SessionState;// Offset=0x4 Size=0x4
        unsigned long SessionId;// Offset=0x4 Size=0x4
    };
};
