struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _UNICODE_STRING// Size=0x10 (Id=74)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _REFERENCE// Size=0x10 (Id=537)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned short ReferenceCount;// Offset=0x8 Size=0x2
    unsigned char Closing;// Offset=0xa Size=0x1
};

struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=810)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER * );
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER & );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER * );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER & );
};

union _ULARGE_INTEGER// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=14090)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        unsigned long HighPart;// Offset=0x4 Size=0x4
    };
    struct _ULARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1406)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
    void _KTIMER(struct _KTIMER * );
    void _KTIMER(struct _KTIMER & );
    struct _KTIMER & operator=(struct _KTIMER * );
    struct _KTIMER & operator=(struct _KTIMER & );
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=30)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=90)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
    void _KDPC(struct _KDPC * );
    void _KDPC(struct _KDPC & );
    struct _KDPC & operator=(struct _KDPC * );
    struct _KDPC & operator=(struct _KDPC & );
};

struct _NDIS_TIMER// Size=0x80 (Id=538)
{
    struct _KTIMER Timer;// Offset=0x0 Size=0x40
    struct _KDPC Dpc;// Offset=0x40 Size=0x40
    void _NDIS_TIMER(struct _NDIS_TIMER * );
    void _NDIS_TIMER(struct _NDIS_TIMER & );
    struct _NDIS_TIMER & operator=(struct _NDIS_TIMER * );
    struct _NDIS_TIMER & operator=(struct _NDIS_TIMER & );
};

enum _NET_IF_MEDIA_CONNECT_STATE
{
    MediaConnectStateUnknown=0,
    MediaConnectStateConnected=1,
    MediaConnectStateDisconnected=2
};

enum _NET_IF_MEDIA_DUPLEX_STATE
{
    MediaDuplexStateUnknown=0,
    MediaDuplexStateHalf=1,
    MediaDuplexStateFull=2
};

enum _NDIS_MEDIUM
{
    NdisMedium802_3=0,
    NdisMedium802_5=1,
    NdisMediumFddi=2,
    NdisMediumWan=3,
    NdisMediumLocalTalk=4,
    NdisMediumDix=5,
    NdisMediumArcnetRaw=6,
    NdisMediumArcnet878_2=7,
    NdisMediumAtm=8,
    NdisMediumWirelessWan=9,
    NdisMediumIrda=10,
    NdisMediumBpc=11,
    NdisMediumCoWan=12,
    NdisMedium1394=13,
    NdisMediumInfiniBand=14,
    NdisMediumTunnel=15,
    NdisMediumNative802_11=16,
    NdisMediumLoopback=17,
    NdisMediumWiMAX=18,
    NdisMediumIP=19,
    NdisMediumMax=20
};

enum _NDIS_INTERFACE_TYPE
{
    NdisInterfaceInternal=0,
    NdisInterfaceIsa=1,
    NdisInterfaceEisa=2,
    NdisInterfaceMca=3,
    NdisInterfaceTurboChannel=4,
    NdisInterfacePci=5,
    NdisInterfacePcMcia=8,
    NdisInterfaceCBus=9,
    NdisInterfaceMPIBus=10,
    NdisInterfaceMPSABus=11,
    NdisInterfaceProcessorInternal=12,
    NdisInterfaceInternalPowerBus=13,
    NdisInterfacePNPISABus=14,
    NdisInterfacePNPBus=15,
    NdisInterfaceUSB=16,
    NdisInterfaceIrda=17,
    NdisInterface1394=18,
    NdisMaximumInterfaceType=19
};

enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
    NdisPauseFunctionsUnsupported=0,
    NdisPauseFunctionsSendOnly=1,
    NdisPauseFunctionsReceiveOnly=2,
    NdisPauseFunctionsSendAndReceive=3,
    NdisPauseFunctionsUnknown=4
};

enum _NDIS_DEVICE_POWER_STATE
{
    NdisDeviceStateUnspecified=0,
    NdisDeviceStateD0=1,
    NdisDeviceStateD1=2,
    NdisDeviceStateD2=3,
    NdisDeviceStateD3=4,
    NdisDeviceStateMaximum=5
};

struct _NDIS_PM_WAKE_UP_CAPABILITIES// Size=0xc (Id=945)
{
    enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;// Offset=0x0 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;// Offset=0x4 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;// Offset=0x8 Size=0x4
};

struct _NDIS_PNP_CAPABILITIES// Size=0x10 (Id=540)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    struct _NDIS_PM_WAKE_UP_CAPABILITIES WakeUpCapabilities;// Offset=0x4 Size=0xc
};

struct _NDIS_PM_CAPABILITIES// Size=0x3c (Id=542)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long SupportedWoLPacketPatterns;// Offset=0x8 Size=0x4
    unsigned long NumTotalWoLPatterns;// Offset=0xc Size=0x4
    unsigned long MaxWoLPatternSize;// Offset=0x10 Size=0x4
    unsigned long MaxWoLPatternOffset;// Offset=0x14 Size=0x4
    unsigned long MaxWoLPacketSaveBuffer;// Offset=0x18 Size=0x4
    unsigned long SupportedProtocolOffloads;// Offset=0x1c Size=0x4
    unsigned long NumArpOffloadIPv4Addresses;// Offset=0x20 Size=0x4
    unsigned long NumNSOffloadIPv6Addresses;// Offset=0x24 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;// Offset=0x28 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;// Offset=0x2c Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;// Offset=0x30 Size=0x4
    unsigned long SupportedWakeUpEvents;// Offset=0x34 Size=0x4
    unsigned long MediaSpecificWakeUpEvents;// Offset=0x38 Size=0x4
};

struct _NDIS_PM_PARAMETERS// Size=0x14 (Id=543)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long EnabledWoLPacketPatterns;// Offset=0x4 Size=0x4
    unsigned long EnabledProtocolOffloads;// Offset=0x8 Size=0x4
    unsigned long WakeUpFlags;// Offset=0xc Size=0x4
    unsigned long MediaSpecificWakeUpEvents;// Offset=0x10 Size=0x4
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

struct _DEVICE_CAPABILITIES// Size=0x40 (Id=544)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceD1:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceD2:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long LockSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EjectSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Removable:1;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DockDevice:1;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long UniqueID:1;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SilentInstall:1;// Offset=0x4 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long RawDeviceOK:1;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SurpriseRemovalOK:1;// Offset=0x4 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long WakeFromD0:1;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long WakeFromD1:1;// Offset=0x4 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long WakeFromD2:1;// Offset=0x4 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long WakeFromD3:1;// Offset=0x4 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long HardwareDisabled:1;// Offset=0x4 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NonDynamic:1;// Offset=0x4 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long WarmEjectSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long NoDisplayInUI:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long WakeFromInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SecureDevice:1;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ChildOfVgaEnabledBridge:1;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DecodeIoOnBoot:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Reserved:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
    };
    unsigned long Address;// Offset=0x8 Size=0x4
    unsigned long UINumber;// Offset=0xc Size=0x4
    enum _DEVICE_POWER_STATE DeviceState[7];// Offset=0x10 Size=0x1c
    enum _SYSTEM_POWER_STATE SystemWake;// Offset=0x2c Size=0x4
    enum _DEVICE_POWER_STATE DeviceWake;// Offset=0x30 Size=0x4
    unsigned long D1Latency;// Offset=0x34 Size=0x4
    unsigned long D2Latency;// Offset=0x38 Size=0x4
    unsigned long D3Latency;// Offset=0x3c Size=0x4
};

struct _KEVENT// Size=0x18 (Id=62)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    void _KEVENT(struct _KEVENT * );
    void _KEVENT(struct _KEVENT & );
    struct _KEVENT & operator=(struct _KEVENT * );
    struct _KEVENT & operator=(struct _KEVENT & );
};

union _LARGE_INTEGER// Size=0x8 (Id=365)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5303)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _NDIS_PNP_DEVICE_STATE
{
    NdisPnPDeviceAdded=0,
    NdisPnPDeviceStarted=1,
    NdisPnPDeviceQueryStopped=2,
    NdisPnPDeviceStopped=3,
    NdisPnPDeviceQueryRemoved=4,
    NdisPnPDeviceRemoved=5,
    NdisPnPDeviceSurpriseRemoved=6
};

enum _NDIS_WORK_ITEM_TYPE
{
    NdisWorkItemRequest=0,
    NdisWorkItemSend=1,
    NdisWorkItemReturnPackets=2,
    NdisWorkItemResetRequested=3,
    NdisWorkItemResetInProgress=4,
    NdisWorkItemReserved=5,
    NdisWorkItemMiniportCallback=6,
    NdisMaxWorkItems=7
};

struct _NDIS_MINIPORT_WORK_ITEM// Size=0x18 (Id=1315)
{
    struct _SINGLE_LIST_ENTRY Link;// Offset=0x0 Size=0x8
    enum _NDIS_WORK_ITEM_TYPE WorkItemType;// Offset=0x8 Size=0x4
    void * WorkItemContext;// Offset=0x10 Size=0x8
};

enum _NDIS_PHYSICAL_MEDIUM
{
    NdisPhysicalMediumUnspecified=0,
    NdisPhysicalMediumWirelessLan=1,
    NdisPhysicalMediumCableModem=2,
    NdisPhysicalMediumPhoneLine=3,
    NdisPhysicalMediumPowerLine=4,
    NdisPhysicalMediumDSL=5,
    NdisPhysicalMediumFibreChannel=6,
    NdisPhysicalMedium1394=7,
    NdisPhysicalMediumWirelessWan=8,
    NdisPhysicalMediumNative802_11=9,
    NdisPhysicalMediumBluetooth=10,
    NdisPhysicalMediumInfiniband=11,
    NdisPhysicalMediumWiMax=12,
    NdisPhysicalMediumUWB=13,
    NdisPhysicalMedium802_3=14,
    NdisPhysicalMedium802_5=15,
    NdisPhysicalMediumIrda=16,
    NdisPhysicalMediumWiredWAN=17,
    NdisPhysicalMediumWiredCoWan=18,
    NdisPhysicalMediumOther=19,
    NdisPhysicalMediumNative802_15_4=20,
    NdisPhysicalMediumMax=21
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

enum _NDIS_MINIPORT_STATE
{
    NdisMiniportUndefinedState=0,
    NdisMiniportHalted=1,
    NdisMiniportInitializing=2,
    NdisMiniportRestarting=3,
    NdisMiniportRunning=4,
    NdisMiniportPausing=5,
    NdisMiniportPaused=6
};

struct _KBUGCHECK_CALLBACK_RECORD// Size=0x40 (Id=545)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    void  ( * CallbackRoutine)(void * ,unsigned long );// Offset=0x10 Size=0x8
    void * Buffer;// Offset=0x18 Size=0x8
    unsigned long Length;// Offset=0x20 Size=0x4
    unsigned char * Component;// Offset=0x28 Size=0x8
    unsigned long long Checksum;// Offset=0x30 Size=0x8
    unsigned char State;// Offset=0x38 Size=0x1
};

struct _NDIS_MINIPORT_HANDLERS// Size=0xb8 (Id=546)
{
    void * RequestContext;// Offset=0x0 Size=0x8
    void * CancelSendContext;// Offset=0x8 Size=0x8
    void * IndicateNetBufferListsContext;// Offset=0x10 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * IndicateNetBufferListsTracker;// Offset=0x18 Size=0x8
    struct _NDIS_OBJECT_HEADER * IndicateNetBufferListsObject;// Offset=0x20 Size=0x8
    void * SaveIndicateNetBufferListsContext;// Offset=0x28 Size=0x8
    void * ReturnNetBufferListsContext;// Offset=0x30 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * ReturnNetBufferListsTracker;// Offset=0x38 Size=0x8
    struct _NDIS_OBJECT_HEADER * ReturnNetBufferListsObject;// Offset=0x40 Size=0x8
    void * SendNetBufferListsContext;// Offset=0x48 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * SendNetBufferListsTracker;// Offset=0x50 Size=0x8
    struct _NDIS_OBJECT_HEADER * SendNetBufferListsObject;// Offset=0x58 Size=0x8
    void * SendNetBufferListsCompleteContext;// Offset=0x60 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * SendNetBufferListsCompleteTracker;// Offset=0x68 Size=0x8
    struct _NDIS_OBJECT_HEADER * SendNetBufferListsCompleteObject;// Offset=0x70 Size=0x8
    void * RequestHandle;// Offset=0x78 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * CancelSendHandler)(void * ,void * );// Offset=0x80 Size=0x8
        void  ( * CancelSendPacketsHandler)(void * ,void * );// Offset=0x80 Size=0x8
    };
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x88 Size=0x8
    void  ( * IndicateNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x90 Size=0x8
    void  ( * SaveIndicateNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x98 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0xa0 Size=0x8
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0xa8 Size=0x8
    void * DirectRequestHandle;// Offset=0xb0 Size=0x8
};

enum _NDIS_SEND_PATH_TYPE
{
    NdisFilterSendPath=0,
    NdisNoFilterSendPath=1,
    Ndis5NoFilterSendPath=2,
    NdisFakeSendPath=3
};

struct _NDIS_RECEIVE_SCALE_CAPABILITIES// Size=0x14 (Id=340)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long CapabilitiesFlags;// Offset=0x4 Size=0x4
    unsigned long NumberOfInterruptMessages;// Offset=0x8 Size=0x4
    unsigned long NumberOfReceiveQueues;// Offset=0xc Size=0x4
    unsigned short NumberOfIndirectionTableEntries;// Offset=0x10 Size=0x2
};

struct _NDIS_WORK_ITEM// Size=0x50 (Id=547)
{
    void * Context;// Offset=0x0 Size=0x8
    void  ( * Routine)(struct _NDIS_WORK_ITEM * ,void * );// Offset=0x8 Size=0x8
    unsigned char WrapperReserved[64];// Offset=0x10 Size=0x40
};

enum _NET_IF_ACCESS_TYPE
{
    NET_IF_ACCESS_LOOPBACK=1,
    NET_IF_ACCESS_BROADCAST=2,
    NET_IF_ACCESS_POINT_TO_POINT=3,
    NET_IF_ACCESS_POINT_TO_MULTI_POINT=4,
    NET_IF_ACCESS_MAXIMUM=5
};

enum _NET_IF_CONNECTION_TYPE
{
    NET_IF_CONNECTION_DEDICATED=1,
    NET_IF_CONNECTION_PASSIVE=2,
    NET_IF_CONNECTION_DEMAND=3,
    NET_IF_CONNECTION_MAXIMUM=4
};

struct _NDIS_RESTART_GENERAL_ATTRIBUTES// Size=0x58 (Id=349)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long MtuSize;// Offset=0x4 Size=0x4
    unsigned long long MaxXmitLinkSpeed;// Offset=0x8 Size=0x8
    unsigned long long MaxRcvLinkSpeed;// Offset=0x10 Size=0x8
    unsigned long LookaheadSize;// Offset=0x18 Size=0x4
    unsigned long MacOptions;// Offset=0x1c Size=0x4
    unsigned long SupportedPacketFilters;// Offset=0x20 Size=0x4
    unsigned long MaxMulticastListSize;// Offset=0x24 Size=0x4
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES * RecvScaleCapabilities;// Offset=0x28 Size=0x8
    enum _NET_IF_ACCESS_TYPE AccessType;// Offset=0x30 Size=0x4
    unsigned long Flags;// Offset=0x34 Size=0x4
    enum _NET_IF_CONNECTION_TYPE ConnectionType;// Offset=0x38 Size=0x4
    unsigned long SupportedStatistics;// Offset=0x3c Size=0x4
    unsigned long DataBackFillSize;// Offset=0x40 Size=0x4
    unsigned long ContextBackFillSize;// Offset=0x44 Size=0x4
    unsigned long * SupportedOidList;// Offset=0x48 Size=0x8
    unsigned long SupportedOidListLength;// Offset=0x50 Size=0x4
    unsigned long MaxLookaheadSizeAccessed;// Offset=0x54 Size=0x4
};

enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
    PeriodicReceivesOff=0,
    PeriodicReceivesOn=1,
    PeriodicReceivesBlocked=2
};

struct _NDIS_M_PERIODIC_RECEIVES// Size=0x90 (Id=549)
{
    struct _NDIS_MINIPORT_BLOCK * NextMiniportBlock;// Offset=0x0 Size=0x8
    enum _NDIS_M_PERIODIC_RECEIVE_STATE State;// Offset=0x8 Size=0x4
    unsigned long long SpinLock;// Offset=0x10 Size=0x8
    void * LockThread;// Offset=0x18 Size=0x8
    unsigned long LockDbg;// Offset=0x20 Size=0x4
    long NumMQueuedNbls;// Offset=0x24 Size=0x4
    long NumNblsDequeued;// Offset=0x28 Size=0x4
    struct _NET_BUFFER_LIST * QueuedHead;// Offset=0x30 Size=0x8
    struct _NET_BUFFER_LIST * QueuedTail;// Offset=0x38 Size=0x8
    unsigned long BoundToIP;// Offset=0x40 Size=0x4
    unsigned char Paused;// Offset=0x44 Size=0x1
    long NblsAllocated;// Offset=0x48 Size=0x4
    unsigned long TrackingQueued;// Offset=0x4c Size=0x4
    unsigned long TrackingDequeued;// Offset=0x50 Size=0x4
    unsigned long TrackingResources;// Offset=0x54 Size=0x4
    unsigned long TrackingPending;// Offset=0x58 Size=0x4
    unsigned long TrackingIndicated;// Offset=0x5c Size=0x4
    unsigned long TrackingEmptied;// Offset=0x60 Size=0x4
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x68 Size=0x20
    long WorkItemQueued;// Offset=0x88 Size=0x4
};

enum _NDIS_PORT_CONTROL_STATE
{
    NdisPortControlStateUnknown=0,
    NdisPortControlStateControlled=1,
    NdisPortControlStateUncontrolled=2
};

enum _NDIS_PORT_AUTHORIZATION_STATE
{
    NdisPortAuthorizationUnknown=0,
    NdisPortAuthorized=1,
    NdisPortUnauthorized=2,
    NdisPortReauthorizing=3
};

struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES// Size=0x34 (Id=550)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned int DeviceType;// Offset=0x4 Size=0x4
    unsigned int CurrentSpeedAndMode;// Offset=0x8 Size=0x4
    unsigned int CurrentPayloadSize;// Offset=0xc Size=0x4
    unsigned int MaxPayloadSize;// Offset=0x10 Size=0x4
    unsigned int MaxReadRequestSize;// Offset=0x14 Size=0x4
    unsigned int CurrentLinkSpeed;// Offset=0x18 Size=0x4
    unsigned int CurrentLinkWidth;// Offset=0x1c Size=0x4
    unsigned int MaxLinkSpeed;// Offset=0x20 Size=0x4
    unsigned int MaxLinkWidth;// Offset=0x24 Size=0x4
    unsigned int PciExpressVersion;// Offset=0x28 Size=0x4
    unsigned int InterruptType;// Offset=0x2c Size=0x4
    unsigned int MaxInterruptMessages;// Offset=0x30 Size=0x4
};

struct _NDIS_MINIPORT_OFFLOAD_REG// Size=0x4 (Id=553)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IPv4XSumTxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long IPv4XSumRxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TCPv4XSumTxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long TCPv4XSumRxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long UDPv4XSumTxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long UDPv4XSumRxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long TCPv6XSumTxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long TCPv6XSumRxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long UDPv6XSumTxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long UDPv6XSumRxDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long LsoV1IPv4Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long LsoV2IPv4Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long LsoV2IPv6Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long IPsecAHDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long IPsecESPDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long TCPv4ConnectionOffloadDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long TCPv6ConnectionOffloadDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long ReadRegistry:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long IPsecV2AHDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long IPsecV2ESPDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long IPsecV2IPv4AHDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long IPsecV2IPv4ESPDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long IPSecV2IPv6Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long RscIPv4Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long RscIPv6Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long EncapsulatedPacketTaskOffloadDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long EncapsulatedPacketTaskOffloadNvgreDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long EncapsulatedPacketTaskOffloadVxlanDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

enum _INTERFACE_TYPE
{
    InterfaceTypeUndefined=-1,
    Internal=0,
    Isa=1,
    Eisa=2,
    MicroChannel=3,
    TurboChannel=4,
    PCIBus=5,
    VMEBus=6,
    NuBus=7,
    PCMCIABus=8,
    CBus=9,
    MPIBus=10,
    MPSABus=11,
    ProcessorInternal=12,
    InternalPowerBus=13,
    PNPISABus=14,
    PNPBus=15,
    Vmcs=16,
    ACPIBus=17,
    MaximumInterfaceType=18
};

struct _NDIS_EVENT// Size=0x18 (Id=555)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    void _NDIS_EVENT(struct _NDIS_EVENT * );
    void _NDIS_EVENT(struct _NDIS_EVENT & );
    struct _NDIS_EVENT & operator=(struct _NDIS_EVENT * );
    struct _NDIS_EVENT & operator=(struct _NDIS_EVENT & );
};

struct _NDIS_PM_ADMIN_CONFIG// Size=0x4 (Id=556)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long WakeOnPattern:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long WakeOnMagicPacket:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long DeviceSleepOnDisconnect:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long PMARPOffload:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long PMNSOffload:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long PMWiFiRekeyOffload:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long SelectiveSuspend:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
            unsigned long NicAutoPowerSaver:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _KSEMAPHORE// Size=0x20 (Id=557)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    long Limit;// Offset=0x18 Size=0x4
    void _KSEMAPHORE(struct _KSEMAPHORE * );
    void _KSEMAPHORE(struct _KSEMAPHORE & );
    struct _KSEMAPHORE & operator=(struct _KSEMAPHORE * );
    struct _KSEMAPHORE & operator=(struct _KSEMAPHORE & );
};

struct _GUID// Size=0x10 (Id=534)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _NET_LUID_LH// Size=0x8 (Id=408)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=12676)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

enum _NET_IF_ADMIN_STATUS
{
    NET_IF_ADMIN_STATUS_UP=1,
    NET_IF_ADMIN_STATUS_DOWN=2,
    NET_IF_ADMIN_STATUS_TESTING=3
};

enum _NET_IF_OPER_STATUS
{
    NET_IF_OPER_STATUS_UP=1,
    NET_IF_OPER_STATUS_DOWN=2,
    NET_IF_OPER_STATUS_TESTING=3,
    NET_IF_OPER_STATUS_UNKNOWN=4,
    NET_IF_OPER_STATUS_DORMANT=5,
    NET_IF_OPER_STATUS_NOT_PRESENT=6,
    NET_IF_OPER_STATUS_LOWER_LAYER_DOWN=7
};

struct _IO_REMOVE_LOCK_COMMON_BLOCK// Size=0x20 (Id=838)
{
    unsigned char Removed;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    long IoCount;// Offset=0x4 Size=0x4
    struct _KEVENT RemoveEvent;// Offset=0x8 Size=0x18
    void _IO_REMOVE_LOCK_COMMON_BLOCK(struct _IO_REMOVE_LOCK_COMMON_BLOCK * );
    void _IO_REMOVE_LOCK_COMMON_BLOCK(struct _IO_REMOVE_LOCK_COMMON_BLOCK & );
    struct _IO_REMOVE_LOCK_COMMON_BLOCK & operator=(struct _IO_REMOVE_LOCK_COMMON_BLOCK * );
    struct _IO_REMOVE_LOCK_COMMON_BLOCK & operator=(struct _IO_REMOVE_LOCK_COMMON_BLOCK & );
};

struct _IO_REMOVE_LOCK// Size=0x20 (Id=560)
{
    struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;// Offset=0x0 Size=0x20
    void _IO_REMOVE_LOCK(struct _IO_REMOVE_LOCK * );
    void _IO_REMOVE_LOCK(struct _IO_REMOVE_LOCK & );
    struct _IO_REMOVE_LOCK & operator=(struct _IO_REMOVE_LOCK * );
    struct _IO_REMOVE_LOCK & operator=(struct _IO_REMOVE_LOCK & );
};

enum _NDIS_MINIPORT_EVENT
{
    NdisMEvent_Unknown=0,
    NdisMEventDx_SystemSleep=1,
    NdisMEventDx_NicQuiet=2,
    NdisMEventDx_SSIdle=3,
    NdisMEventDx_D3DTimeout=4,
    NdisMEventD0_SystemResume=5,
    NdisMEventD0_NicActive=6,
    NdisMEventD0_AoAcWake=7,
    NdisMEventD0_SSResume=8,
    NdisMEventD0_D3DCancel=9,
    NdisMEventD0_D3DWake=10,
    NdisMEventD0_D3DResume=11,
    NdisMEventD0_Complete=12,
    NdisMEventD0_SSComplete=13,
    NdisMEventDx_Complete=14,
    NdisMEventDx_SSComplete=15,
    NdisMEvent_SSCancelIdle=16,
    NdisMEvent_SSIdleComplete=17,
    NdisMEvent_SSIdleReq=18,
    NdisMEvent_SSIdleConfirm=19,
    NdisMEventD0_AoAcSurpriseWake=20,
    NdisMEvent_DeviceAdded=31,
    NdisMEvent_DeviceStart=32,
    NdisMEvent_DeviceQueryRemove=33,
    NdisMEvent_DeviceCancelRemove=34,
    NdisMEvent_DeviceRemove=35,
    NdisMEvent_DeviceSurpriseRemoval=36,
    NdisMEvent_DeviceQueryStop=37,
    NdisMEvent_DeviceCancelStop=38,
    NdisMEvent_DeviceStop=39,
    NdisMEvent_MiniportInitialized=51,
    NdisMEvent_MiniportHalted=52,
    NdisMEvent_MiniportPaused=53,
    NdisMEvent_MiniportRestarted=54,
    NdisMEvent_MiniportPmInitialized=55,
    NdisMEventErr_Min=70,
    NdisMEventErr_UserRequested=70,
    NdisMEventErr_MiniportRequested=71,
    NdisMEventErr_FailedIMInitDevice=72,
    NdisMEventErr_FailedRestart=73,
    NdisMEventErr_FailedPowerD0=74,
    NdisMEventErr_FailedPowerDx=75,
    NdisMEventErr_UninstalledByUsermode=76,
    NdisMEventErr_Max=76
};

struct _PROCESSOR_NUMBER// Size=0x4 (Id=561)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

enum _NDIS_RSS_PROFILE
{
    NdisRssProfileClosest=1,
    NdisRssProfileClosestStatic=2,
    NdisRssProfileNuma=3,
    NdisRssProfileNumaStatic=4,
    NdisRssProfileConservative=5,
    NdisRssProfileMaximum=6
};

struct _ULONG_REFERENCE// Size=0x10 (Id=562)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned long ReferenceCount;// Offset=0x8 Size=0x4
    unsigned char Closing;// Offset=0xc Size=0x1
};

enum _NDIS_PM_WAKE_REASON_TYPE
{
    NdisWakeReasonUnspecified=0,
    NdisWakeReasonPacket=1,
    NdisWakeReasonMediaDisconnect=2,
    NdisWakeReasonMediaConnect=3,
    NdisWakeReasonWlanNLODiscovery=4096,
    NdisWakeReasonWlanAPAssociationLost=4097,
    NdisWakeReasonWlanGTKHandshakeError=4098,
    NdisWakeReasonWlan4WayHandshakeRequest=4099,
    NdisWakeReasonWwanRegisterState=8192,
    NdisWakeReasonWwanSMSReceive=8193,
    NdisWakeReasonWwanUSSDReceive=8194
};

struct _NDIS_D0_SIGNAL_WORK_ITEM// Size=0x58 (Id=563)
{
    struct _NDIS_WORK_ITEM WorkItem;// Offset=0x0 Size=0x50
    long CompletionStatus;// Offset=0x50 Size=0x4
    unsigned char Scheduled;// Offset=0x54 Size=0x1
};

struct _VPCI_INVALIDATE_BLOCK_OUTPUT// Size=0x8 (Id=564)
{
    unsigned long long BlockMask;// Offset=0x0 Size=0x8
};

struct _LUID// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _IF_PHYSICAL_ADDRESS_LH// Size=0x22 (Id=570)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Address[32];// Offset=0x2 Size=0x20
};

enum _PKTMON_PACKET_TYPE
{
    PktMonPayload_Unknown=0,
    PktMonPayload_Ethernet=1,
    PktMonPayload_WiFi=2,
    PktMonPayload_IP=3,
    PktMonPayload_HTTP=4,
    PktMonPayload_TCP=5,
    PktMonPayload_UDP=6,
    PktMonPayload_ARP=7,
    PktMonPayload_ICMP=8,
    PktMonPayload_ESP=9,
    PktMonPayload_AH=10,
    PktMonPayload_L4Payload=11
};

struct _PKTMON_COMPONENT_CONTEXT// Size=0x38 (Id=572)
{
    struct _LIST_ENTRY ListLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY EdgeList;// Offset=0x10 Size=0x10
    long EdgeCount;// Offset=0x20 Size=0x4
    void * CompHandle;// Offset=0x28 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        int FlowEnabled:1;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1
        int DropEnabled:1;// Offset=0x34 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _PKTMON_EDGE_CONTEXT// Size=0x28 (Id=573)
{
    struct _LIST_ENTRY ListLink;// Offset=0x0 Size=0x10
    void * EdgeHandle;// Offset=0x10 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT * CompContext;// Offset=0x18 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x20 Size=0x4
};

struct _NDIS_MINIPORT_BLOCK// Size=0x1748 (Id=385)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * NextMiniport;// Offset=0x8 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * BaseMiniport;// Offset=0x10 Size=0x8
    void * MiniportAdapterContext;// Offset=0x18 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _UNICODE_STRING Reserved4;// Offset=0x20 Size=0x10
        unsigned char MajorNdisVersion;// Offset=0x20 Size=0x1
    };
    unsigned char MinorNdisVersion;// Offset=0x21 Size=0x1
    struct _NDIS_PCW_DATA_BLOCK * PcwDataBlock;// Offset=0x28 Size=0x8
    union // Size=0x4 (Id=0)
    {
        long PcwDatapathEventMask;// Offset=0x30 Size=0x4
        void * Reserved28;// Offset=0x30 Size=0x8
    };
    struct _NDIS_OPEN_BLOCK * OpenQueue;// Offset=0x38 Size=0x8
    struct _REFERENCE ShortRef;// Offset=0x40 Size=0x10
    union // Size=0x4 (Id=0)
    {
        long PcwDatapathCycleMask;// Offset=0x50 Size=0x4
        void * Reserved29;// Offset=0x50 Size=0x8
    };
    unsigned char LinkStateIndicationFlags;// Offset=0x58 Size=0x1
    unsigned char LockAcquired;// Offset=0x59 Size=0x1
    unsigned char PmodeOpens;// Offset=0x5a Size=0x1
    unsigned char LoopbackOpens;// Offset=0x5b Size=0x1
    unsigned long long Lock;// Offset=0x60 Size=0x8
    void * Reserved25;// Offset=0x68 Size=0x8
    struct _NDIS_MINIPORT_INTERRUPT * Interrupt;// Offset=0x70 Size=0x8
    unsigned long Flags;// Offset=0x78 Size=0x4
    unsigned long PnPFlags;// Offset=0x7c Size=0x4
    struct _LIST_ENTRY PacketList;// Offset=0x80 Size=0x10
    struct _NDIS_PACKET * FirstPendingPacket;// Offset=0x90 Size=0x8
    struct _NDIS_PACKET * ReturnPacketsQueue;// Offset=0x98 Size=0x8
    unsigned long RequestBuffer;// Offset=0xa0 Size=0x4
    void * Reserved26;// Offset=0xa8 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * PrimaryMiniport;// Offset=0xb0 Size=0x8
    void  ( * NextCancelSendNetBufferListsHandler)(void * ,void * );// Offset=0xb8 Size=0x8
    void * OidContext;// Offset=0xc0 Size=0x8
    unsigned long SupportedOidListLength;// Offset=0xc8 Size=0x4
    struct _CM_RESOURCE_LIST * Resources;// Offset=0xd0 Size=0x8
    struct _NDIS_TIMER WakeUpDpcTimer;// Offset=0xd8 Size=0x80
    union // Size=0x10 (Id=0)
    {
        struct _UNICODE_STRING Reserved20;// Offset=0x158 Size=0x10
        enum _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState;// Offset=0x158 Size=0x4
    };
    enum _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState;// Offset=0x15c Size=0x4
    struct _UNICODE_STRING SymbolicLinkName;// Offset=0x168 Size=0x10
    unsigned long CheckForHangSeconds;// Offset=0x178 Size=0x4
    unsigned short CFHangTicks;// Offset=0x17c Size=0x2
    unsigned short CFHangCurrentTick;// Offset=0x17e Size=0x2
    int ResetStatus;// Offset=0x180 Size=0x4
    struct _NDIS_OPEN_BLOCK * ResetOpen;// Offset=0x188 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _X_FILTER * EthDB;// Offset=0x190 Size=0x8
        struct _X_FILTER * NullDB;// Offset=0x190 Size=0x8
    };
    void * Unused1;// Offset=0x198 Size=0x8
    void * Unused2;// Offset=0x1a0 Size=0x8
    void * Unused3;// Offset=0x1a8 Size=0x8
    void  ( * PacketIndicateHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x1b0 Size=0x8
    void  ( * SendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0x1b8 Size=0x8
    void  ( * SendResourcesHandler)(void * );// Offset=0x1c0 Size=0x8
    void  ( * ResetCompleteHandler)(void * ,int ,unsigned char );// Offset=0x1c8 Size=0x8
    enum _NDIS_MEDIUM MediaType;// Offset=0x1d0 Size=0x4
    unsigned long AutoNegotiationFlags;// Offset=0x1d4 Size=0x4
    enum _NDIS_INTERFACE_TYPE Reserved5;// Offset=0x1d8 Size=0x4
    enum _NDIS_INTERFACE_TYPE AdapterType;// Offset=0x1dc Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _DEVICE_OBJECT * Reserved6;// Offset=0x1e0 Size=0x8
        enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x1e0 Size=0x4
    };
    union // Size=0x8 (Id=0)
    {
        struct _DEVICE_OBJECT * Reserved7;// Offset=0x1e8 Size=0x8
        enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x1e8 Size=0x4
    };
    unsigned long * SupportedOidList;// Offset=0x1f0 Size=0x8
    struct _NDIS_SG_DMA_BLOCK * MiniportSGDmaBlock;// Offset=0x1f8 Size=0x8
    struct _NDIS_AF_LIST * CallMgrAfList;// Offset=0x200 Size=0x8
    void * MiniportThread;// Offset=0x208 Size=0x8
    void * SetInfoBuf;// Offset=0x210 Size=0x8
    unsigned short SetInfoBufLen;// Offset=0x218 Size=0x2
    unsigned short MaxSendPackets;// Offset=0x21a Size=0x2
    int FakeStatus;// Offset=0x21c Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * Reserved24;// Offset=0x220 Size=0x8
        void * GlobalTriageBlock;// Offset=0x220 Size=0x8
    };
    struct _NDIS_RECEIVE_SCALE_PARAMETERS * CombinedNdisRSSParameters;// Offset=0x228 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _NDIS_MINIPORT_TIMER * TimerQueue;// Offset=0x230 Size=0x8
        struct _NDIS_TIMER_ENTRY * TimerObjectQueue;// Offset=0x230 Size=0x8
    };
    unsigned int MacOptions;// Offset=0x238 Size=0x4
    struct _NDIS_REQUEST * PendingRequest;// Offset=0x240 Size=0x8
    unsigned int MaximumLongAddresses;// Offset=0x248 Size=0x4
    unsigned int Reserved27;// Offset=0x24c Size=0x4
    unsigned int MiniportCurrentLookahead;// Offset=0x250 Size=0x4
    unsigned int MiniportMaximumLookahead;// Offset=0x254 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Reserved1;// Offset=0x258 Size=0x8
        struct _X_FILTER * NullMediaFilter;// Offset=0x258 Size=0x8
    };
    void  ( * DisableInterruptHandler)(void * );// Offset=0x260 Size=0x8
    void  ( * EnableInterruptHandler)(void * );// Offset=0x268 Size=0x8
    void  ( * SendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x270 Size=0x8
    unsigned char  ( * DeferredSendHandler)(struct _NDIS_MINIPORT_BLOCK * );// Offset=0x278 Size=0x8
    void  ( * EthRxIndicateHandler)(struct _X_FILTER * ,void * ,char * ,void * ,unsigned int ,void * ,unsigned int ,unsigned int );// Offset=0x280 Size=0x8
    void * Reserved30;// Offset=0x288 Size=0x8
    void  ( * NextSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x290 Size=0x8
    void  ( * EthRxCompleteHandler)(struct _X_FILTER * );// Offset=0x298 Size=0x8
    void * Reserved31;// Offset=0x2a0 Size=0x8
    void  ( * SavedNextSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x2a8 Size=0x8
    void  ( * StatusHandler)(void * ,int ,void * ,unsigned int );// Offset=0x2b0 Size=0x8
    void  ( * StatusCompleteHandler)(void * );// Offset=0x2b8 Size=0x8
    void  ( * TDCompleteHandler)(void * ,struct _NDIS_PACKET * ,int ,unsigned int );// Offset=0x2c0 Size=0x8
    void  ( * QueryCompleteHandler)(void * ,int );// Offset=0x2c8 Size=0x8
    void  ( * SetCompleteHandler)(void * ,int );// Offset=0x2d0 Size=0x8
    void  ( * WanSendCompleteHandler)(void * ,void * ,int );// Offset=0x2d8 Size=0x8
    void  ( * WanRcvHandler)(int * ,void * ,void * ,unsigned char * ,unsigned long );// Offset=0x2e0 Size=0x8
    void  ( * WanRcvCompleteHandler)(void * ,void * );// Offset=0x2e8 Size=0x8
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x2f0 Size=0x8
    struct _KEVENT * PnPEventLockEvent;// Offset=0x2f8 Size=0x8
    struct _NDIS_OBJECT_HEADER * MediaSpecificAttributes;// Offset=0x300 Size=0x8
    struct _IRP * PendingQueryPowerIrp;// Offset=0x308 Size=0x8
    struct _NDIS_INTERRUPT_BLOCK * InterruptEx;// Offset=0x310 Size=0x8
    unsigned long long XmitLinkSpeed;// Offset=0x318 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x320 Size=0x8
    enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;// Offset=0x328 Size=0x4
    enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions;// Offset=0x32c Size=0x4
    unsigned long MiniportAutoNegotiationFlags;// Offset=0x330 Size=0x4
    struct _SINGLE_LIST_ENTRY WorkQueue[7];// Offset=0x338 Size=0x38
    struct _SINGLE_LIST_ENTRY SingleWorkItems[6];// Offset=0x370 Size=0x30
    unsigned char SendFlags;// Offset=0x3a0 Size=0x1
    unsigned char MP6SupportPM;// Offset=0x3a1 Size=0x1
    unsigned char XState;// Offset=0x3a2 Size=0x1
    struct _NDIS_LOG * Log;// Offset=0x3a8 Size=0x8
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x3b0 Size=0x8
    struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x3b8 Size=0x8
    struct _SINGLE_LIST_ENTRY PatternList;// Offset=0x3c0 Size=0x8
    struct _SINGLE_LIST_ENTRY WOLPatternList;// Offset=0x3c8 Size=0x8
    struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;// Offset=0x3d0 Size=0x8
    struct _NDIS_PNP_CAPABILITIES PMCapabilities61;// Offset=0x3d8 Size=0x10
    struct _NDIS_PM_CAPABILITIES PMHardwareCapabilities;// Offset=0x3e8 Size=0x3c
    struct _NDIS_PM_CAPABILITIES PMAdvertisedCapabilities;// Offset=0x424 Size=0x3c
    struct _NDIS_PM_PARAMETERS PMCurrentParameters;// Offset=0x460 Size=0x14
    struct _NDIS_PM_PARAMETERS PMWmiParameters;// Offset=0x474 Size=0x14
    struct _DEVICE_CAPABILITIES OriginalDeviceCaps;// Offset=0x488 Size=0x40
    struct _DEVICE_CAPABILITIES DeviceCaps;// Offset=0x4c8 Size=0x40
    unsigned char S0WakeupSupported;// Offset=0x508 Size=0x1
    unsigned long WakeUpEnable;// Offset=0x50c Size=0x4
    struct _IRP * WaitWakeIrp;// Offset=0x510 Size=0x8
    struct _KEVENT WaitWakeIrpCompleted;// Offset=0x518 Size=0x18
    bool WaitWakeIoCompletionRoutineRan;// Offset=0x530 Size=0x1
    bool WaitWakeCancelInProgress;// Offset=0x531 Size=0x1
    bool WaitWakeCancelAttempted;// Offset=0x532 Size=0x1
    enum _SYSTEM_POWER_STATE WaitWakeSystemState;// Offset=0x534 Size=0x4
    union _LARGE_INTEGER VcIndex;// Offset=0x538 Size=0x8
    unsigned long long VcCountLock;// Offset=0x540 Size=0x8
    struct _LIST_ENTRY WmiEnabledVcs;// Offset=0x548 Size=0x10
    struct _NDIS_GUID * pNdisGuidMap;// Offset=0x558 Size=0x8
    struct _NDIS_GUID * pCustomGuidMap;// Offset=0x560 Size=0x8
    unsigned short VcCount;// Offset=0x568 Size=0x2
    unsigned short cNdisGuidMap;// Offset=0x56a Size=0x2
    unsigned short cCustomGuidMap;// Offset=0x56c Size=0x2
    struct _NDIS_TIMER MediaDisconnectTimer;// Offset=0x570 Size=0x80
    enum _NDIS_PNP_DEVICE_STATE PnPDeviceState;// Offset=0x5f0 Size=0x4
    enum _NDIS_PNP_DEVICE_STATE OldPnPDeviceState;// Offset=0x5f4 Size=0x4
    struct _KDPC DeferredDpc;// Offset=0x5f8 Size=0x40
    union _LARGE_INTEGER StartTicks;// Offset=0x638 Size=0x8
    struct _NDIS_PACKET ** IndicatedPacket;// Offset=0x640 Size=0x8
    struct _KEVENT * RemoveReadyEvent;// Offset=0x648 Size=0x8
    struct _KEVENT * AllRequestsCompletedEvent;// Offset=0x650 Size=0x8
    unsigned long InitTimeMs;// Offset=0x658 Size=0x4
    struct _NDIS_MINIPORT_WORK_ITEM WorkItemBuffer[6];// Offset=0x660 Size=0x90
    struct _OID_LIST * OidList;// Offset=0x6f0 Size=0x8
    unsigned short InternalResetCount;// Offset=0x6f8 Size=0x2
    unsigned short MiniportResetCount;// Offset=0x6fa Size=0x2
    unsigned short MediaSenseConnectCount;// Offset=0x6fc Size=0x2
    unsigned short MediaSenseDisconnectCount;// Offset=0x6fe Size=0x2
    struct _NDIS_PACKET ** xPackets;// Offset=0x700 Size=0x8
    unsigned long UserModeOpenReferences;// Offset=0x708 Size=0x4
    void  ( * WSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x710 Size=0x8
    unsigned long MiniportAttributes;// Offset=0x718 Size=0x4
    unsigned short NumOpens;// Offset=0x71c Size=0x2
    unsigned short CFHangXTicks;// Offset=0x71e Size=0x2
    unsigned long RequestCount;// Offset=0x720 Size=0x4
    unsigned long IndicatedPacketsCount;// Offset=0x724 Size=0x4
    enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;// Offset=0x728 Size=0x4
    enum _NDIS_MEDIUM MiniportMediaType;// Offset=0x72c Size=0x4
    enum _NDIS_MEDIUM DataLinkLayerType;// Offset=0x730 Size=0x4
    enum _NDIS_MEDIUM MpSpecifiedMediaType;// Offset=0x734 Size=0x4
    struct _NDIS_REQUEST * LastRequest;// Offset=0x738 Size=0x8
    void * FakeMac;// Offset=0x740 Size=0x8
    unsigned long LockDbg;// Offset=0x748 Size=0x4
    unsigned long LockDbgX;// Offset=0x74c Size=0x4
    void * LockThread;// Offset=0x750 Size=0x8
    unsigned long InfoFlags;// Offset=0x758 Size=0x4
    unsigned long long TimerQueueLock;// Offset=0x760 Size=0x8
    struct _KEVENT * ResetCompletedEvent;// Offset=0x768 Size=0x8
    void  ( * SavedPacketIndicateHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x770 Size=0x8
    long RegisteredInterrupts;// Offset=0x778 Size=0x4
    unsigned long SetOid;// Offset=0x77c Size=0x4
    struct _KEVENT CFHCompletedEvent;// Offset=0x780 Size=0x18
    struct _WORK_QUEUE_ITEM CFHWorkItem;// Offset=0x798 Size=0x20
    long CFHWorkItemQueued;// Offset=0x7b8 Size=0x4
    void * DeviceContext;// Offset=0x7c0 Size=0x8
    struct _NDIS_MINIPORT_RSS_PARAMETERS_CACHE * RssParametersBuffer;// Offset=0x7c8 Size=0x8
    unsigned char UsingMSIX;// Offset=0x7d0 Size=0x1
    unsigned char Miniport5InNdis6Mode;// Offset=0x7d1 Size=0x1
    unsigned char Miniport5HasNdis6Component;// Offset=0x7d2 Size=0x1
    unsigned char InitMode;// Offset=0x7d3 Size=0x1
    unsigned char InitModeNotNeededAnymore;// Offset=0x7d4 Size=0x1
    char MediaChangeFilters;// Offset=0x7d5 Size=0x1
    unsigned char CheckPacketFilters;// Offset=0x7d6 Size=0x1
    unsigned char ReceiveFilters;// Offset=0x7d7 Size=0x1
    unsigned long long RecvLock;// Offset=0x7d8 Size=0x8
    enum _NDIS_MINIPORT_STATE RecvState;// Offset=0x7e0 Size=0x4
    unsigned long OutstandingReceives;// Offset=0x7e4 Size=0x4
    void * MiniportRecvLockThread;// Offset=0x7e8 Size=0x8
    unsigned long RecvLockDbg;// Offset=0x7f0 Size=0x4
    void  ( * NextSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x7f8 Size=0x8
    void  ( * FinalSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x800 Size=0x8
    struct _NDIS_FILTER_BLOCK * LowestFilter;// Offset=0x808 Size=0x8
    struct _NDIS_FILTER_BLOCK * HighestFilter;// Offset=0x810 Size=0x8
    void * ShutdownContext;// Offset=0x818 Size=0x8
    void  ( * ShutdownHandler)(void * );// Offset=0x820 Size=0x8
    struct _KBUGCHECK_CALLBACK_RECORD BugcheckCallbackRecord;// Offset=0x828 Size=0x40
    void  ( * TopIndicateNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x868 Size=0x8
    void  ( * TopIndicateLoopbackNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x870 Size=0x8
    void  ( * Ndis5PacketIndicateHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x878 Size=0x8
    void  ( * MiniportReturnPacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x880 Size=0x8
    void * MiniportReturnPacketContext;// Offset=0x888 Size=0x8
    void  ( * SynchronousReturnPacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x890 Size=0x8
    void * SynchronousReturnPacketContext;// Offset=0x898 Size=0x8
    struct _LIST_ENTRY OidRequestList;// Offset=0x8a0 Size=0x10
    struct _NDIS_OID_REQUEST * PendingOidRequest;// Offset=0x8b0 Size=0x8
    struct _NDIS_OID_REQUEST * ProcessedOidRequest;// Offset=0x8b8 Size=0x8
    struct _NDIS_OID_REQUEST * HookedOidRequest;// Offset=0x8c0 Size=0x8
    void * NextCoOidRequestHandle;// Offset=0x8c8 Size=0x8
    unsigned long Ndis6ProtocolsBound;// Offset=0x8d0 Size=0x4
    unsigned long PmodeOpen6;// Offset=0x8d4 Size=0x4
    enum _NDIS_MINIPORT_STATE State;// Offset=0x8d8 Size=0x4
    struct _KEVENT * AsyncOpCompletionEvent;// Offset=0x8e0 Size=0x8
    int AsyncOpCompletionStatus;// Offset=0x8e8 Size=0x4
    unsigned long long MaxXmitLinkSpeed;// Offset=0x8f0 Size=0x8
    unsigned long long MaxRcvLinkSpeed;// Offset=0x8f8 Size=0x8
    unsigned long SupportedPacketFilters;// Offset=0x900 Size=0x4
    struct _NDIS_MINIPORT_HANDLERS NoFilter;// Offset=0x908 Size=0xb8
    struct _NDIS_MINIPORT_HANDLERS Next;// Offset=0x9c0 Size=0xb8
    unsigned char ReceivePathEnabled;// Offset=0xa78 Size=0x1
    unsigned char NormalTopReceive;// Offset=0xa79 Size=0x1
    enum _NDIS_SEND_PATH_TYPE SendPathType;// Offset=0xa7c Size=0x4
    enum _NDIS_SEND_PATH_TYPE SavedSendPathType;// Offset=0xa80 Size=0x4
    unsigned char SavedReceivePathEnabled;// Offset=0xa84 Size=0x1
    unsigned long TimestampFlags;// Offset=0xa88 Size=0x4
    unsigned long FilterPnPFlags;// Offset=0xa8c Size=0x4
    unsigned long SupportedStatistics;// Offset=0xa90 Size=0x4
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES RecvScaleCapabilities;// Offset=0xa94 Size=0x14
    struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES * GeneralAttributes;// Offset=0xaa8 Size=0x8
    struct _LIST_ENTRY PortList;// Offset=0xab0 Size=0x10
    unsigned char * AllocatedPortIndices;// Offset=0xac0 Size=0x8
    unsigned long AllocatedPortIndicesLength;// Offset=0xac8 Size=0x4
    unsigned long NumberOfPorts;// Offset=0xacc Size=0x4
    unsigned long NumberOfActivePorts;// Offset=0xad0 Size=0x4
    unsigned long long MiniportXmitLinkSpeed;// Offset=0xad8 Size=0x8
    unsigned long long MiniportRcvLinkSpeed;// Offset=0xae0 Size=0x8
    struct _NDIS_TIMER InitModeTimeoutTimer;// Offset=0xae8 Size=0x80
    struct _NDIS_WORK_ITEM InitModeTimeoutWorkItem;// Offset=0xb68 Size=0x50
    struct _KEVENT InitModeTimeoutTimerQueuedEvent;// Offset=0xbb8 Size=0x18
    unsigned long DataBackFillSize;// Offset=0xbd0 Size=0x4
    unsigned long ContextBackFillSize;// Offset=0xbd4 Size=0x4
    struct _NDIS_RESTART_GENERAL_ATTRIBUTES TopFilterRestartAttributes;// Offset=0xbd8 Size=0x58
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES TopRecvScaleCapabilities;// Offset=0xc30 Size=0x14
    unsigned long NsiOpenReferences;// Offset=0xc44 Size=0x4
    void * ProcessingOpen;// Offset=0xc48 Size=0x8
    struct _KEVENT * NsiRequestsCompletedEvent;// Offset=0xc50 Size=0x8
    enum _DEVICE_POWER_STATE QueryPowerDeviceState;// Offset=0xc58 Size=0x4
    unsigned char MinimumNdisMajorVersion;// Offset=0xc5c Size=0x1
    unsigned char MinimumNdisMinorVersion;// Offset=0xc5d Size=0x1
    struct _NDIS_MINIPORT_STATS * BottomIfStats;// Offset=0xc60 Size=0x8
    struct _NDIS_M_PERIODIC_RECEIVES PeriodicReceiveQueue;// Offset=0xc68 Size=0x90
    struct PNDIS_PER_PROCESSOR_SLOT__ * PeriodicReceivesNblCountIndex;// Offset=0xcf8 Size=0x8
    enum _NDIS_PORT_CONTROL_STATE DefaultSendControlState;// Offset=0xd00 Size=0x4
    enum _NDIS_PORT_CONTROL_STATE DefaultRcvControlState;// Offset=0xd04 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE DefaultSendAuthorizationState;// Offset=0xd08 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE DefaultRcvAuthorizationState;// Offset=0xd0c Size=0x4
    enum _NDIS_PORT_CONTROL_STATE DefaultPortSendControlState;// Offset=0xd10 Size=0x4
    enum _NDIS_PORT_CONTROL_STATE DefaultPortRcvControlState;// Offset=0xd14 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState;// Offset=0xd18 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState;// Offset=0xd1c Size=0x4
    struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES PciDeviceCustomProperties;// Offset=0xd20 Size=0x34
    void  ( * TopNdis5PacketIndicateHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xd58 Size=0x8
    unsigned long * ndisSupportedOidList;// Offset=0xd60 Size=0x8
    unsigned long ndisSupportedOidListLength;// Offset=0xd68 Size=0x4
    unsigned long MsiIntCount;// Offset=0xd6c Size=0x4
    struct _WORK_QUEUE_ITEM MiniportDpcWorkItem;// Offset=0xd70 Size=0x20
    unsigned long long InvalidFrames;// Offset=0xd90 Size=0x8
    long PagingPathCount;// Offset=0xd98 Size=0x4
    struct _LIST_ENTRY ReceiveQueueList;// Offset=0xda0 Size=0x10
    unsigned char * AllocatedQueueIndices;// Offset=0xdb0 Size=0x8
    unsigned long AllocatedQueueIndicesLength;// Offset=0xdb8 Size=0x4
    unsigned long NumReceiveQueues;// Offset=0xdbc Size=0x4
    struct _LIST_ENTRY ReceiveFilterList;// Offset=0xdc0 Size=0x10
    unsigned char * AllocatedReceiveFilterIndices;// Offset=0xdd0 Size=0x8
    unsigned long AllocatedReceiveFilterIndicesLength;// Offset=0xdd8 Size=0x4
    unsigned long NumReceiveFilters;// Offset=0xddc Size=0x4
    unsigned long EnabledReceiveFilterTypes;// Offset=0xde0 Size=0x4
    unsigned long EnabledReceiveQueueTypes;// Offset=0xde4 Size=0x4
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * ReceiveFilterHwCapabilities;// Offset=0xde8 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * ReceiveFilterCurrentCapabilities;// Offset=0xdf0 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * TopReceiveFilterCurrentCapabilities;// Offset=0xdf8 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * NicSwitchHwCapabilities;// Offset=0xe00 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * NicSwitchCurrentCapabilities;// Offset=0xe08 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * TopNicSwitchCurrentCapabilities;// Offset=0xe10 Size=0x8
    struct _LIST_ENTRY SharedMemoryBlockList;// Offset=0xe18 Size=0x10
    int  ( * AllocateSharedMemoryHandler)(void * ,struct _NDIS_SHARED_MEMORY_PARAMETERS * ,void ** );// Offset=0xe28 Size=0x8
    void  ( * FreeSharedMemoryHandler)(void * ,void * );// Offset=0xe30 Size=0x8
    void * AllocateSharedMemoryContext;// Offset=0xe38 Size=0x8
    struct PCI_MSI_CAPABILITY MsiCaps;// Offset=0xe40 Size=0x18
    struct PCI_MSIX_CAPABILITY MsiXCaps;// Offset=0xe58 Size=0xc
    unsigned long long NumberOfIndirectionTableChanges;// Offset=0xe68 Size=0x8
    unsigned int PciDeviceSriovSupport;// Offset=0xe70 Size=0x4
    union // Size=0x1 (Id=0)
    {
        unsigned char BeginSavedFields;// Offset=0xe74 Size=0x1
        unsigned long NumUserOpens;// Offset=0xe74 Size=0x4
    };
    struct _NDIS_MINIPORT_OFFLOAD_REG OffloadRegistry;// Offset=0xe78 Size=0x4
    unsigned short MediaDisconnectTimeOut;// Offset=0xe7c Size=0x2
    unsigned short SGMapRegistersNeeded;// Offset=0xe7e Size=0x2
    unsigned long DriverVerifyFlags;// Offset=0xe80 Size=0x4
    unsigned long  ( * SetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0xe88 Size=0x8
    unsigned long  ( * GetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0xe90 Size=0x8
    void * BusDataContext;// Offset=0xe98 Size=0x8
    enum _INTERFACE_TYPE BusType;// Offset=0xea0 Size=0x4
    unsigned long BusNumber;// Offset=0xea4 Size=0x4
    unsigned long SlotNumber;// Offset=0xea8 Size=0x4
    struct _NDIS_EVENT OpenReadyEvent;// Offset=0xeb0 Size=0x18
    unsigned long NumAdminOpens;// Offset=0xec8 Size=0x4
    struct _NDIS_M_DRIVER_BLOCK * DriverHandle;// Offset=0xed0 Size=0x8
    struct _NDIS_BIND_PATHS * BindPaths;// Offset=0xed8 Size=0x8
    enum _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediumType;// Offset=0xee0 Size=0x4
    void * SecurityDescriptor;// Offset=0xee8 Size=0x8
    struct _UNICODE_STRING BaseName;// Offset=0xef0 Size=0x10
    struct _UNICODE_STRING MiniportName;// Offset=0xf00 Size=0x10
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0xf10 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0xf18 Size=0x8
    struct _DEVICE_OBJECT * NextDeviceObject;// Offset=0xf20 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * NextGlobalMiniport;// Offset=0xf28 Size=0x8
    struct _UNICODE_STRING * pAdapterInstanceName;// Offset=0xf30 Size=0x8
    unsigned long PnPCapabilities;// Offset=0xf38 Size=0x4
    enum _DEVICE_POWER_STATE CurrentDevicePowerState;// Offset=0xf3c Size=0x4
    unsigned long long PowerStateLock;// Offset=0xf40 Size=0x8
    enum _DEVICE_POWER_STATE DriverPowerState;// Offset=0xf48 Size=0x4
    enum _DEVICE_POWER_STATE PrevDriverPowerState;// Offset=0xf4c Size=0x4
    struct _NET_BUFFER_LIST * LowPowerRcvReturnNbls;// Offset=0xf50 Size=0x8
    unsigned long PendingReturnNBLCount;// Offset=0xf58 Size=0x4
    unsigned char SurpriseRemoveFlushedRcvReturnQueue;// Offset=0xf5c Size=0x1
    struct NDIS_NBL_TRACKER_HANDLE__ * LowPowerRcvReturnNblTracker;// Offset=0xf60 Size=0x8
    struct _NDIS_PM_ADMIN_CONFIG PMAdminConfig;// Offset=0xf68 Size=0x4
    struct _KSEMAPHORE PMPatternSemaphore;// Offset=0xf70 Size=0x20
    struct _KSEMAPHORE PMOffloadSemaphore;// Offset=0xf90 Size=0x20
    void * BusInterface;// Offset=0xfb0 Size=0x8
    unsigned short InstanceNumber;// Offset=0xfb8 Size=0x2
    void * ConfigurationHandle;// Offset=0xfc0 Size=0x8
    struct _GUID InterfaceGuid;// Offset=0xfc8 Size=0x10
    union _NET_LUID_LH NetLuid;// Offset=0xfd8 Size=0x8
    unsigned char IfBlockAvailable;// Offset=0xfe0 Size=0x1
    struct _NDIS_IF_BLOCK * IfBlock;// Offset=0xfe8 Size=0x8
    struct _KEVENT * IfBlockPointerRefZeroEvent;// Offset=0xff0 Size=0x8
    unsigned int IfIndex;// Offset=0xff8 Size=0x4
    enum _NET_IF_ADMIN_STATUS AdminStatus;// Offset=0xffc Size=0x4
    enum _NET_IF_OPER_STATUS OperStatus;// Offset=0x1000 Size=0x4
    unsigned long OperStatusFlags;// Offset=0x1004 Size=0x4
    union // Size=0x8 (Id=0)
    {
        int  ( * SendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x1008 Size=0x8
        int  ( * WanSendHandler)(void * ,void * ,struct _NDIS_WAN_PACKET * );// Offset=0x1008 Size=0x8
    };
    struct NDIS_NBL_TRACKER_HANDLE__ * NblTracker;// Offset=0x1010 Size=0x8
    struct _DEVICE_RESET_INTERFACE_STANDARD * ReenumerateSelfInterface;// Offset=0x1018 Size=0x8
    struct _NDIS_MINIPORT_OFFLOAD * Offload;// Offset=0x1020 Size=0x8
    void * NDKBlock;// Offset=0x1028 Size=0x8
    void * AddDeviceContext;// Offset=0x1030 Size=0x8
    struct _IO_REMOVE_LOCK RemoveLock;// Offset=0x1038 Size=0x20
    struct _UNICODE_STRING DevinterfaceNetSymbolicLinkName;// Offset=0x1058 Size=0x10
    unsigned long PhysicalMediumInInf;// Offset=0x1068 Size=0x4
    class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > ExportName;// Offset=0x1070 Size=0x8
    class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > FilterClass;// Offset=0x1078 Size=0x8
    void * StatusProcessingThread;// Offset=0x1080 Size=0x8
    unsigned long StatusProcessingDbgX;// Offset=0x1088 Size=0x4
    struct _UNICODE_STRING FdoName;// Offset=0x1090 Size=0x10
    struct _KEVENT PowerD0CompleteEvent;// Offset=0x10a0 Size=0x18
    long LastD0CompleteStatus;// Offset=0x10b8 Size=0x4
    enum _NDIS_MINIPORT_EVENT LastD0Reason;// Offset=0x10bc Size=0x2
    unsigned long DirectOidRequestCount;// Offset=0x10c0 Size=0x4
    struct _KEVENT * AllDirectRequestsCompletedEvent;// Offset=0x10c8 Size=0x8
    struct _NDIS_HD_SPLIT_CURRENT_CONFIG * HDSplitCurrentConfig;// Offset=0x10d0 Size=0x8
    void * MSIXConfigContext;// Offset=0x10d8 Size=0x8
    long  ( * SetMSIXTableEntry)(void * ,unsigned long ,unsigned long );// Offset=0x10e0 Size=0x8
    long  ( * MaskMSIXTableEntry)(void * ,unsigned long );// Offset=0x10e8 Size=0x8
    long  ( * UnmaskMSIXTableEntry)(void * ,unsigned long );// Offset=0x10f0 Size=0x8
    struct _WORK_QUEUE_ITEM DevicePowerStateWorkItem;// Offset=0x10f8 Size=0x20
    struct _WORK_QUEUE_ITEM SystemPowerStateWorkItem;// Offset=0x1118 Size=0x20
    struct _NDIS_RECEIVE_QUEUE_BLOCK * DefaultReceiveQueue;// Offset=0x1138 Size=0x8
    unsigned long MaxNumRssProcessors;// Offset=0x1140 Size=0x4
    struct _PROCESSOR_NUMBER RssBaseProcessor;// Offset=0x1144 Size=0x4
    struct _PROCESSOR_NUMBER RssMaxProcessor;// Offset=0x1148 Size=0x4
    enum _NDIS_RSS_PROFILE RssProfile;// Offset=0x114c Size=0x4
    unsigned short NumaNodeId;// Offset=0x1150 Size=0x2
    unsigned short * NumaDistances;// Offset=0x1158 Size=0x8
    struct _UNICODE_STRING * pModifiedInstanceName;// Offset=0x1160 Size=0x8
    unsigned long SyncFlags;// Offset=0x1168 Size=0x4
    unsigned long WSyncFlags;// Offset=0x116c Size=0x4
    unsigned long InterlockedFlags;// Offset=0x1170 Size=0x4
    struct _ULONG_REFERENCE Ref;// Offset=0x1178 Size=0x10
    struct _NDIS_SELECTIVE_SUSPEND * SelectiveSuspend;// Offset=0x1188 Size=0x8
    struct _NDIS_MINIPORT_AOAC * AoAc;// Offset=0x1190 Size=0x8
    enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason;// Offset=0x1198 Size=0x4
    struct NDIS_EVENT_LOG_HANDLE__ * PnpEventLog;// Offset=0x11a0 Size=0x8
    struct _NDIS_D0_SIGNAL_WORK_ITEM D0CompleteSignalWorkItem;// Offset=0x11a8 Size=0x58
    struct _NDIS_PHYSICAL_PERFORMANCE_COUNTERS * PhysicalPerformanceCounters;// Offset=0x1200 Size=0x8
    union _LARGE_INTEGER TimeOfInitialization;// Offset=0x1208 Size=0x8
    union _LARGE_INTEGER LastSystemSleepTime;// Offset=0x1210 Size=0x8
    unsigned long long TotalSystemSleepTimeMs;// Offset=0x1218 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * SriovHwCapabilities;// Offset=0x1220 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * SriovCurrentCapabilities;// Offset=0x1228 Size=0x8
    unsigned long long InvalidateBlockMask;// Offset=0x1230 Size=0x8
    struct _IRP * InvalidateBlockIoctlPf;// Offset=0x1238 Size=0x8
    struct _IRP * InvalidateBlockIoctlVf;// Offset=0x1240 Size=0x8
    struct _VPCI_INVALIDATE_BLOCK_OUTPUT InvalidateBlockVfParams;// Offset=0x1248 Size=0x8
    struct _KEVENT InvalidateBlockEvent;// Offset=0x1250 Size=0x18
    unsigned short InvalidateVfId;// Offset=0x1268 Size=0x2
    unsigned char InvalidateBlockCancelling;// Offset=0x126a Size=0x1
    struct _NDIS_PF_BLOCK * PFBlock;// Offset=0x1270 Size=0x8
    unsigned long NumSwitches;// Offset=0x1278 Size=0x4
    struct _LIST_ENTRY NicSwitchList;// Offset=0x1280 Size=0x10
    unsigned long NumAllocatedVFs;// Offset=0x1290 Size=0x4
    struct _LIST_ENTRY VFList;// Offset=0x1298 Size=0x10
    unsigned long NumActiveVPorts;// Offset=0x12a8 Size=0x4
    struct _LIST_ENTRY VPortList;// Offset=0x12b0 Size=0x10
    unsigned char * AllocatedVPortIndices;// Offset=0x12c0 Size=0x8
    unsigned long AllocatedVPortIndicesLength;// Offset=0x12c8 Size=0x4
    unsigned long  ( * SetVirtualFunctionData)(void * ,unsigned short ,void * ,unsigned long ,unsigned long );// Offset=0x12d0 Size=0x8
    unsigned long  ( * GetVirtualFunctionData)(void * ,unsigned short ,void * ,unsigned long ,unsigned long );// Offset=0x12d8 Size=0x8
    long  ( * EnableVirtualization)(void * ,unsigned short ,unsigned char ,unsigned char ,unsigned char );// Offset=0x12e0 Size=0x8
    long  ( * GetVirtualDeviceLocation)(void * ,unsigned short ,unsigned short * ,unsigned char * ,unsigned char * );// Offset=0x12e8 Size=0x8
    long  ( * GetVirtualFunctionProbedBars)(void * ,unsigned long * );// Offset=0x12f0 Size=0x8
    void * VirtInterfaceContext;// Offset=0x12f8 Size=0x8
    struct _UNICODE_STRING DevinterfaceVirtSymbolicLinkName;// Offset=0x1300 Size=0x10
    void  ( * VpciInterfaceDereference)(void * );// Offset=0x1310 Size=0x8
    long  ( * WriteVfConfigBlock)(void * ,unsigned long ,void * ,unsigned long );// Offset=0x1318 Size=0x8
    long  ( * ReadVfConfigBlock)(void * ,unsigned long ,void * ,unsigned long );// Offset=0x1320 Size=0x8
    void * VpciInterfaceContext;// Offset=0x1328 Size=0x8
    unsigned int VfSerialNumber;// Offset=0x1330 Size=0x4
    struct _LUID SriovLuid;// Offset=0x1334 Size=0x8
    struct NDIS_REFCOUNT_HANDLE__ * RefCountTracker;// Offset=0x1340 Size=0x8
    struct NDIS_REFCOUNT_HANDLE__ * NsiRefCountTracker;// Offset=0x1348 Size=0x8
    struct _NDIS_QOS_CAPABILITIES * QosHwCapabilities;// Offset=0x1350 Size=0x8
    struct _NDIS_QOS_CAPABILITIES * QosCurrentCapabilities;// Offset=0x1358 Size=0x8
    struct _NDIS_QOS_PARAMETERS * QosOperationalParameters;// Offset=0x1360 Size=0x8
    unsigned long QosOperationalParametersBufferSize;// Offset=0x1368 Size=0x4
    struct _NDIS_QOS_PARAMETERS * QosRemoteParameters;// Offset=0x1370 Size=0x8
    unsigned long QosRemoteParametersBufferSize;// Offset=0x1378 Size=0x4
    unsigned long long DeviceFlags;// Offset=0x1380 Size=0x8
    void * VerifierContext;// Offset=0x1388 Size=0x8
    struct _WORK_QUEUE_ITEM SurpriseRemovalWorkItem;// Offset=0x1390 Size=0x20
    struct Ndis::BindStack Bindings;// Offset=0x13b0 Size=0x68
    struct Ndis::BindEngine BindEngine;// Offset=0x1418 Size=0x78
    class Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER> MiniportOwner;// Offset=0x1490 Size=0x28
    bool PmInterruptedByPnp;// Offset=0x14b8 Size=0x1
    bool DoNotBlockOnMiniportLock;// Offset=0x14b9 Size=0x1
    bool PoFxDStateReportingEnabled;// Offset=0x14ba Size=0x1
    struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ * HookAdapterHandle;// Offset=0x14c0 Size=0x8
    struct _WORK_QUEUE_ITEM InterfaceUpdateWorkItem;// Offset=0x14c8 Size=0x20
    bool InterfaceUpdateInProgress;// Offset=0x14e8 Size=0x1
    bool MacAddressUpdateQueued;// Offset=0x14e9 Size=0x1
    bool MtuUpdateQueued;// Offset=0x14ea Size=0x1
    struct _IF_PHYSICAL_ADDRESS_LH PendingMacAddress;// Offset=0x14ec Size=0x22
    unsigned long PendingMtuSize;// Offset=0x1510 Size=0x4
    wchar_t * PnPInstanceId;// Offset=0x1518 Size=0x8
    struct RECORDER_LOG__ * BlackBoxHandle;// Offset=0x1520 Size=0x8
    struct _KEVENT * PowerCompleteEvent;// Offset=0x1528 Size=0x8
    long PowerCompleteStatus;// Offset=0x1530 Size=0x4
    struct WORKITEM_WITH_IRP DevicePowerOnWorkItem;// Offset=0x1538 Size=0x28
    struct WORKITEM_WITH_IRP DevicePowerDownWorkItem;// Offset=0x1560 Size=0x28
    class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t> > > PendingOidWatchdog;// Offset=0x1588 Size=0x8
    class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t> > > HookedOidWatchdog;// Offset=0x1590 Size=0x8
    class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t> > > ReenumerateWatchdog;// Offset=0x1598 Size=0x8
    struct _NDIS_PD_BLOCK * PDBlock;// Offset=0x15a0 Size=0x8
    void * PdcHandle;// Offset=0x15a8 Size=0x8
    struct _NDIS_TIMER PdcTaskClientDisableTimer;// Offset=0x15b0 Size=0x80
    struct _NDIS_WORK_ITEM PdcTaskClientDisableWorkItem;// Offset=0x1630 Size=0x50
    long PdcTaskClientMode;// Offset=0x1680 Size=0x4
    unsigned long ModernStandbyWoLMagicPacketEnable;// Offset=0x1684 Size=0x4
    struct _NDIS_RSS_DPC_WORKER_CONTEXT * RssV2Context;// Offset=0x1688 Size=0x8
    long RssV2CompletionCount;// Offset=0x1690 Size=0x4
    struct _KEVENT RssV2CompletionEvent;// Offset=0x1698 Size=0x18
    unsigned char RssV2Initialized;// Offset=0x16b0 Size=0x1
    struct _LIST_ENTRY SynchronousOidCalls;// Offset=0x16b8 Size=0x10
    struct _NDIS_TIMESTAMP_CAPABILITIES * HwTimestampCapabilities;// Offset=0x16c8 Size=0x8
    struct _NDIS_TIMESTAMP_CAPABILITIES * HwTimestampCurrentConfig;// Offset=0x16d0 Size=0x8
    struct _NDIS_TIMESTAMP_CAPABILITIES * TopTimestampConfig;// Offset=0x16d8 Size=0x8
    struct _NDIS_TIMESTAMP_CAPABILITIES * TopHwTimestampCapabilities;// Offset=0x16e0 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT PktMonComp;// Offset=0x16e8 Size=0x38
    struct _PKTMON_EDGE_CONTEXT PktMonEdge;// Offset=0x1720 Size=0x28
    void _NDIS_MINIPORT_BLOCK();
    void ~_NDIS_MINIPORT_BLOCK();
    void * __vecDelDtor(unsigned int );
};
