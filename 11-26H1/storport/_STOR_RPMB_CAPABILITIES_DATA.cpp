struct _STOR_ADDRESS// Size=0x10 (Id=198)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned short Port;// Offset=0x2 Size=0x2
    unsigned long AddressLength;// Offset=0x4 Size=0x4
    unsigned char AddressData[1];// Offset=0x8 Size=0x1
};

enum _STOR_RPMB_FRAME_TYPE
{
    StorRpmbFrameTypeUnknown=0,
    StorRpmbFrameTypeStandard=1,
    StorRpmbFrameTypeMax=2
};

struct _STOR_RPMB_CAPABILITIES_DATA// Size=0x30 (Id=197)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long RpmbSize;// Offset=0x8 Size=0x4
    unsigned long MaxReliableRpmbWriteSize;// Offset=0xc Size=0x4
    unsigned char SecurityProtocol;// Offset=0x10 Size=0x1
    unsigned short SecurityProtocolSpecifier;// Offset=0x12 Size=0x2
    struct _STOR_ADDRESS RpmbTarget;// Offset=0x18 Size=0x10
    enum _STOR_RPMB_FRAME_TYPE FrameFormat;// Offset=0x28 Size=0x4
};
