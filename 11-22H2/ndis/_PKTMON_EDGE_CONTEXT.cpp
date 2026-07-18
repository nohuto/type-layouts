struct _LIST_ENTRY// Size=0x10 (Id=49)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _PKTMON_PACKET_TYPE
{
    PktMonPayload_Unknown=0,
    PktMonPayload_Ethernet=1,
    PktMonPayload_WiFi=2,
    PktMonPayload_IP=3,
    PktMonPayload_HTTP=4,
    PktMonPayload_TCP=5,
    PktMonPayload_UDP=6,
    PktMonPayload_ARP=7,
    PktMonPayload_ICMP=8,
    PktMonPayload_ESP=9,
    PktMonPayload_AH=10,
    PktMonPayload_L4Payload=11
};

struct _PKTMON_EDGE_CONTEXT// Size=0x28 (Id=607)
{
    struct _LIST_ENTRY ListLink;// Offset=0x0 Size=0x10
    void * EdgeHandle;// Offset=0x10 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT * CompContext;// Offset=0x18 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x20 Size=0x4
};
