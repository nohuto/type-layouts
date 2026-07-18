enum _NDIS_WAN_QUALITY
{
    NdisWanRaw=0,
    NdisWanErrorControl=1,
    NdisWanReliable=2
};

struct _UNICODE_STRING// Size=0x10 (Id=39)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_WAN_LINE_UP// Size=0x40 (Id=967)
{
    unsigned long LinkSpeed;// Offset=0x0 Size=0x4
    unsigned long MaximumTotalSize;// Offset=0x4 Size=0x4
    enum _NDIS_WAN_QUALITY Quality;// Offset=0x8 Size=0x4
    unsigned short SendWindow;// Offset=0xc Size=0x2
    unsigned char RemoteAddress[6];// Offset=0xe Size=0x6
    unsigned char LocalAddress[6];// Offset=0x14 Size=0x6
    unsigned long ProtocolBufferLength;// Offset=0x1c Size=0x4
    unsigned char * ProtocolBuffer;// Offset=0x20 Size=0x8
    unsigned short ProtocolType;// Offset=0x28 Size=0x2
    struct _UNICODE_STRING DeviceName;// Offset=0x30 Size=0x10
};
