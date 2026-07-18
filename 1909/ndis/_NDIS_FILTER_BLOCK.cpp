struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_FILTER_STATE
{
    NdisFilterDetached=0,
    NdisFilterAttaching=1,
    NdisFilterPaused=2,
    NdisFilterRestarting=3,
    NdisFilterRunning=4,
    NdisFilterPausing=5,
    NdisFilterDetaching=6
};

struct _REFERENCE_EX// Size=0x18 (Id=360)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned short ReferenceCount;// Offset=0x8 Size=0x2
    unsigned char Closing;// Offset=0xa Size=0x1
    unsigned char ZeroBased;// Offset=0xb Size=0x1
    struct NDIS_REFCOUNT_HANDLE__ * RefCountTracker;// Offset=0x10 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=82)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _PENDING_STACK_EXPANSION_FALLBACK_WORK// Size=0x38 (Id=1220)
{
    unsigned char IssueOidRequest;// Offset=0x0 Size=0x1
    unsigned char CompleteOidRequest;// Offset=0x1 Size=0x1
    struct _NDIS_OID_REQUEST * DirectOidRequestsToComplete;// Offset=0x8 Size=0x8
    struct _NDIS_STATUS_INDICATION * StatusIndications;// Offset=0x10 Size=0x8
    struct _NET_PNP_EVENT_NOTIFICATION * NetPnPEvents;// Offset=0x18 Size=0x8
    struct _NET_DEVICE_PNP_EVENT * DevicePnPEvents;// Offset=0x20 Size=0x8
    struct _NET_BUFFER_LIST * SentNblsToComplete;// Offset=0x28 Size=0x8
    struct _NET_BUFFER_LIST * ReceivedNblsToComplete;// Offset=0x30 Size=0x8
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

enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
    NdisPauseFunctionsUnsupported=0,
    NdisPauseFunctionsSendOnly=1,
    NdisPauseFunctionsReceiveOnly=2,
    NdisPauseFunctionsSendAndReceive=3,
    NdisPauseFunctionsUnknown=4
};

struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS// Size=0x30 (Id=765)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x8 Size=0x8
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * CancelSendNetBufferListsHandler)(void * ,void * );// Offset=0x18 Size=0x8
    void  ( * ReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x28 Size=0x8
};

struct _GUID// Size=0x10 (Id=4)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=30)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _NDIS_PM_PARAMETERS// Size=0x14 (Id=540)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long EnabledWoLPacketPatterns;// Offset=0x4 Size=0x4
    unsigned long EnabledProtocolOffloads;// Offset=0x8 Size=0x4
    unsigned long WakeUpFlags;// Offset=0xc Size=0x4
    unsigned long MediaSpecificWakeUpEvents;// Offset=0x10 Size=0x4
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

struct _PKTMON_COMPONENT_CONTEXT// Size=0x10 (Id=570)
{
    void * CompHandle;// Offset=0x0 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        int FlowEnabled:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        int DropEnabled:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _PKTMON_EDGE_CONTEXT// Size=0x18 (Id=571)
{
    void * EdgeHandle;// Offset=0x0 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT * CompContext;// Offset=0x8 Size=0x8
    enum _PKTMON_PACKET_TYPE PacketType;// Offset=0x10 Size=0x4
};

struct _NDIS_FILTER_BLOCK// Size=0x358 (Id=472)
{
    union // Size=0xc0 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        struct _NDIS_FILTER_BLOCK * NextFilter;// Offset=0x8 Size=0x8
        struct _NDIS_FILTER_DRIVER_BLOCK * FilterDriver;// Offset=0x10 Size=0x8
        void * FilterModuleContext;// Offset=0x18 Size=0x8
        struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x20 Size=0x8
        class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > FilterInstanceName;// Offset=0x28 Size=0x8
        struct _UNICODE_STRING * FilterFriendlyName;// Offset=0x30 Size=0x8
        unsigned long Flags;// Offset=0x38 Size=0x4
        unsigned long StackFlags;// Offset=0x3c Size=0x4
        enum _NDIS_FILTER_STATE State;// Offset=0x40 Size=0x1
        struct _REFERENCE_EX Ref;// Offset=0x48 Size=0x18
        int FakeStatus;// Offset=0x60 Size=0x4
        struct _NDIS_FILTER_BLOCK * NextGlobalFilter;// Offset=0x68 Size=0x8
        struct _NDIS_FILTER_BLOCK * LowerFilter;// Offset=0x70 Size=0x8
        struct _NDIS_FILTER_BLOCK * HigherFilter;// Offset=0x78 Size=0x8
        struct _FILTER_PAUSE_RESTART_CONTEXT * AsyncOpContext;// Offset=0x80 Size=0x8
        long NumOfPauseRestartRequests;// Offset=0x88 Size=0x4
        unsigned long long Lock;// Offset=0x90 Size=0x8
        void * LockThread;// Offset=0x98 Size=0x8
        struct _LIST_ENTRY OidRequestList;// Offset=0xa0 Size=0x10
        struct _NDIS_OID_REQUEST * PendingOidRequest;// Offset=0xb0 Size=0x8
        class wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (__cdecl*)(NDISWATCHDOG__ *),&ndisFreeWatchdog,wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t> > > PendingOidWatchdog;// Offset=0xb8 Size=0x8
        struct <unnamed-type-StackExpansionFallback>// Size=0x60 (Id=6494)
        {
            struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
            unsigned char WorkItemQueued;// Offset=0x20 Size=0x1
            struct _PENDING_STACK_EXPANSION_FALLBACK_WORK PendingWork;// Offset=0x28 Size=0x38
        };
        struct _NDIS_FILTER_BLOCK::<unnamed-type-StackExpansionFallback> StackExpansionFallback;// Offset=0xc0 Size=0x60
    };
    unsigned char StatusIndicationsQueued;// Offset=0x120 Size=0x1
    long DroppedReceiveNbls;// Offset=0x124 Size=0x4
    long DroppedSendNbls;// Offset=0x128 Size=0x4
    unsigned long DroppedStatusIndications;// Offset=0x12c Size=0x4
    unsigned long DroppedUncloneableStatusIndications;// Offset=0x130 Size=0x4
    struct _REFERENCE_EX PnPRef;// Offset=0x138 Size=0x18
    enum _NDIS_MEDIUM MediaType;// Offset=0x150 Size=0x4
    enum _NDIS_PHYSICAL_MEDIUM PhysicalMediaType;// Offset=0x154 Size=0x4
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x158 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x15c Size=0x4
    unsigned long long XmitLinkSpeed;// Offset=0x160 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x168 Size=0x8
    enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;// Offset=0x170 Size=0x4
    unsigned long AutoNegotiationFlags;// Offset=0x174 Size=0x4
    unsigned char XState;// Offset=0x178 Size=0x1
    unsigned char Reserved1;// Offset=0x179 Size=0x1
    unsigned char Reserved2;// Offset=0x17a Size=0x1
    unsigned char Reserved3;// Offset=0x17b Size=0x1
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp;// Offset=0x17c Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp;// Offset=0x180 Size=0x4
    unsigned long long XmitLinkSpeedIndicateUp;// Offset=0x188 Size=0x8
    unsigned long long RcvLinkSpeedIndicateUp;// Offset=0x190 Size=0x8
    enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp;// Offset=0x198 Size=0x4
    unsigned long AutoNegotiationFlagsIndicateUp;// Offset=0x19c Size=0x4
    void * NextRequestHandle;// Offset=0x1a0 Size=0x8
    struct _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY * IterativeDataPathTracker[4];// Offset=0x1a8 Size=0x8
    void  ( * NextSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x1b0 Size=0x8
    void * NextSendNetBufferListsContext;// Offset=0x1b8 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * NextSendNetBufferListsTracker;// Offset=0x1c0 Size=0x8
    struct _NDIS_OBJECT_HEADER * NextSendNetBufferListsObject;// Offset=0x1c8 Size=0x8
    void  ( * NextSendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x1d0 Size=0x8
    void * NextSendNetBufferListsCompleteContext;// Offset=0x1d8 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * NextSendNetBufferListsCompleteTracker;// Offset=0x1e0 Size=0x8
    struct _NDIS_OBJECT_HEADER * NextSendNetBufferListsCompleteObject;// Offset=0x1e8 Size=0x8
    void  ( * NextIndicateReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x1f0 Size=0x8
    void * NextIndicateReceiveNetBufferListsContext;// Offset=0x1f8 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * NextIndicateReceiveNetBufferListsTracker;// Offset=0x200 Size=0x8
    struct _NDIS_OBJECT_HEADER * NextIndicateReceiveNetBufferListsObject;// Offset=0x208 Size=0x8
    void  ( * NextReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x210 Size=0x8
    void * NextReturnNetBufferListsContext;// Offset=0x218 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * NextReturnNetBufferListsTracker;// Offset=0x220 Size=0x8
    struct _NDIS_OBJECT_HEADER * NextReturnNetBufferListsObject;// Offset=0x228 Size=0x8
    void  ( * NextCancelSendNetBufferListsHandler)(void * ,void * );// Offset=0x230 Size=0x8
    void * NextCancelSendNetBufferListsContext;// Offset=0x238 Size=0x8
    struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS Characteristics;// Offset=0x240 Size=0x30
    void  ( * FilterSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x270 Size=0x8
    void  ( * FilterIndicateReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x278 Size=0x8
    void  ( * FilterCancelSendNetBufferListsHandler)(void * ,void * );// Offset=0x280 Size=0x8
    int  ( * TcpOffloadReceiveReturnHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x288 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * NblTracker;// Offset=0x290 Size=0x8
    struct _NDIS_FILTER_TASK_OFFLOAD * Offload;// Offset=0x298 Size=0x8
    struct _GUID InterfaceGuid;// Offset=0x2a0 Size=0x10
    unsigned long IfIndex;// Offset=0x2b0 Size=0x4
    struct _NDIS_IF_BLOCK * IfBlock;// Offset=0x2b8 Size=0x8
    void * NextDirectRequestHandle;// Offset=0x2c0 Size=0x8
    unsigned long DirectOidRequestCount;// Offset=0x2c8 Size=0x4
    struct _SINGLE_LIST_ENTRY WOLPatternList;// Offset=0x2d0 Size=0x8
    struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;// Offset=0x2d8 Size=0x8
    struct _NDIS_PM_PARAMETERS PMCurrentParameters;// Offset=0x2e0 Size=0x14
    struct NDIS_BIND_FILTER_LINK * Bind;// Offset=0x2f8 Size=0x8
    struct _NDIS_TIMESTAMP_CAPABILITIES * HwTimestampCapabilities;// Offset=0x300 Size=0x8
    struct _NDIS_TIMESTAMP_CAPABILITIES * HwTimestampCurrentConfig;// Offset=0x308 Size=0x8
    void * VerifierContext;// Offset=0x310 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT PktMonComp;// Offset=0x318 Size=0x10
    struct _PKTMON_EDGE_CONTEXT PktMonEdgeLower;// Offset=0x328 Size=0x18
    struct _PKTMON_EDGE_CONTEXT PktMonEdgeUpper;// Offset=0x340 Size=0x18
    void _NDIS_FILTER_BLOCK(struct _NDIS_FILTER_BLOCK * );
    void _NDIS_FILTER_BLOCK();
    void ~_NDIS_FILTER_BLOCK();
    struct _NDIS_FILTER_BLOCK & operator=(struct _NDIS_FILTER_BLOCK * );
    void * __vecDelDtor(unsigned int );
};
