enum _ENDPOINT_TYPE
{
    BulkIn=0,
    BulkOut=1,
    InterruptIn=2,
    InterruptOut=3,
    IsochronousIn=4,
    IsochronousOut=5
};

enum _ENDPOINT_PRIORITY
{
    EndpointPriorityVideo=1,
    EndpointPriorityVoice=2,
    EndpointPriorityInteractive=3
};

struct _ENDPOINT_PRIORITY_ENTRY// Size=0x14 (Id=705)
{
    unsigned short ConfigurationValue;// Offset=0x0 Size=0x2
    unsigned short InterfaceNumber;// Offset=0x2 Size=0x2
    unsigned short AlternateSetting;// Offset=0x4 Size=0x2
    enum _ENDPOINT_TYPE EndpointType;// Offset=0x8 Size=0x4
    unsigned short EndpointPosition;// Offset=0xc Size=0x2
    enum _ENDPOINT_PRIORITY EndpointPriority;// Offset=0x10 Size=0x4
};
