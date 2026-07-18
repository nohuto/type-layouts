struct _KSCLOCK_DISPATCH// Size=0x20 (Id=1934)
{
    unsigned char  ( * SetTimer)(struct _KSPIN * ,struct _KTIMER * ,union _LARGE_INTEGER ,struct _KDPC * );// Offset=0x0 Size=0x8
    unsigned char  ( * CancelTimer)(struct _KSPIN * ,struct _KTIMER * );// Offset=0x8 Size=0x8
    long long  ( * CorrelatedTime)(struct _KSPIN * ,long long * );// Offset=0x10 Size=0x8
    void  ( * Resolution)(struct _KSPIN * ,struct KSRESOLUTION * );// Offset=0x18 Size=0x8
};
