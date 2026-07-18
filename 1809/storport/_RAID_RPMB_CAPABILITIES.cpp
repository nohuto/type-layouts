struct _UNICODE_STRING// Size=0x10 (Id=331)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _STOR_ADDRESS// Size=0x10 (Id=147)
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

struct _RAID_RPMB_CAPABILITIES// Size=0x38 (Id=381)
{
    struct _UNICODE_STRING InterfaceNameRpmb;// Offset=0x0 Size=0x10
    unsigned long RpmbSize;// Offset=0x10 Size=0x4
    unsigned long MaxReliableRpmbWriteSize;// Offset=0x14 Size=0x4
    unsigned char SecurityProtocol;// Offset=0x18 Size=0x1
    unsigned short SecurityProtocolSpecifier;// Offset=0x1a Size=0x2
    struct _STOR_ADDRESS RpmbTarget;// Offset=0x20 Size=0x10
    enum _STOR_RPMB_FRAME_TYPE FrameFormat;// Offset=0x30 Size=0x4
};
