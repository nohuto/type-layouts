struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PM_PARAMETERS// Size=0x14 (Id=540)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long EnabledWoLPacketPatterns;// Offset=0x4 Size=0x4
    unsigned long EnabledProtocolOffloads;// Offset=0x8 Size=0x4
    unsigned long WakeUpFlags;// Offset=0xc Size=0x4
    unsigned long MediaSpecificWakeUpEvents;// Offset=0x10 Size=0x4
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

struct _QUEUED_CLOSE// Size=0x28 (Id=1527)
{
    int Status;// Offset=0x0 Size=0x4
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=30)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _NDIS_SPIN_LOCK// Size=0x10 (Id=143)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned char OldIrql;// Offset=0x8 Size=0x1
};

enum _NDIS_NDIS5_DRIVER_STATE
{
    Ndis5StateUnused=0,
    Ndis5StatePaused=1,
    Ndis5StateRunning=2
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=832)
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

struct _KEVENT// Size=0x18 (Id=66)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    void _KEVENT(struct _KEVENT * );
    void _KEVENT(struct _KEVENT & );
    struct _KEVENT & operator=(struct _KEVENT * );
    struct _KEVENT & operator=(struct _KEVENT & );
};

struct _NDIS_EVENT// Size=0x18 (Id=552)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    void _NDIS_EVENT(struct _NDIS_EVENT * );
    void _NDIS_EVENT(struct _NDIS_EVENT & );
    struct _NDIS_EVENT & operator=(struct _NDIS_EVENT * );
    struct _NDIS_EVENT & operator=(struct _NDIS_EVENT & );
};

enum _PKTMON_PACKET_TYPE
{
    PktMonPayload_Unknown=0,
    PktMonPayload_Ethernet=1,
    PktMonPayload_WiFi=2,
    PktMonPayload_MBB=3
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

struct _NDIS_COMMON_OPEN_BLOCK// Size=0x3c0 (Id=401)
{
    union // Size=0x8 (Id=0)
    {
        void * MacHandle;// Offset=0x0 Size=0x8
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        void * BindingHandle;// Offset=0x8 Size=0x8
    };
    struct _NDIS_MINIPORT_BLOCK * MiniportHandle;// Offset=0x10 Size=0x8
    struct _NDIS_PROTOCOL_BLOCK * ProtocolHandle;// Offset=0x18 Size=0x8
    void * ProtocolBindingContext;// Offset=0x20 Size=0x8
    void  ( * NextSendHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    void * NextSendContext;// Offset=0x30 Size=0x8
    void * MiniportAdapterContext;// Offset=0x38 Size=0x8
    unsigned char Reserved1;// Offset=0x40 Size=0x1
    unsigned char CallingFromNdis6Protocol;// Offset=0x41 Size=0x1
    unsigned char Reserved3;// Offset=0x42 Size=0x1
    unsigned char Reserved4;// Offset=0x43 Size=0x1
    void  ( * NextReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x48 Size=0x8
    unsigned long long Reserved5;// Offset=0x50 Size=0x8
    void * NextReturnNetBufferListsContext;// Offset=0x58 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * SendHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x60 Size=0x8
        int  ( * WanSendHandler)(void * ,void * ,void * );// Offset=0x60 Size=0x8
    };
    int  ( * TransferDataHandler)(void * ,void * ,unsigned int ,unsigned int ,struct _NDIS_PACKET * ,unsigned int * );// Offset=0x68 Size=0x8
    void  ( * SendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0x70 Size=0x8
    void  ( * TransferDataCompleteHandler)(void * ,struct _NDIS_PACKET * ,int ,unsigned int );// Offset=0x78 Size=0x8
    int  ( * ReceiveHandler)(void * ,void * ,void * ,unsigned int ,void * ,unsigned int ,unsigned int );// Offset=0x80 Size=0x8
    void  ( * ReceiveCompleteHandler)(void * );// Offset=0x88 Size=0x8
    int  ( * WanReceiveHandler)(void * ,unsigned char * ,unsigned long );// Offset=0x90 Size=0x8
    void  ( * RequestCompleteHandler)(void * ,struct _NDIS_REQUEST * ,int );// Offset=0x98 Size=0x8
    int  ( * ReceivePacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0xa0 Size=0x8
    void  ( * SendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xa8 Size=0x8
    int  ( * ResetHandler)(void * );// Offset=0xb0 Size=0x8
    int  ( * RequestHandler)(void * ,struct _NDIS_REQUEST * );// Offset=0xb8 Size=0x8
    int  ( * OidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0xc0 Size=0x8
    void  ( * ResetCompleteHandler)(void * ,int );// Offset=0xc8 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * StatusHandler)(void * ,int ,void * ,unsigned int );// Offset=0xd0 Size=0x8
        void  ( * StatusHandlerEx)(void * ,struct _NDIS_STATUS_INDICATION * );// Offset=0xd0 Size=0x8
    };
    void  ( * StatusCompleteHandler)(void * );// Offset=0xd8 Size=0x8
    unsigned long OpenFlags;// Offset=0xe0 Size=0x4
    long References;// Offset=0xe4 Size=0x4
    unsigned long long SpinLock;// Offset=0xe8 Size=0x8
    void * FilterHandle;// Offset=0xf0 Size=0x8
    unsigned int FrameTypeArraySize;// Offset=0xf8 Size=0x4
    unsigned short FrameTypeArray[4];// Offset=0xfc Size=0x8
    unsigned long ProtocolOptions;// Offset=0x104 Size=0x4
    unsigned long CurrentLookahead;// Offset=0x108 Size=0x4
    int  ( * WSendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x110 Size=0x8
    int  ( * WTransferDataHandler)(struct _NDIS_PACKET * ,unsigned int * ,void * ,void * ,unsigned int ,unsigned int );// Offset=0x118 Size=0x8
    void  ( * WSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x120 Size=0x8
    void  ( * CancelSendPacketsHandler)(void * ,void * );// Offset=0x128 Size=0x8
    unsigned long WakeUpEnable;// Offset=0x130 Size=0x4
    struct _NDIS_PM_PARAMETERS PMCurrentParameters;// Offset=0x134 Size=0x14
    struct _KEVENT * CloseCompleteEvent;// Offset=0x148 Size=0x8
    struct _QUEUED_CLOSE QC;// Offset=0x150 Size=0x28
    long AfReferences;// Offset=0x178 Size=0x4
    struct _NDIS_OPEN_BLOCK * NextGlobalOpen;// Offset=0x180 Size=0x8
    struct _NDIS_OPEN_BLOCK * MiniportNextOpen;// Offset=0x188 Size=0x8
    struct _NDIS_OPEN_BLOCK * ProtocolNextOpen;// Offset=0x190 Size=0x8
    struct _UNICODE_STRING * BindDeviceName;// Offset=0x198 Size=0x8
    struct _UNICODE_STRING * RootDeviceName;// Offset=0x1a0 Size=0x8
    struct _NDIS_OPEN_BLOCK * FilterNextOpen;// Offset=0x1a8 Size=0x8
    unsigned int PacketFilters;// Offset=0x1b0 Size=0x4
    unsigned int OldPacketFilters;// Offset=0x1b4 Size=0x4
    unsigned int MaxMulticastAddresses;// Offset=0x1b8 Size=0x4
    struct _ETH_MULTICAST_WRAPPER * MCastAddressBuf;// Offset=0x1c0 Size=0x8
    unsigned int NumAddresses;// Offset=0x1c8 Size=0x4
    struct _ETH_MULTICAST_WRAPPER * OldMCastAddressBuf;// Offset=0x1d0 Size=0x8
    unsigned int OldNumAddresses;// Offset=0x1d8 Size=0x4
    unsigned char * RssParametersBuffer;// Offset=0x1e0 Size=0x8
    struct _NDIS_RECEIVE_SCALE_PARAMETERS * NdisRSSParameters;// Offset=0x1e8 Size=0x8
    struct _SINGLE_LIST_ENTRY PatternList;// Offset=0x1f0 Size=0x8
    struct _SINGLE_LIST_ENTRY WOLPatternList;// Offset=0x1f8 Size=0x8
    struct _SINGLE_LIST_ENTRY PMProtocolOffloadList;// Offset=0x200 Size=0x8
    void  ( * ProtSendNetBufferListsComplete)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x208 Size=0x8
    void * SendCompleteNdisPacketContext;// Offset=0x210 Size=0x8
    void * SendCompleteNetBufferListsContext;// Offset=0x218 Size=0x8
    void  ( * ReceiveNetBufferLists)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x220 Size=0x8
    void * ReceiveNetBufferListsContext;// Offset=0x228 Size=0x8
    void  ( * SavedSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x230 Size=0x8
    void  ( * SavedCancelSendPacketsHandler)(void * ,void * );// Offset=0x238 Size=0x8
    int  ( * SavedSendHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x240 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * NblTracker;// Offset=0x248 Size=0x8
    struct NDIS_REFCOUNT_HANDLE__ * RefCountTracker;// Offset=0x250 Size=0x8
    unsigned long long RefCountLock;// Offset=0x258 Size=0x8
    unsigned long ProtocolMajorVersion;// Offset=0x260 Size=0x4
    void ** IfBlock;// Offset=0x268 Size=0x8
    struct _NDIS_SPIN_LOCK PnPStateLock;// Offset=0x270 Size=0x10
    enum _NDIS_NDIS5_DRIVER_STATE PnPState;// Offset=0x280 Size=0x4
    int OutstandingSends;// Offset=0x284 Size=0x4
    struct _NDIS_EVENT PauseEvent;// Offset=0x288 Size=0x18
    int  ( * Ndis5WanSendHandler)(void * ,void * ,void * );// Offset=0x2a0 Size=0x8
    void  ( * ProtSendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0x2a8 Size=0x8
    void  ( * OidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x2b0 Size=0x8
    struct _NDIS_OPEN_OFFLOAD * Offload;// Offset=0x2b8 Size=0x8
    struct _NDIS_STATUS_UNBIND_WORKITEM * StatusUnbindWorkItem;// Offset=0x2c0 Size=0x8
    unsigned long long DpcStartCycle;// Offset=0x2c8 Size=0x8
    struct PNDIS_PER_PROCESSOR_SLOT__ * ReceivedAPacketSlot;// Offset=0x2d0 Size=0x8
    int  ( * DirectOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x2d8 Size=0x8
    struct _LIST_ENTRY ReceiveQueueList;// Offset=0x2e0 Size=0x10
    unsigned long NumReceiveQueues;// Offset=0x2f0 Size=0x4
    struct _LIST_ENTRY SharedMemoryBlockList;// Offset=0x2f8 Size=0x10
    int  ( * AllocateSharedMemoryHandler)(void * ,struct _NDIS_SHARED_MEMORY_PARAMETERS * ,void ** );// Offset=0x308 Size=0x8
    void  ( * FreeSharedMemoryHandler)(void * ,void * );// Offset=0x310 Size=0x8
    void * AllocateSharedMemoryContext;// Offset=0x318 Size=0x8
    unsigned long NumAllocatedVFs;// Offset=0x320 Size=0x4
    struct _LIST_ENTRY VFList;// Offset=0x328 Size=0x10
    unsigned long NumActiveVPorts;// Offset=0x338 Size=0x4
    struct _LIST_ENTRY VPortList;// Offset=0x340 Size=0x10
    unsigned long AoAcReferences;// Offset=0x350 Size=0x4
    struct NDIS_BIND_PROTOCOL_LINK * Bind;// Offset=0x358 Size=0x8
    struct _WORK_QUEUE_ITEM UnsolicitedUnbindComplete;// Offset=0x360 Size=0x20
    struct _KEVENT * UnsolicitedUnbindEvent;// Offset=0x380 Size=0x8
    bool PendingLegacyUnbind;// Offset=0x388 Size=0x1
    struct _KEVENT * WaitNetPnpEvent;// Offset=0x390 Size=0x8
    struct _PKTMON_COMPONENT_CONTEXT PktMonComp;// Offset=0x398 Size=0x10
    struct _PKTMON_EDGE_CONTEXT PktMonEdge;// Offset=0x3a8 Size=0x18
    void _NDIS_COMMON_OPEN_BLOCK(struct _NDIS_COMMON_OPEN_BLOCK * );
    void _NDIS_COMMON_OPEN_BLOCK(struct _NDIS_COMMON_OPEN_BLOCK & );
    struct _NDIS_COMMON_OPEN_BLOCK & operator=(struct _NDIS_COMMON_OPEN_BLOCK * );
    struct _NDIS_COMMON_OPEN_BLOCK & operator=(struct _NDIS_COMMON_OPEN_BLOCK & );
};
