struct _anonymous_314// Size=0x10 (Id=314)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned char Consumed;// Offset=0x8 Size=0x1
    unsigned short ErrorCode;// Offset=0xa Size=0x2
    unsigned char ErrorIpValid;// Offset=0xc Size=0x1
    unsigned char RestartIpValid;// Offset=0xd Size=0x1
    unsigned char ClearPoison;// Offset=0xe Size=0x1
};

struct _anonymous_315// Size=0x8 (Id=315)
{
    unsigned long long PmemErrInfo;// Offset=0x0 Size=0x8
};

enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE
{
    WheaRecoveryContextErrorTypeMemory=1,
    WheaRecoveryContextErrorTypePmem=2,
    WheaRecoveryContextErrorTypeMax=3
};

struct _WHEA_RECOVERY_CONTEXT// Size=0x20 (Id=317)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_314 MemoryError;// Offset=0x0 Size=0x10
        struct _anonymous_315 PmemError;// Offset=0x0 Size=0x8
        unsigned long long PartitionId;// Offset=0x10 Size=0x8
    };
    unsigned int VpIndex;// Offset=0x18 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;// Offset=0x1c Size=0x4
};
