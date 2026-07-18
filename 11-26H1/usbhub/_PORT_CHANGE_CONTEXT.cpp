union _USB_HUB_PORT_EVENT// Size=0x8 (Id=345)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long ul;// Offset=0x0 Size=0x4
        struct // Size=0x8 (Id=0)
        {
            unsigned long ConnectChange:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SuspendChange:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OvercurrentChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Reserved_do_not_use:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
            unsigned long TimeoutChange:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DriverResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long RequestPortSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long PauseChange:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long RequestPortResume:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long Unused:13;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0xd
        };
        unsigned short HwChange;// Offset=0x0 Size=0x2
        unsigned short SwChange;// Offset=0x2 Size=0x2
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _PCQ_OBJECT_TYPE
{
    PcqObj_NoType=0,
    PcqObj_Pdo=1,
    PcqObj_Timeout=2
};

struct _PORT_CHANGE_CONTEXT// Size=0x38 (Id=293)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    unsigned short PortNumber;// Offset=0x4 Size=0x2
    union _USB_HUB_PORT_EVENT PortEvent;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ChangeLink;// Offset=0x10 Size=0x10
    unsigned long FrameInserted;// Offset=0x20 Size=0x4
    void * Object;// Offset=0x28 Size=0x8
    enum _PCQ_OBJECT_TYPE ObjectType;// Offset=0x30 Size=0x4
};
