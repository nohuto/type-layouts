struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CRASHDUMP_BUFFER_DATA// Size=0x18 (Id=560)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned char * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
};

struct _SLOT_CONTEXT32// Size=0x20 (Id=465)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long RouteString:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long Speed:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long MultiTT:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Hub:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long ContextEntries:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
        unsigned long MaxExitLatency:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long RootHubPortNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long NumberOfPorts:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long TTHubSlotId:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long TTPortNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long TTThinkTime:2;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long Reserved1:4;// Offset=0x8 Size=0x4 BitOffset=0x12 BitSize=0x4
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long UsbDeviceAddress:8;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved2:19;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x13
        unsigned long SlotState:5;// Offset=0xc Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long Reserved3[4];// Offset=0x10 Size=0x10
};

struct _CRASHDUMP_USBDEVICE_DATA// Size=0x178 (Id=561)
{
    void * DumperHandle;// Offset=0x0 Size=0x8
    void * RegisterHandle;// Offset=0x8 Size=0x8
    void * CommandHandle;// Offset=0x10 Size=0x8
    void * UsbDeviceHandle;// Offset=0x18 Size=0x8
    struct _CRASHDUMP_BUFFER_DATA DeviceContextBuffer;// Offset=0x20 Size=0x18
    unsigned char SlotId;// Offset=0x38 Size=0x1
    void * OutputDeviceContext;// Offset=0x40 Size=0x8
    struct _SLOT_CONTEXT32 * OutputSlotContext;// Offset=0x48 Size=0x8
    struct _SLOT_CONTEXT32 SlotContext;// Offset=0x50 Size=0x20
    void * EndpointHandle[32];// Offset=0x70 Size=0x100
    unsigned char IsHub;// Offset=0x170 Size=0x1
    unsigned char ConfigurationId;// Offset=0x171 Size=0x1
    unsigned char InterfaceId;// Offset=0x172 Size=0x1
    unsigned char AlternateSettingId;// Offset=0x173 Size=0x1
    unsigned long PortPathDepth;// Offset=0x174 Size=0x4
};
