struct _unnamed_400// Size=0x10 (Id=400)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned char Consumed;// Offset=0x8 Size=0x1
    unsigned short ErrorCode;// Offset=0xa Size=0x2
    unsigned char ErrorIpValid;// Offset=0xc Size=0x1
    unsigned char RestartIpValid;// Offset=0xd Size=0x1
    unsigned char ClearPoison;// Offset=0xe Size=0x1
};

struct _unnamed_401// Size=0x8 (Id=401)
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

struct _unnamed_482// Size=0x1 (Id=482)
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

union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS// Size=0x1 (Id=483)
{
    struct _unnamed_482 Bits;// Offset=0x0 Size=0x1
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _unnamed_478// Size=0x8 (Id=478)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved:64;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x40
    };
};

union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO// Size=0x8 (Id=479)
{
    struct _unnamed_478 Bits;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
};

struct _WHEA_RECOVERY_CONTEXT_PAGE_INFO// Size=0x18 (Id=477)
{
    unsigned long ComponentTag;// Offset=0x0 Size=0x4
    long PageStatus;// Offset=0x4 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN ActionTaken;// Offset=0x8 Size=0x4
    union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS NotifyFlags;// Offset=0xc Size=0x1
    unsigned char ImmediateSuccess;// Offset=0xd Size=0x1
    unsigned short Reserved;// Offset=0xe Size=0x2
    union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO ActionTakenAdditionalInfo;// Offset=0x10 Size=0x8
};

struct _WHEA_RECOVERY_CONTEXT// Size=0x1830 (Id=403)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_400 MemoryError;// Offset=0x0 Size=0x10
        struct _unnamed_401 PmemError;// Offset=0x0 Size=0x8
        unsigned long long PartitionId;// Offset=0x10 Size=0x8
    };
    unsigned int VpIndex;// Offset=0x18 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;// Offset=0x1c Size=0x4
    unsigned long PageCount;// Offset=0x20 Size=0x4
    struct _WHEA_RECOVERY_CONTEXT_PAGE_INFO PageInfo[256];// Offset=0x24 Size=0x1800
    unsigned long long ChildPartitionId;// Offset=0x1828 Size=0x8
};
