enum _ETW_AUTOBOOST_CONVERT_WAITER_TO_OWNER_EVENT_ENTRY_STATE
{
    AbConvertEntryLockNotInTree=0,
    AbConvertEntryNotInTree=1,
    AbConvertEntryIsRoot=2
};

union _ETW_AUTOBOOST_CONVERT_WAITER_TO_OWNER_EVENT_STATE// Size=0x4 (Id=3414)
{
    struct // Size=0x4 (Id=0)
    {
        enum _ETW_AUTOBOOST_CONVERT_WAITER_TO_OWNER_EVENT_ENTRY_STATE EntryState:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long DpcQueued:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _ETW_AUTOBOOST_CONVERT_WAITER_TO_OWNER_EVENT// Size=0x10 (Id=4031)
{
    void * Lock;// Offset=0x0 Size=0x8
    unsigned long ThreadId;// Offset=0x8 Size=0x4
    union _ETW_AUTOBOOST_CONVERT_WAITER_TO_OWNER_EVENT_STATE State;// Offset=0xc Size=0x4
};
