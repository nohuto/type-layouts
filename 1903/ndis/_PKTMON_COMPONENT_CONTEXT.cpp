enum _PKTMON_PACKET_TYPE
{
    PktMonPayload_Unknown=0,
    PktMonPayload_Ethernet=1,
    PktMonPayload_WiFi=2,
    PktMonPayload_MBB=3
};

struct _PKTMON_COMPONENT_CONTEXT// Size=0x10 (Id=570)
{
    void * CompHandle;// Offset=0x0 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        int FlowEnabled:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        int DropEnabled:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};
