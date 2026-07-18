struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

union _NET_LUID_LH// Size=0x8 (Id=511)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=12008)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

struct _NDIS_PROTOCOL_RESTART_PARAMETERS// Size=0x38 (Id=450)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char * FilterModuleNameBuffer;// Offset=0x8 Size=0x8
    unsigned long FilterModuleNameBufferLength;// Offset=0x10 Size=0x4
    struct _NDIS_RESTART_ATTRIBUTES * RestartAttributes;// Offset=0x18 Size=0x8
    unsigned long BoundIfIndex;// Offset=0x20 Size=0x4
    union _NET_LUID_LH BoundIfNetluid;// Offset=0x28 Size=0x8
    unsigned long Flags;// Offset=0x30 Size=0x4
};
