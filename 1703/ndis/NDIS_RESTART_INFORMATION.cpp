struct _NDIS_RESTART_ATTRIBUTES// Size=0x20 (Id=328)
{
    struct _NDIS_RESTART_ATTRIBUTES * Next;// Offset=0x0 Size=0x8
    unsigned long Oid;// Offset=0x8 Size=0x4
    unsigned long DataLength;// Offset=0xc Size=0x4
    unsigned char Data[1];// Offset=0x10 Size=0x1
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NET_IF_ACCESS_TYPE
{
    NET_IF_ACCESS_LOOPBACK=1,
    NET_IF_ACCESS_BROADCAST=2,
    NET_IF_ACCESS_POINT_TO_POINT=3,
    NET_IF_ACCESS_POINT_TO_MULTI_POINT=4,
    NET_IF_ACCESS_MAXIMUM=5
};

enum _NET_IF_CONNECTION_TYPE
{
    NET_IF_CONNECTION_DEDICATED=1,
    NET_IF_CONNECTION_PASSIVE=2,
    NET_IF_CONNECTION_DEMAND=3,
    NET_IF_CONNECTION_MAXIMUM=4
};

struct _NDIS_RESTART_GENERAL_ATTRIBUTES// Size=0x58 (Id=331)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long MtuSize;// Offset=0x4 Size=0x4
    unsigned long long MaxXmitLinkSpeed;// Offset=0x8 Size=0x8
    unsigned long long MaxRcvLinkSpeed;// Offset=0x10 Size=0x8
    unsigned long LookaheadSize;// Offset=0x18 Size=0x4
    unsigned long MacOptions;// Offset=0x1c Size=0x4
    unsigned long SupportedPacketFilters;// Offset=0x20 Size=0x4
    unsigned long MaxMulticastListSize;// Offset=0x24 Size=0x4
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES * RecvScaleCapabilities;// Offset=0x28 Size=0x8
    enum _NET_IF_ACCESS_TYPE AccessType;// Offset=0x30 Size=0x4
    unsigned long Flags;// Offset=0x34 Size=0x4
    enum _NET_IF_CONNECTION_TYPE ConnectionType;// Offset=0x38 Size=0x4
    unsigned long SupportedStatistics;// Offset=0x3c Size=0x4
    unsigned long DataBackFillSize;// Offset=0x40 Size=0x4
    unsigned long ContextBackFillSize;// Offset=0x44 Size=0x4
    unsigned long * SupportedOidList;// Offset=0x48 Size=0x8
    unsigned long SupportedOidListLength;// Offset=0x50 Size=0x4
    unsigned long MaxLookaheadSizeAccessed;// Offset=0x54 Size=0x4
};

struct _NDIS_RECEIVE_SCALE_CAPABILITIES// Size=0x14 (Id=323)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long CapabilitiesFlags;// Offset=0x4 Size=0x4
    unsigned long NumberOfInterruptMessages;// Offset=0x8 Size=0x4
    unsigned long NumberOfReceiveQueues;// Offset=0xc Size=0x4
    unsigned short NumberOfIndirectionTableEntries;// Offset=0x10 Size=0x2
};

union _NET_LUID_LH// Size=0x8 (Id=384)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=11495)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

struct _NDIS_PROTOCOL_RESTART_PARAMETERS// Size=0x38 (Id=324)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char * FilterModuleNameBuffer;// Offset=0x8 Size=0x8
    unsigned long FilterModuleNameBufferLength;// Offset=0x10 Size=0x4
    struct _NDIS_RESTART_ATTRIBUTES * RestartAttributes;// Offset=0x18 Size=0x8
    unsigned long BoundIfIndex;// Offset=0x20 Size=0x4
    union _NET_LUID_LH BoundIfNetluid;// Offset=0x28 Size=0x8
    unsigned long Flags;// Offset=0x30 Size=0x4
};

struct NDIS_RESTART_INFORMATION// Size=0xe0 (Id=322)
{
    union // Size=0x20 (Id=0)
    {
        struct _NDIS_RESTART_ATTRIBUTES Attributes;// Offset=0x0 Size=0x20
        unsigned char Padding[16];// Offset=0x0 Size=0x10
        struct _NDIS_RESTART_GENERAL_ATTRIBUTES General;// Offset=0x10 Size=0x58
    };
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES RssCaps;// Offset=0x70 Size=0x14
    struct _NDIS_PROTOCOL_RESTART_PARAMETERS ProtocolParameters;// Offset=0x88 Size=0x38
    unsigned long MiniportMacOptionsToPreserve;// Offset=0xc0 Size=0x4
    class Rtl::KArray<unsigned char> FilterInstanceBuffer;// Offset=0xc8 Size=0x10
    void NDIS_RESTART_INFORMATION();
    void ~NDIS_RESTART_INFORMATION();
    void * __vecDelDtor(unsigned int );
};
