struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _REFERENCE_EX// Size=0x18 (Id=334)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned short ReferenceCount;// Offset=0x8 Size=0x2
    unsigned char Closing;// Offset=0xa Size=0x1
    unsigned char ZeroBased;// Offset=0xb Size=0x1
    struct NDIS_REFCOUNT_HANDLE__ * RefCountTracker;// Offset=0x10 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=183)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=77)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=685)
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
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
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

struct _KMUTANT// Size=0x38 (Id=336)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    unsigned char Abandoned;// Offset=0x30 Size=0x1
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
    void _KMUTANT(struct _KMUTANT * );
    void _KMUTANT(struct _KMUTANT & );
    struct _KMUTANT & operator=(struct _KMUTANT * );
    struct _KMUTANT & operator=(struct _KMUTANT & );
};

struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS// Size=0xa0 (Id=337)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    int  ( * ClCreateVcHandler)(void * ,void * ,void ** );// Offset=0x8 Size=0x8
    int  ( * ClDeleteVcHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * ClOidRequestHandler)(void * ,void * ,void * ,struct _NDIS_OID_REQUEST * );// Offset=0x18 Size=0x8
    void  ( * ClOidRequestCompleteHandler)(void * ,void * ,void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x20 Size=0x8
    void  ( * ClOpenAfCompleteHandlerEx)(void * ,void * ,int );// Offset=0x28 Size=0x8
    void  ( * ClCloseAfCompleteHandler)(int ,void * );// Offset=0x30 Size=0x8
    void  ( * ClRegisterSapCompleteHandler)(int ,void * ,struct CO_SAP * ,void * );// Offset=0x38 Size=0x8
    void  ( * ClDeregisterSapCompleteHandler)(int ,void * );// Offset=0x40 Size=0x8
    void  ( * ClMakeCallCompleteHandler)(int ,void * ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x48 Size=0x8
    void  ( * ClModifyCallQoSCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x50 Size=0x8
    void  ( * ClCloseCallCompleteHandler)(int ,void * ,void * );// Offset=0x58 Size=0x8
    void  ( * ClAddPartyCompleteHandler)(int ,void * ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x60 Size=0x8
    void  ( * ClDropPartyCompleteHandler)(int ,void * );// Offset=0x68 Size=0x8
    int  ( * ClIncomingCallHandler)(void * ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x70 Size=0x8
    void  ( * ClIncomingCallQoSChangeHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x78 Size=0x8
    void  ( * ClIncomingCloseCallHandler)(int ,void * ,void * ,unsigned int );// Offset=0x80 Size=0x8
    void  ( * ClIncomingDropPartyHandler)(int ,void * ,void * ,unsigned int );// Offset=0x88 Size=0x8
    void  ( * ClCallConnectedHandler)(void * );// Offset=0x90 Size=0x8
    int  ( * ClNotifyCloseAfHandler)(void * );// Offset=0x98 Size=0x8
};

struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS// Size=0x90 (Id=338)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    int  ( * CmCreateVcHandler)(void * ,void * ,void ** );// Offset=0x8 Size=0x8
    int  ( * CmDeleteVcHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * CmOpenAfHandler)(void * ,struct CO_ADDRESS_FAMILY * ,void * ,void ** );// Offset=0x18 Size=0x8
    int  ( * CmCloseAfHandler)(void * );// Offset=0x20 Size=0x8
    int  ( * CmRegisterSapHandler)(void * ,struct CO_SAP * ,void * ,void ** );// Offset=0x28 Size=0x8
    int  ( * CmDeregisterSapHandler)(void * );// Offset=0x30 Size=0x8
    int  ( * CmMakeCallHandler)(void * ,struct _CO_CALL_PARAMETERS * ,void * ,void ** );// Offset=0x38 Size=0x8
    int  ( * CmCloseCallHandler)(void * ,void * ,void * ,unsigned int );// Offset=0x40 Size=0x8
    void  ( * CmIncomingCallCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x48 Size=0x8
    int  ( * CmAddPartyHandler)(void * ,struct _CO_CALL_PARAMETERS * ,void * ,void ** );// Offset=0x50 Size=0x8
    int  ( * CmDropPartyHandler)(void * ,void * ,unsigned int );// Offset=0x58 Size=0x8
    void  ( * CmActivateVcCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x60 Size=0x8
    void  ( * CmDeactivateVcCompleteHandler)(int ,void * );// Offset=0x68 Size=0x8
    int  ( * CmModifyCallQoSHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x70 Size=0x8
    int  ( * CmOidRequestHandler)(void * ,void * ,void * ,struct _NDIS_OID_REQUEST * );// Offset=0x78 Size=0x8
    void  ( * CmOidRequestCompleteHandler)(void * ,void * ,void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x80 Size=0x8
    void  ( * CmNotifyCloseAfCompleteHandler)(void * ,int );// Offset=0x88 Size=0x8
};

struct _NDIS_PROTOCOL_BLOCK// Size=0x3d8 (Id=333)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * ProtocolDriverContext;// Offset=0x8 Size=0x8
    struct _NDIS_PROTOCOL_BLOCK * NextProtocol;// Offset=0x10 Size=0x8
    struct _NDIS_OPEN_BLOCK * OpenQueue;// Offset=0x18 Size=0x8
    struct _REFERENCE_EX Ref;// Offset=0x20 Size=0x18
    unsigned char MajorNdisVersion;// Offset=0x38 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x39 Size=0x1
    unsigned char MajorDriverVersion;// Offset=0x3a Size=0x1
    unsigned char MinorDriverVersion;// Offset=0x3b Size=0x1
    unsigned int Reserved;// Offset=0x3c Size=0x4
    unsigned int Flags;// Offset=0x40 Size=0x4
    struct _UNICODE_STRING Name;// Offset=0x48 Size=0x10
    unsigned char IsIPv4;// Offset=0x58 Size=0x1
    unsigned char IsIPv6;// Offset=0x59 Size=0x1
    unsigned char IsNdisTest6;// Offset=0x5a Size=0x1
    int  ( * BindAdapterHandlerEx)(void * ,void * ,struct _NDIS_BIND_PARAMETERS * );// Offset=0x60 Size=0x8
    int  ( * UnbindAdapterHandlerEx)(void * ,void * );// Offset=0x68 Size=0x8
    void  ( * OpenAdapterCompleteHandlerEx)(void * ,int );// Offset=0x70 Size=0x8
    void  ( * CloseAdapterCompleteHandlerEx)(void * );// Offset=0x78 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * PnPEventHandler)(void * ,struct _NET_PNP_EVENT * );// Offset=0x80 Size=0x8
        int  ( * NetPnPEventHandler)(void * ,struct _NET_PNP_EVENT_NOTIFICATION * );// Offset=0x80 Size=0x8
    };
    void  ( * UnloadHandler)();// Offset=0x88 Size=0x8
    void  ( * UninstallHandler)();// Offset=0x90 Size=0x8
    void  ( * RequestCompleteHandler)(void * ,struct _NDIS_REQUEST * ,int );// Offset=0x98 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * StatusHandlerEx)(void * ,struct _NDIS_STATUS_INDICATION * );// Offset=0xa0 Size=0x8
        void  ( * StatusHandler)(void * ,int ,void * ,unsigned int );// Offset=0xa0 Size=0x8
    };
    void  ( * StatusCompleteHandler)(void * );// Offset=0xa8 Size=0x8
    void  ( * ReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0xb0 Size=0x8
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0xb8 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * CoStatusHandlerEx)(void * ,void * ,struct _NDIS_STATUS_INDICATION * );// Offset=0xc0 Size=0x8
        void  ( * CoStatusHandler)(void * ,void * ,int ,void * ,unsigned int );// Offset=0xc0 Size=0x8
    };
    void  ( * CoAfRegisterNotifyHandler)(void * ,struct CO_ADDRESS_FAMILY * );// Offset=0xc8 Size=0x8
    void  ( * CoReceiveNetBufferListsHandler)(void * ,void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0xd0 Size=0x8
    void  ( * CoSendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0xd8 Size=0x8
    void  ( * OpenAdapterCompleteHandler)(void * ,int ,int );// Offset=0xe0 Size=0x8
    void  ( * CloseAdapterCompleteHandler)(void * ,int );// Offset=0xe8 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * SendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0xf0 Size=0x8
        void  ( * WanSendCompleteHandler)(void * ,struct _NDIS_WAN_PACKET * ,int );// Offset=0xf0 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * TransferDataCompleteHandler)(void * ,struct _NDIS_PACKET * ,int ,unsigned int );// Offset=0xf8 Size=0x8
        void  ( * WanTransferDataCompleteHandler)();// Offset=0xf8 Size=0x8
    };
    void  ( * ResetCompleteHandler)(void * ,int );// Offset=0x100 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * ReceiveHandler)(void * ,void * ,void * ,unsigned int ,void * ,unsigned int ,unsigned int );// Offset=0x108 Size=0x8
        int  ( * WanReceiveHandler)(void * ,unsigned char * ,unsigned long );// Offset=0x108 Size=0x8
    };
    void  ( * ReceiveCompleteHandler)(void * );// Offset=0x110 Size=0x8
    int  ( * ReceivePacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x118 Size=0x8
    void  ( * BindAdapterHandler)(int * ,void * ,struct _UNICODE_STRING * ,void * ,void * );// Offset=0x120 Size=0x8
    void  ( * UnbindAdapterHandler)(int * ,void * ,void * );// Offset=0x128 Size=0x8
    void  ( * CoSendCompleteHandler)(int ,void * ,struct _NDIS_PACKET * );// Offset=0x130 Size=0x8
    unsigned int  ( * CoReceivePacketHandler)(void * ,void * ,struct _NDIS_PACKET * );// Offset=0x138 Size=0x8
    void  ( * OidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x140 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x148 Size=0x20
    struct _KMUTANT Mutex;// Offset=0x168 Size=0x38
    void * MutexOwnerThread;// Offset=0x1a0 Size=0x8
    unsigned long MutexOwnerCount;// Offset=0x1a8 Size=0x4
    unsigned long MutexOwner;// Offset=0x1ac Size=0x4
    struct _UNICODE_STRING * BindDeviceName;// Offset=0x1b0 Size=0x8
    struct _UNICODE_STRING * RootDeviceName;// Offset=0x1b8 Size=0x8
    struct _NDIS_M_DRIVER_BLOCK * AssociatedMiniDriver;// Offset=0x1c0 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * BindingAdapter;// Offset=0x1c8 Size=0x8
    struct _KEVENT * DeregEvent;// Offset=0x1d0 Size=0x8
    struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;// Offset=0x1d8 Size=0xa0
    struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;// Offset=0x278 Size=0x90
    void  ( * InitiateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x308 Size=0x8
    void  ( * TerminateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x310 Size=0x8
    void  ( * UpdateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x318 Size=0x8
    void  ( * InvalidateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x320 Size=0x8
    void  ( * QueryOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x328 Size=0x8
    void  ( * IndicateOffloadEventHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * ,unsigned long );// Offset=0x330 Size=0x8
    void  ( * TcpOffloadSendCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x338 Size=0x8
    void  ( * TcpOffloadReceiveCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x340 Size=0x8
    void  ( * TcpOffloadDisconnectCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x348 Size=0x8
    void  ( * TcpOffloadForwardCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x350 Size=0x8
    void  ( * TcpOffloadEventHandler)(void * ,unsigned long ,unsigned long );// Offset=0x358 Size=0x8
    int  ( * TcpOffloadReceiveIndicateHandler)(void * ,struct _NET_BUFFER_LIST * ,int ,unsigned long * );// Offset=0x360 Size=0x8
    void  ( * DirectOidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x368 Size=0x8
    int  ( * AllocateSharedMemoryHandler)(void * ,struct _NDIS_SHARED_MEMORY_PARAMETERS * ,void ** );// Offset=0x370 Size=0x8
    void  ( * FreeSharedMemoryHandler)(void * ,void * );// Offset=0x378 Size=0x8
    void * AllocateSharedMemoryContext;// Offset=0x380 Size=0x8
    struct _UNICODE_STRING ImageName;// Offset=0x388 Size=0x10
    class KRef<NDIS_BIND_PROTOCOL_DRIVER> Bind;// Offset=0x398 Size=0x8
    class KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK> NotifyBindCompleteWorkItem;// Offset=0x3a0 Size=0x38
    void NotifyBindComplete();
    void _NDIS_PROTOCOL_BLOCK();
    void ~_NDIS_PROTOCOL_BLOCK();
    void * __vecDelDtor(unsigned int );
};
