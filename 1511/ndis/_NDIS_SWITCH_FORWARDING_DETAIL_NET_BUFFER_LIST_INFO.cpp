union _NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO// Size=0x8 (Id=590)
{
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned int NumAvailableDestinations:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned int SourcePortId:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned int SourceNicIndex:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned int NativeForwardingRequired:1;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int Reserved1:1;// Offset=0x4 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int IsPacketDataSafe:1;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int SafePacketDataSize:12;// Offset=0x4 Size=0x4 BitOffset=0xb BitSize=0xc
        unsigned int Reserved2:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
    };
};
