struct _unnamed_393// Size=0x10 (Id=393)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned char Consumed;// Offset=0x8 Size=0x1
    unsigned short ErrorCode;// Offset=0xa Size=0x2
    unsigned char ErrorIpValid;// Offset=0xc Size=0x1
    unsigned char RestartIpValid;// Offset=0xd Size=0x1
    unsigned char ClearPoison;// Offset=0xe Size=0x1
};

struct _unnamed_394// Size=0x8 (Id=394)
{
    unsigned long long PmemErrInfo;// Offset=0x0 Size=0x8
};

enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE
{
    WheaRecoveryContextErrorTypeMemory=1,
    WheaRecoveryContextErrorTypePmem=2,
    WheaRecoveryContextErrorTypeMax=3
};

enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN
{
    WheaRecoveryContextActionTakenNone=0,
    WheaRecoveryContextActionTakenOfflineDemotion=1,
    WheaRecoveryContextActionTakenPageNotReplaced=2,
    WheaRecoveryContextActionTakenPageReplaced=3,
    WheaRecoveryContextActionTakenMax=4
};

struct _unnamed_475// Size=0x1 (Id=475)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PlatformDirected:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PageSwapped:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char PageDemoted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char NotifyAllOfflines:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char PageOfflined:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS// Size=0x1 (Id=476)
{
    struct _unnamed_475 Bits;// Offset=0x0 Size=0x1
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _unnamed_471// Size=0x8 (Id=471)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved:64;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x40
    };
};

union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO// Size=0x8 (Id=472)
{
    struct _unnamed_471 Bits;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
};

struct _WHEA_RECOVERY_CONTEXT_PAGE_INFO// Size=0x18 (Id=470)
{
    unsigned long ComponentTag;// Offset=0x0 Size=0x4
    long PageStatus;// Offset=0x4 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN ActionTaken;// Offset=0x8 Size=0x4
    union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS NotifyFlags;// Offset=0xc Size=0x1
    unsigned char ImmediateSuccess;// Offset=0xd Size=0x1
    unsigned short Reserved;// Offset=0xe Size=0x2
    union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO ActionTakenAdditionalInfo;// Offset=0x10 Size=0x8
};

struct _WHEA_RECOVERY_CONTEXT// Size=0x1828 (Id=396)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_393 MemoryError;// Offset=0x0 Size=0x10
        struct _unnamed_394 PmemError;// Offset=0x0 Size=0x8
        unsigned long long PartitionId;// Offset=0x10 Size=0x8
    };
    unsigned int VpIndex;// Offset=0x18 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;// Offset=0x1c Size=0x4
    unsigned long PageCount;// Offset=0x20 Size=0x4
    struct _WHEA_RECOVERY_CONTEXT_PAGE_INFO PageInfo[256];// Offset=0x24 Size=0x1800
};
