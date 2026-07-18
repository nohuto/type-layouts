enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE
{
    WheaRecoveryContextErrorTypeMemory=1,
    WheaRecoveryContextErrorTypePmem=2,
    WheaRecoveryContextErrorTypeMax=3
};

struct _WHEA_RECOVERY_CONTEXT// Size=0x20 (Id=2448)
{
    union // Size=0x10 (Id=0)
    {
        struct _WHEA_RECOVERY_CONTEXT::_anonymous_2450::<unnamed-type-MemoryError> MemoryError;// Offset=0x0 Size=0x10
        struct _WHEA_RECOVERY_CONTEXT::_anonymous_2449::<unnamed-type-PmemError> PmemError;// Offset=0x0 Size=0x8
        unsigned long long PartitionId;// Offset=0x10 Size=0x8
    };
    unsigned int VpIndex;// Offset=0x18 Size=0x4
    enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;// Offset=0x1c Size=0x4
};
