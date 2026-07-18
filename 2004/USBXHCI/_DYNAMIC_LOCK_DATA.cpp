enum _DYNAMIC_LOCK_TYPE
{
    DynamicLockTypeSpinLock=0,
    DynamicLockTypeWaitLock=1
};

struct _DYNAMIC_LOCK_DATA// Size=0x10 (Id=426)
{
    enum _DYNAMIC_LOCK_TYPE LockType;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct WDFSPINLOCK__ * SpinLock;// Offset=0x8 Size=0x8
        struct WDFWAITLOCK__ * WaitLock;// Offset=0x8 Size=0x8
    };
};
