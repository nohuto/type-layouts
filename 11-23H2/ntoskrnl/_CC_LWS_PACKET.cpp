enum _CC_LWS_PACKET_TYPE
{
    LWSPacket_Invalid=0,
    LWSPacket_Partition=1,
    LWSPacket_PrivateVCM=2,
    LWSPacket_Max=3
};

union _unnamed_1241// Size=0x8 (Id=1241)
{
    struct _CC_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _PRIVATE_VOLUME_CACHEMAP * PrivateVolumeCacheMap;// Offset=0x0 Size=0x8
};

struct _CC_LWS_PACKET// Size=0x10 (Id=1242)
{
    enum _CC_LWS_PACKET_TYPE Type;// Offset=0x0 Size=0x4
    unsigned char Active;// Offset=0x4 Size=0x1
    union _unnamed_1241 Overlay;// Offset=0x8 Size=0x8
};
