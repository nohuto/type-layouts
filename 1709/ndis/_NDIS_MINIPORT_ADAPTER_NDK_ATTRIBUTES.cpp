struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES// Size=0x10 (Id=1031)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char Enabled;// Offset=0x4 Size=0x1
    struct _NDIS_NDK_CAPABILITIES * NdkCapabilities;// Offset=0x8 Size=0x8
};
