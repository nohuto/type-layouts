enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN
{
    WheaRecoveryContextActionTakenNone=0,
    WheaRecoveryContextActionTakenOfflineDemotion=1,
    WheaRecoveryContextActionTakenPageNotReplaced=2,
    WheaRecoveryContextActionTakenPageReplaced=3,
    WheaRecoveryContextActionTakenMax=4
};

union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS// Size=0x1 (Id=3601)
{
    struct <unnamed-type-Bits>// Size=0x1 (Id=26672)
    {
        unsigned char PlatformDirected:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PageSwapped:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char PageDemoted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char NotifyAllOfflines:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char PageOfflined:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    struct _WHEA_IN_USE_PAGE_NOTIFY_FLAGS::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x1
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO// Size=0x8 (Id=2792)
{
    struct <unnamed-type-Bits>// Size=0x8 (Id=27307)
    {
        unsigned long long Reserved:64;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x40
    };
    struct _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
};

struct _WHEA_RECOVERY_CONTEXT_PAGE_INFO// Size=0x18 (Id=4002)
{
    unsigned long ComponentTag;// Offset=0x0 Size=0x4
    long PageStatus;// Offset=0x4 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN ActionTaken;// Offset=0x8 Size=0x4
    union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS NotifyFlags;// Offset=0xc Size=0x1
    unsigned char ImmediateSuccess;// Offset=0xd Size=0x1
    unsigned short Reserved;// Offset=0xe Size=0x2
    union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO ActionTakenAdditionalInfo;// Offset=0x10 Size=0x8
};
