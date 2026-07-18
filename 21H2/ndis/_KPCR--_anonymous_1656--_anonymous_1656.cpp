struct _KPCR::_anonymous_1656::_anonymous_1656// Size=0x38 (Id=1656)
{
    union _KGDTENTRY64 * GdtBase;// Offset=0x0 Size=0x8
    struct _KTSS64 * TssBase;// Offset=0x8 Size=0x8
    unsigned long long UserRsp;// Offset=0x10 Size=0x8
    struct _KPCR * Self;// Offset=0x18 Size=0x8
    struct _KPRCB * CurrentPrcb;// Offset=0x20 Size=0x8
    struct _KSPIN_LOCK_QUEUE * LockArray;// Offset=0x28 Size=0x8
    void * Used_Self;// Offset=0x30 Size=0x8
};
