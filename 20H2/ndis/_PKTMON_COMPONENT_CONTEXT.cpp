struct _LIST_ENTRY// Size=0x10 (Id=31)
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

struct _PKTMON_COMPONENT_CONTEXT// Size=0x38 (Id=526)
{
    struct _LIST_ENTRY ListLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY EdgeList;// Offset=0x10 Size=0x10
    long EdgeCount;// Offset=0x20 Size=0x4
    void * CompHandle;// Offset=0x28 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        int FlowEnabled:1;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1
        int DropEnabled:1;// Offset=0x34 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
