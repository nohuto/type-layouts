struct _GUID// Size=0x10 (Id=57)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _TRUSTLET_OPCODE
{
    TrustletOpcodeInvalid=0,
    ControllerCreate=1,
    ControllerDestroy=2,
    ControllerRequestDebugBreak=3,
    SecureDmaEnablerCreate=4,
    SecureDmaEnablerMapExposedSection=5,
    SecureDmaEnablerUnmap=6,
    RegisterCreate=7,
    RegisterMapMmio=8,
    RegisterUnmapMmio=9,
    RegisterReadMmio=10,
    RegisterWriteMmio=11,
    CommandCreate=12,
    CommandAllocateResources=13,
    CommandFreeResources=14,
    CommandInitialize=15,
    CommandAbortRing=16,
    CommandAdvanceDequeuePointer=17,
    CommandQueryIsRingRunning=18,
    CommandAddCommandTRBToRing=19,
    CommandRingDoorbell=20,
    DeviceSlotCreate=21,
    DeviceSlotAllocateResources=22,
    DeviceSlotFreeResources=23,
    DeviceSlotInitialize=24,
    DeviceSlotInitializeScratchpadBuffers=25,
    DeviceSlotSetDeviceContext=26,
    DeviceSlotClearDeviceContext=27,
    DeviceSlotQueryInfoFromSlotContext=28,
    DeviceSlotQueryInfoFromEndpointContext=29,
    UsbDeviceCreate=30,
    UsbDeviceDestroy=31,
    UsbDeviceRingDoorbell=32,
    EndpointCreate=33,
    EndpointDestroy=34,
    StreamContextArrayCreate=35,
    StreamContextArrayGet=36,
    StreamContextArraySet=37,
    StreamContextArrayDestroy=38,
    TransferRingCreate=39,
    TransferRingAllocateSegments=40,
    TransferRingFreeSegments=41,
    TransferRingInitializeSegment=42,
    TransferRingStageComplete=43,
    TransferRingAddTRBRange=44,
    UsbDeviceQueryAttributes=45,
    TrustletOpCodeMax=46
};

struct _TRUSTLET_REQUEST_HEADER// Size=0x28 (Id=806)
{
    struct _GUID ActivityId;// Offset=0x0 Size=0x10
    unsigned long OutstandingRequestsAtSendTime;// Offset=0x10 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * TargetObjectHandle;// Offset=0x18 Size=0x8
    enum _TRUSTLET_OPCODE OpCode;// Offset=0x20 Size=0x4
};

struct _SECURE_CHANNEL_REQUEST_CONTEXT// Size=0x38 (Id=525)
{
    struct _TRUSTLET_REQUEST_HEADER Header;// Offset=0x0 Size=0x28
    void  ( * CompletionRoutine)(void * ,long ,void * ,unsigned long );// Offset=0x28 Size=0x8
    void * Context;// Offset=0x30 Size=0x8
};
