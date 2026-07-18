struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1010)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

enum _NDIS_NSI_COMPARTMENT_TYPE
{
    NDIS_NSI_COMPARTMENT_TYPE_UNSPECIFIED=0,
    NDIS_NSI_COMPARTMENT_TYPE_NATIVE=1,
    NDIS_NSI_COMPARTMENT_TYPE_ROUTING_DOMAIN=2,
    NDIS_NSI_COMPARTMENT_TYPE_CONTAINER=3
};

struct _NDIS_NSI_COMPARTMENT_RW// Size=0x668 (Id=1368)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    union _NET_LUID_LH LoopbackIfLuid;// Offset=0x8 Size=0x8
    struct _GUID LoopbackIfNetworkGuid;// Offset=0x10 Size=0x10
    struct _GUID LoopbackIfInterfaceGuid;// Offset=0x20 Size=0x10
    struct _IF_COUNTED_STRING_LH LoopbackIfDescr;// Offset=0x30 Size=0x204
    struct _IF_COUNTED_STRING_LH LoopbackIfAlias;// Offset=0x234 Size=0x204
    struct _GUID CompartmentGuid;// Offset=0x438 Size=0x10
    struct _IF_COUNTED_STRING_LH CompartmentDescr;// Offset=0x448 Size=0x204
    enum _NDIS_NSI_COMPARTMENT_TYPE CompartmentType;// Offset=0x64c Size=0x4
    unsigned long Flags;// Offset=0x650 Size=0x4
    struct _GUID NamespaceGuid;// Offset=0x654 Size=0x10
};

struct _NDIS_IF_COMPARTMENT_BLOCK// Size=0x6c0 (Id=583)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    unsigned int CompartmentId;// Offset=0x10 Size=0x4
    struct _LIST_ENTRY NetworkLink;// Offset=0x18 Size=0x10
    unsigned long Flags;// Offset=0x28 Size=0x4
    long Ref;// Offset=0x2c Size=0x4
    long UserRef;// Offset=0x30 Size=0x4
    struct _NDIS_IF_NETWORK_BLOCK * LoopbackNetwork;// Offset=0x38 Size=0x8
    struct _NDIS_NSI_COMPARTMENT_RW LoopbackInfo;// Offset=0x40 Size=0x668
    struct _NDIS_IF_BLOCK * LoopbackIf;// Offset=0x6a8 Size=0x8
    struct _KEVENT * AsyncEvent;// Offset=0x6b0 Size=0x8
    struct _EJOB * JobObject;// Offset=0x6b8 Size=0x8
};
