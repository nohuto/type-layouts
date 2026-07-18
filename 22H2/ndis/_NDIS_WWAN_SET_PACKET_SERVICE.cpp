struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_PACKET_SERVICE_ACTION
{
    WwanPacketServiceActionAttach=0,
    WwanPacketServiceActionDetach=1
};

struct _NDIS_WWAN_SET_PACKET_SERVICE// Size=0x8 (Id=702)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    enum _WWAN_PACKET_SERVICE_ACTION PacketServiceAction;// Offset=0x4 Size=0x4
};
