struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=227)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO// Size=0x18 (Id=1032)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    char * ContextName;// Offset=0x8 Size=0x8
    struct _GUID * ExtensionId;// Offset=0x10 Size=0x8
};
