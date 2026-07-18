enum _PKTMON_PACKET_TYPE
{
    PktMonPayload_Unknown=0,
    PktMonPayload_Ethernet=1,
    PktMonPayload_WiFi=2,
    PktMonPayload_MBB=3
};

struct _PKTMON_EDGE_CONTEXT// Size=0x18 (Id=571)
{
    void * EdgeHandle;// Offset=0x0 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT * CompContext;// Offset=0x8 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x10 Size=0x4
};
