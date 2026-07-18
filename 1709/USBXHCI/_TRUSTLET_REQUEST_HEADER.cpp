struct _GUID// Size=0x10 (Id=101)
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
    SecureDmaEnablerCreate=3,
    SecureDmaEnablerMapExposedSection=4,
    SecureDmaEnablerUnmap=5,
    RegisterCreate=6,
    RegisterMapMmio=7,
    RegisterUnmapMmio=8,
    RegisterReadMmio=9,
    RegisterWriteMmio=10,
    CommandCreate=11,
    CommandAllocateResources=12,
    CommandFreeResources=13,
    CommandInitialize=14,
    CommandAbortRing=15,
    CommandAdvanceDequeuePointer=16,
    CommandQueryIsRingRunning=17,
    CommandAddCommandTRBToRing=18,
    CommandRingDoorbell=19,
    DeviceSlotCreate=20,
    DeviceSlotAllocateResources=21,
    DeviceSlotFreeResources=22,
    DeviceSlotInitialize=23,
    DeviceSlotInitializeScratchpadBuffers=24,
    DeviceSlotSetDeviceContext=25,
    DeviceSlotClearDeviceContext=26,
    DeviceSlotQueryInfoFromSlotContext=27,
    DeviceSlotQueryInfoFromEndpointContext=28,
    UsbDeviceCreate=29,
    UsbDeviceDestroy=30,
    UsbDeviceRingDoorbell=31,
    EndpointCreate=32,
    EndpointDestroy=33,
    StreamContextArrayCreate=34,
    StreamContextArrayGet=35,
    StreamContextArraySet=36,
    StreamContextArrayDestroy=37,
    TransferRingCreate=38,
    TransferRingAllocateSegments=39,
    TransferRingFreeSegments=40,
    TransferRingInitializeSegment=41,
    TransferRingStageComplete=42,
    TransferRingAddTRBRange=43,
    TrustletOpCodeMax=44
};

struct _TRUSTLET_REQUEST_HEADER// Size=0x28 (Id=664)
{
    struct _GUID ActivityId;// Offset=0x0 Size=0x10
    unsigned long OutstandingRequestsAtSendTime;// Offset=0x10 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * TargetObjectHandle;// Offset=0x18 Size=0x8
    enum _TRUSTLET_OPCODE OpCode;// Offset=0x20 Size=0x4
};
