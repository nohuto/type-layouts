struct _XILCORE_COMMAND_DATA// Size=0x38 (Id=906)
{
    void * CommandRingHandle;// Offset=0x0 Size=0x8
    union _CRCR * CommandRingControl;// Offset=0x8 Size=0x8
    struct _XIL_BUFFER_DATA * CommandRingBufferData;// Offset=0x10 Size=0x8
    unsigned long long LinkTrbPointer;// Offset=0x18 Size=0x8
    unsigned long MaxTrbIndex;// Offset=0x20 Size=0x4
    unsigned long EnqueueIndex;// Offset=0x24 Size=0x4
    unsigned long DequeueIndex;// Offset=0x28 Size=0x4
    unsigned long CycleState;// Offset=0x2c Size=0x4
    struct _TRB * TrbArray;// Offset=0x30 Size=0x8
};

struct _XIL_DIRECT_COMMAND_DATA// Size=0x38 (Id=827)
{
    struct _XILCORE_COMMAND_DATA XilCoreCommandData;// Offset=0x0 Size=0x38
};

struct _XIL_PROXY_COMMAND_DATA// Size=0x20 (Id=631)
{
    void * RemoteCommandHandle;// Offset=0x0 Size=0x8
    unsigned long long CommandRingBufferLogicalAddress;// Offset=0x8 Size=0x8
    unsigned long long LinkTrbPointer;// Offset=0x10 Size=0x8
    unsigned long MaxTrbIndex;// Offset=0x18 Size=0x4
};

struct _XIL_COMMAND_DATA// Size=0x58 (Id=589)
{
    unsigned char IsProxyCommandRing;// Offset=0x0 Size=0x1
    void * CommandRingHandle;// Offset=0x8 Size=0x8
    union _DOORBELL_REGISTER * DoorbellRegister;// Offset=0x10 Size=0x8
    void * LocalRegisterHandle;// Offset=0x18 Size=0x8
    union // Size=0x38 (Id=0)
    {
        struct _XIL_DIRECT_COMMAND_DATA XilDirectCommandData;// Offset=0x20 Size=0x38
        struct _XIL_PROXY_COMMAND_DATA XilProxyCommandData;// Offset=0x20 Size=0x20
    };
};
