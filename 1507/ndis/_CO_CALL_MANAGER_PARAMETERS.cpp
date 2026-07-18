struct _flowspec// Size=0x20 (Id=990)
{
    unsigned long TokenRate;// Offset=0x0 Size=0x4
    unsigned long TokenBucketSize;// Offset=0x4 Size=0x4
    unsigned long PeakBandwidth;// Offset=0x8 Size=0x4
    unsigned long Latency;// Offset=0xc Size=0x4
    unsigned long DelayVariation;// Offset=0x10 Size=0x4
    unsigned long ServiceType;// Offset=0x14 Size=0x4
    unsigned long MaxSduSize;// Offset=0x18 Size=0x4
    unsigned long MinimumPolicedSize;// Offset=0x1c Size=0x4
};

struct _CO_SPECIFIC_PARAMETERS// Size=0xc (Id=763)
{
    unsigned long ParamType;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char Parameters[1];// Offset=0x8 Size=0x1
};

struct _CO_CALL_MANAGER_PARAMETERS// Size=0x4c (Id=755)
{
    struct _flowspec Transmit;// Offset=0x0 Size=0x20
    struct _flowspec Receive;// Offset=0x20 Size=0x20
    struct _CO_SPECIFIC_PARAMETERS CallMgrSpecific;// Offset=0x40 Size=0xc
};
