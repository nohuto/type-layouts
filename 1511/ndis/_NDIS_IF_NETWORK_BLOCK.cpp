struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=413)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=666)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

struct _NDIS_NSI_NETWORK_RW// Size=0x210 (Id=1164)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned int CompartmentId;// Offset=0x4 Size=0x4
    unsigned long SiteId;// Offset=0x8 Size=0x4
    struct _IF_COUNTED_STRING_LH NetworkName;// Offset=0xc Size=0x204
};

struct _NDIS_IF_NETWORK_BLOCK// Size=0x268 (Id=1040)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY CompartmentLink;// Offset=0x10 Size=0x10
    struct _GUID NetworkGuid;// Offset=0x20 Size=0x10
    struct _NDIS_IF_COMPARTMENT_BLOCK * Compartment;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY InterfaceLink;// Offset=0x38 Size=0x10
    unsigned long Flags;// Offset=0x48 Size=0x4
    long Ref;// Offset=0x4c Size=0x4
    struct _NDIS_NSI_NETWORK_RW NetworkInfo;// Offset=0x50 Size=0x210
    struct _KEVENT * AsyncEvent;// Offset=0x260 Size=0x8
};
