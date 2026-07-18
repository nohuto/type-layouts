enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_QUALITY_OF_SERVICE// Size=0xc (Id=666)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    unsigned char ContextTrackingMode;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
};

struct _ALPC_PORT_ATTRIBUTES// Size=0x48 (Id=632)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;// Offset=0x4 Size=0xc
    unsigned long long MaxMessageLength;// Offset=0x10 Size=0x8
    unsigned long long MemoryBandwidth;// Offset=0x18 Size=0x8
    unsigned long long MaxPoolUsage;// Offset=0x20 Size=0x8
    unsigned long long MaxSectionSize;// Offset=0x28 Size=0x8
    unsigned long long MaxViewSize;// Offset=0x30 Size=0x8
    unsigned long long MaxTotalSectionSize;// Offset=0x38 Size=0x8
    unsigned long DupObjectTypes;// Offset=0x40 Size=0x4
    unsigned long Reserved;// Offset=0x44 Size=0x4
};
