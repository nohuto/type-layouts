struct _NT_TIB// Size=0x38 (Id=1113)
{
    struct _EXCEPTION_REGISTRATION_RECORD * ExceptionList;// Offset=0x0 Size=0x8
    void * StackBase;// Offset=0x8 Size=0x8
    void * StackLimit;// Offset=0x10 Size=0x8
    void * SubSystemTib;// Offset=0x18 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * FiberData;// Offset=0x20 Size=0x8
        unsigned long Version;// Offset=0x20 Size=0x4
    };
    void * ArbitraryUserPointer;// Offset=0x28 Size=0x8
    struct _NT_TIB * Self;// Offset=0x30 Size=0x8
};

union _KPCR::_unnamed_1685// Size=0x38 (Id=1685)
{
    struct _NT_TIB NtTib;// Offset=0x0 Size=0x38
    union _KGDTENTRY64 * GdtBase;// Offset=0x0 Size=0x8
    struct _KTSS64 * TssBase;// Offset=0x8 Size=0x8
    unsigned long long UserRsp;// Offset=0x10 Size=0x8
    struct _KPCR * Self;// Offset=0x18 Size=0x8
    struct _KPRCB * CurrentPrcb;// Offset=0x20 Size=0x8
    struct _KSPIN_LOCK_QUEUE * LockArray;// Offset=0x28 Size=0x8
    void * Used_Self;// Offset=0x30 Size=0x8
};
