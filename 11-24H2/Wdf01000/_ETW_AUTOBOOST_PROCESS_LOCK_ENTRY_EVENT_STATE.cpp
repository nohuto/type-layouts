enum _ETW_AUTOBOOST_PROCESS_LOCK_ENTRY_EVENT_LOCK_STATE
{
    AbProcessLockNotInTree=0,
    AbProcessLockNoWaiters=1,
    AbProcessLockBoostBypass=2
};

union _ETW_AUTOBOOST_PROCESS_LOCK_ENTRY_EVENT_STATE// Size=0x4 (Id=1743)
{
    struct // Size=0x4 (Id=0)
    {
        enum _ETW_AUTOBOOST_PROCESS_LOCK_ENTRY_EVENT_LOCK_STATE LockState:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long EntryIsWaiter:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long BasePriChange:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long BoostPriChange:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AddToTree:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long BoostSelf:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long BoostOthers:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
