union _KALPC_DIRECT_EVENT// Size=0x8 (Id=821)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DirectType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long EventReferenced:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long EventObjectBits:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};

struct _ALPC_DISPATCH_CONTEXT// Size=0x40 (Id=813)
{
    struct _ALPC_PORT * PortObject;// Offset=0x0 Size=0x8
    struct _KALPC_MESSAGE * Message;// Offset=0x8 Size=0x8
    struct _ALPC_COMMUNICATION_INFO * CommunicationInfo;// Offset=0x10 Size=0x8
    struct _ETHREAD * TargetThread;// Offset=0x18 Size=0x8
    struct _ALPC_PORT * TargetPort;// Offset=0x20 Size=0x8
    union _KALPC_DIRECT_EVENT DirectEvent;// Offset=0x28 Size=0x8
    unsigned long Flags;// Offset=0x30 Size=0x4
    unsigned short TotalLength;// Offset=0x34 Size=0x2
    unsigned short Type;// Offset=0x36 Size=0x2
    unsigned short DataInfoOffset;// Offset=0x38 Size=0x2
    unsigned char SignalCompletion;// Offset=0x3a Size=0x1
    unsigned char PostedToCompletionList;// Offset=0x3b Size=0x1
};
