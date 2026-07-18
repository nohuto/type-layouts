struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _UNICODE_STRING// Size=0x10 (Id=36)
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

struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS// Size=0xa0 (Id=574)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char MajorNdisVersion;// Offset=0x4 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x5 Size=0x1
    unsigned char MajorDriverVersion;// Offset=0x6 Size=0x1
    unsigned char MinorDriverVersion;// Offset=0x7 Size=0x1
    unsigned long Flags;// Offset=0x8 Size=0x4
    int  ( * SetOptionsHandler)(void * ,void * );// Offset=0x10 Size=0x8
    int  ( * InitializeHandlerEx)(void * ,void * ,struct _NDIS_MINIPORT_INIT_PARAMETERS * );// Offset=0x18 Size=0x8
    void  ( * HaltHandlerEx)(void * ,enum _NDIS_HALT_ACTION );// Offset=0x20 Size=0x8
    void  ( * UnloadHandler)(struct _DRIVER_OBJECT * );// Offset=0x28 Size=0x8
    int  ( * PauseHandler)(void * ,struct _NDIS_MINIPORT_PAUSE_PARAMETERS * );// Offset=0x30 Size=0x8
    int  ( * RestartHandler)(void * ,struct _NDIS_MINIPORT_RESTART_PARAMETERS * );// Offset=0x38 Size=0x8
    int  ( * OidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x40 Size=0x8
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x50 Size=0x8
    void  ( * CancelSendHandler)(void * ,void * );// Offset=0x58 Size=0x8
    unsigned char  ( * CheckForHangHandlerEx)(void * );// Offset=0x60 Size=0x8
    int  ( * ResetHandlerEx)(void * ,unsigned char * );// Offset=0x68 Size=0x8
    void  ( * DevicePnPEventNotifyHandler)(void * ,struct _NET_DEVICE_PNP_EVENT * );// Offset=0x70 Size=0x8
    void  ( * ShutdownHandlerEx)(void * ,enum _NDIS_SHUTDOWN_ACTION );// Offset=0x78 Size=0x8
    void  ( * CancelOidRequestHandler)(void * ,void * );// Offset=0x80 Size=0x8
    int  ( * DirectOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x88 Size=0x8
    void  ( * CancelDirectOidRequestHandler)(void * ,void * );// Offset=0x90 Size=0x8
    int  ( * SynchronousOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x98 Size=0x8
};

struct _NDIS50_MINIPORT_CHARACTERISTICS// Size=0xb8 (Id=1055)
{
    unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
    unsigned short Filler;// Offset=0x2 Size=0x2
    unsigned int Reserved;// Offset=0x4 Size=0x4
    unsigned char  ( * CheckForHangHandler)(void * );// Offset=0x8 Size=0x8
    void  ( * DisableInterruptHandler)(void * );// Offset=0x10 Size=0x8
    void  ( * EnableInterruptHandler)(void * );// Offset=0x18 Size=0x8
    void  ( * HaltHandler)(void * );// Offset=0x20 Size=0x8
    void  ( * HandleInterruptHandler)(void * );// Offset=0x28 Size=0x8
    int  ( * InitializeHandler)(int * ,unsigned int * ,enum _NDIS_MEDIUM * ,unsigned int ,void * ,void * );// Offset=0x30 Size=0x8
    void  ( * ISRHandler)(unsigned char * ,unsigned char * ,void * );// Offset=0x38 Size=0x8
    int  ( * QueryInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x40 Size=0x8
    int  ( * ReconfigureHandler)(int * ,void * ,void * );// Offset=0x48 Size=0x8
    int  ( * ResetHandler)(unsigned char * ,void * );// Offset=0x50 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * SendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x58 Size=0x8
        int  ( * WanSendHandler)(void * ,void * ,struct _NDIS_WAN_PACKET * );// Offset=0x58 Size=0x8
    };
    int  ( * SetInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x60 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * TransferDataHandler)(struct _NDIS_PACKET * ,unsigned int * ,void * ,void * ,unsigned int ,unsigned int );// Offset=0x68 Size=0x8
        int  ( * WanTransferDataHandler)();// Offset=0x68 Size=0x8
    };
    void  ( * ReturnPacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x70 Size=0x8
    void  ( * SendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x78 Size=0x8
    void  ( * AllocateCompleteHandler)(void * ,void * ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x80 Size=0x8
    int  ( * CoCreateVcHandler)(void * ,void * ,void ** );// Offset=0x88 Size=0x8
    int  ( * CoDeleteVcHandler)(void * );// Offset=0x90 Size=0x8
    int  ( * CoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x98 Size=0x8
    int  ( * CoDeactivateVcHandler)(void * );// Offset=0xa0 Size=0x8
    void  ( * CoSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xa8 Size=0x8
    int  ( * CoRequestHandler)(void * ,void * ,struct _NDIS_REQUEST * );// Offset=0xb0 Size=0x8
};

struct _NDIS51_MINIPORT_CHARACTERISTICS// Size=0xf0 (Id=1159)
{
    union // Size=0xb8 (Id=0)
    {
        struct _NDIS50_MINIPORT_CHARACTERISTICS Ndis50Chars;// Offset=0x0 Size=0xb8
        unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
        unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
        unsigned short Filler;// Offset=0x2 Size=0x2
        unsigned int Reserved;// Offset=0x4 Size=0x4
        unsigned char  ( * CheckForHangHandler)(void * );// Offset=0x8 Size=0x8
        void  ( * DisableInterruptHandler)(void * );// Offset=0x10 Size=0x8
        void  ( * EnableInterruptHandler)(void * );// Offset=0x18 Size=0x8
        void  ( * HaltHandler)(void * );// Offset=0x20 Size=0x8
        void  ( * HandleInterruptHandler)(void * );// Offset=0x28 Size=0x8
        int  ( * InitializeHandler)(int * ,unsigned int * ,enum _NDIS_MEDIUM * ,unsigned int ,void * ,void * );// Offset=0x30 Size=0x8
        void  ( * ISRHandler)(unsigned char * ,unsigned char * ,void * );// Offset=0x38 Size=0x8
        int  ( * QueryInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x40 Size=0x8
        int  ( * ReconfigureHandler)(int * ,void * ,void * );// Offset=0x48 Size=0x8
        int  ( * ResetHandler)(unsigned char * ,void * );// Offset=0x50 Size=0x8
        union // Size=0x8 (Id=0)
        {
            int  ( * SendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x58 Size=0x8
            int  ( * WanSendHandler)(void * ,void * ,struct _NDIS_WAN_PACKET * );// Offset=0x58 Size=0x8
        };
        int  ( * SetInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x60 Size=0x8
        union // Size=0x8 (Id=0)
        {
            int  ( * TransferDataHandler)(struct _NDIS_PACKET * ,unsigned int * ,void * ,void * ,unsigned int ,unsigned int );// Offset=0x68 Size=0x8
            int  ( * WanTransferDataHandler)();// Offset=0x68 Size=0x8
        };
        void  ( * ReturnPacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x70 Size=0x8
        void  ( * SendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x78 Size=0x8
        void  ( * AllocateCompleteHandler)(void * ,void * ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x80 Size=0x8
        int  ( * CoCreateVcHandler)(void * ,void * ,void ** );// Offset=0x88 Size=0x8
        int  ( * CoDeleteVcHandler)(void * );// Offset=0x90 Size=0x8
        int  ( * CoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x98 Size=0x8
        int  ( * CoDeactivateVcHandler)(void * );// Offset=0xa0 Size=0x8
        void  ( * CoSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xa8 Size=0x8
        int  ( * CoRequestHandler)(void * ,void * ,struct _NDIS_REQUEST * );// Offset=0xb0 Size=0x8
    };
    void  ( * CancelSendPacketsHandler)(void * ,void * );// Offset=0xb8 Size=0x8
    void  ( * PnPEventNotifyHandler)(void * ,enum _NDIS_DEVICE_PNP_EVENT ,void * ,unsigned long );// Offset=0xc0 Size=0x8
    void  ( * AdapterShutdownHandler)(void * );// Offset=0xc8 Size=0x8
    void * Reserved1;// Offset=0xd0 Size=0x8
    void * Reserved2;// Offset=0xd8 Size=0x8
    void * Reserved3;// Offset=0xe0 Size=0x8
    void * Reserved4;// Offset=0xe8 Size=0x8
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

struct _REFERENCE_EX// Size=0x18 (Id=360)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned short ReferenceCount;// Offset=0x8 Size=0x2
    unsigned char Closing;// Offset=0xa Size=0x1
    unsigned char ZeroBased;// Offset=0xb Size=0x1
    struct NDIS_REFCOUNT_HANDLE__ * RefCountTracker;// Offset=0x10 Size=0x8
};

struct _KMUTANT// Size=0x38 (Id=362)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char MutantFlags;// Offset=0x30 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x31 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Spare1:7;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x7
                unsigned char Abandoned2:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
            };
            unsigned char AbEnabled:1;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Spare2:6;// Offset=0x30 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
    void _KMUTANT(struct _KMUTANT * );
    void _KMUTANT(struct _KMUTANT & );
    struct _KMUTANT & operator=(struct _KMUTANT * );
    struct _KMUTANT & operator=(struct _KMUTANT & );
};

struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS// Size=0x90 (Id=364)
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

enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE
{
    NdisMiniportHookDriverTypeNone=0,
    NdisMiniportHookDriverTypeWdi=1,
    NdisMiniportHookDriverType_Maximum=2
};

struct _NDIS_M_DRIVER_BLOCK// Size=0x4a8 (Id=456)
{
    void _NDIS_M_DRIVER_BLOCK(struct _NDIS_M_DRIVER_BLOCK * );
    void _NDIS_M_DRIVER_BLOCK();
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_M_DRIVER_BLOCK * NextDriver;// Offset=0x8 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * MiniportQueue;// Offset=0x10 Size=0x8
    unsigned char MajorNdisVersion;// Offset=0x18 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x19 Size=0x1
    unsigned short Flags;// Offset=0x1a Size=0x2
    struct _NDIS_WRAPPER_HANDLE * NdisDriverInfo;// Offset=0x20 Size=0x8
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x28 Size=0x8
    struct _UNICODE_STRING ServiceRegPath;// Offset=0x30 Size=0x10
    void * MiniportDriverContext;// Offset=0x40 Size=0x8
    struct _NDIS_PROTOCOL_BLOCK * AssociatedProtocol;// Offset=0x48 Size=0x8
    struct _LIST_ENTRY DeviceList;// Offset=0x50 Size=0x10
    struct _NDIS_PENDING_IM_INSTANCE * PendingDeviceList;// Offset=0x60 Size=0x8
    void  ( * UnloadHandler)(struct _DRIVER_OBJECT * );// Offset=0x68 Size=0x8
    union // Size=0xa0 (Id=0)
    {
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS MiniportDriverCharacteristics;// Offset=0x70 Size=0xa0
        struct _NDIS51_MINIPORT_CHARACTERISTICS MiniportCharacteristics;// Offset=0x70 Size=0xf0
    };
    class wistd::unique_ptr<_NDIS_MINIPORT_DRIVER_CHARACTERISTICS,wistd::default_delete<_NDIS_MINIPORT_DRIVER_CHARACTERISTICS> > UnhookedCharacteristics;// Offset=0x160 Size=0x8
    struct _NDIS_WDF_CX_DRIVER_BLOCK * CxBlock;// Offset=0x168 Size=0x8
    struct _KEVENT MiniportsRemovedEvent;// Offset=0x170 Size=0x18
    struct _REFERENCE_EX Ref;// Offset=0x188 Size=0x18
    struct _KMUTANT IMStartRemoveMutex;// Offset=0x1a0 Size=0x38
    void * IMStartRemoveMutexOwnerThread;// Offset=0x1d8 Size=0x8
    unsigned long DriverVersion;// Offset=0x1e0 Size=0x4
    struct _UNICODE_STRING ServiceName;// Offset=0x1e8 Size=0x10
    int  ( * CoCreateVcHandler)(void * ,void * ,void ** );// Offset=0x1f8 Size=0x8
    int  ( * CoDeleteVcHandler)(void * );// Offset=0x200 Size=0x8
    int  ( * CoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x208 Size=0x8
    int  ( * CoDeactivateVcHandler)(void * );// Offset=0x210 Size=0x8
    void  ( * CoSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x218 Size=0x8
    int  ( * CoRequestHandler)(void * ,void * ,struct _NDIS_REQUEST * );// Offset=0x220 Size=0x8
    int  ( * CoOidRequestHandler)(void * ,void * ,struct _NDIS_OID_REQUEST * );// Offset=0x228 Size=0x8
    void  ( * InitiateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x230 Size=0x8
    void  ( * TerminateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x238 Size=0x8
    void  ( * UpdateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x240 Size=0x8
    void  ( * InvalidateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x248 Size=0x8
    void  ( * QueryOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x250 Size=0x8
    int  ( * TcpOffloadSendHandler)(void * ,void * ,struct _NET_BUFFER_LIST * );// Offset=0x258 Size=0x8
    int  ( * TcpOffloadReceiveHandler)(void * ,void * ,struct _NET_BUFFER_LIST * );// Offset=0x260 Size=0x8
    int  ( * TcpOffloadDisconnectHandler)(void * ,void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x268 Size=0x8
    int  ( * TcpOffloadForwardHandler)(void * ,void * ,struct _NET_BUFFER_LIST * );// Offset=0x270 Size=0x8
    int  ( * TcpOffloadReceiveReturnHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x278 Size=0x8
    struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS CallMgrChars;// Offset=0x280 Size=0x90
    int  ( * AddDeviceHandler)(void * ,void * );// Offset=0x310 Size=0x8
    void  ( * RemoveDeviceHandler)(void * );// Offset=0x318 Size=0x8
    int  ( * FilterResourceRequirementsHandler)(void * ,struct _IRP * );// Offset=0x320 Size=0x8
    int  ( * StartDeviceHandler)(void * ,struct _IRP * );// Offset=0x328 Size=0x8
    int  ( * OpenNDKAdapterHandler)(void * ,struct _NDIS_OPEN_NDK_ADAPTER_PARAMETERS * ,struct _NDK_ADAPTER ** );// Offset=0x330 Size=0x8
    void  ( * CloseNDKAdapterHandler)(void * ,struct _NDK_ADAPTER * );// Offset=0x338 Size=0x8
    void  ( * SysPowerNotifyHandler)(void * ,struct _NDIS_MINIPORT_SYSPOWER_NOTIFY * );// Offset=0x340 Size=0x8
    int  ( * IdleNotificationHandler)(void * ,unsigned char );// Offset=0x348 Size=0x8
    void  ( * CancelIdleNotificationHandler)(void * );// Offset=0x350 Size=0x8
    int  ( * DevicePowerNotifyHandler)(void * ,enum _DEVICE_POWER_STATE );// Offset=0x358 Size=0x8
    void  ( * ReenumerateFailedAdapterHandler)(void * );// Offset=0x360 Size=0x8
    long  ( * LiveDumpCallback)(struct NDIS_MEMORYDUMP_HANDLE__ * ,long  ( * )(struct NDIS_MEMORYDUMP_HANDLE__ * ,struct _GUID * ,void * ,unsigned long ),unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long long ,void * );// Offset=0x368 Size=0x8
    struct _UNICODE_STRING ImageName;// Offset=0x370 Size=0x10
    struct NDIS_MINIPORT_HOOK_DRIVER_HANDLE__ * HookDriverHandle;// Offset=0x380 Size=0x8
    enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE HookType;// Offset=0x388 Size=0x4
    bool HookRegistered;// Offset=0x38c Size=0x1
    int  ( * AllocateNetBufferListForwardingContextHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x390 Size=0x8
    void  ( * FreeNetBufferListForwardingContextHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x398 Size=0x8
    int  ( * AddNetBufferListDestinationHandler)(void * ,struct _NET_BUFFER_LIST * ,struct _NDIS_SWITCH_PORT_DESTINATION * );// Offset=0x3a0 Size=0x8
    int  ( * SetNetBufferListSourceHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned int ,unsigned short );// Offset=0x3a8 Size=0x8
    int  ( * GrowNetBufferListDestinationsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned int ,struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY ** );// Offset=0x3b0 Size=0x8
    void  ( * GetNetBufferListDestinationsHandler)(void * ,struct _NET_BUFFER_LIST * ,struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY ** );// Offset=0x3b8 Size=0x8
    int  ( * UpdateNetBufferListDestinationsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned int ,struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY * );// Offset=0x3c0 Size=0x8
    int  ( * CopyNetBufferListInfoHandler)(void * ,struct _NET_BUFFER_LIST * ,struct _NET_BUFFER_LIST * ,unsigned int );// Offset=0x3c8 Size=0x8
    int  ( * ReferenceSwitchNicHandler)(void * ,unsigned int ,unsigned short );// Offset=0x3d0 Size=0x8
    int  ( * DereferenceSwitchNicHandler)(void * ,unsigned int ,unsigned short );// Offset=0x3d8 Size=0x8
    int  ( * ReferenceSwitchPortHandler)(void * ,unsigned int );// Offset=0x3e0 Size=0x8
    int  ( * DereferenceSwitchPortHandler)(void * ,unsigned int );// Offset=0x3e8 Size=0x8
    void  ( * ReportFilteredNetBufferListsHandler)(void * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING * ,unsigned int ,unsigned int ,unsigned int ,struct _NET_BUFFER_LIST * ,struct _UNICODE_STRING * );// Offset=0x3f0 Size=0x8
    int  ( * SetNetBufferListSwitchContextHandler)(void * ,struct _NET_BUFFER_LIST * ,struct _NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO * ,void * );// Offset=0x3f8 Size=0x8
    void *  ( * GetNetBufferListSwitchContextHandler)(void * ,struct _NET_BUFFER_LIST * ,struct _NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO * );// Offset=0x400 Size=0x8
    long  ( * PDExtProviderRegisterClient)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct NDIS_PD_EXT_CLIENT_CONTEXT__ * ,struct _GUID * ,struct _UNICODE_STRING * ,struct _NDIS_PD_EXT_CLIENT_PARAM * ,struct _NDIS_PD_EXT_CLIENT_DISPATCH * );// Offset=0x408 Size=0x8
    void  ( * PDExtProviderDeregisterClient)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct NDIS_PD_EXT_CLIENT_CONTEXT__ * );// Offset=0x410 Size=0x8
    struct _PD_BUFFER *  ( * PDExtProviderGetFreePDBuffer)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,unsigned int ,unsigned long ,unsigned long );// Offset=0x418 Size=0x8
    void  ( * PDExtProviderReturnPDBuffer)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,unsigned long );// Offset=0x420 Size=0x8
    void  ( * PDExtProviderInjectPDBuffer)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,struct _PD_BUFFER * ,unsigned long );// Offset=0x428 Size=0x8
    long  ( * PDExtProviderCopyPDBufferInfo)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,struct _PD_BUFFER * ,unsigned long );// Offset=0x430 Size=0x8
    void *  ( * PDExtProviderGetPDBufferClientContext)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,unsigned long );// Offset=0x438 Size=0x8
    long  ( * PDExtProviderGetPDBufferDestinations)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY ** );// Offset=0x440 Size=0x8
    long  ( * PDExtProviderAddPDBufferDestination)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,struct _NDIS_SWITCH_PORT_DESTINATION * );// Offset=0x448 Size=0x8
    long  ( * PDExtProviderUpdatePDBufferDestinations)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,unsigned int ,struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY * );// Offset=0x450 Size=0x8
    union _NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO *  ( * PDExtProviderGetPDBufferForwardingDetail)(struct _PD_BUFFER * );// Offset=0x458 Size=0x8
    void  ( * PDExtProviderSetupBufferFromPDBuffer)(struct _PD_BUFFER * ,struct _PD_BUFFER * ,unsigned long ,unsigned long );// Offset=0x460 Size=0x8
    long  ( * PDExtProviderGrowPDBufferDestinations)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,struct _PD_BUFFER * ,unsigned int ,struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY ** );// Offset=0x468 Size=0x8
    long  ( * PDExtProviderGetSwitchInfo)(struct NDIS_PD_EXT_PROVIDER_CONTEXT__ * ,unsigned long * );// Offset=0x470 Size=0x8
    long  ( * PDBMCreateDomain)(struct _NDIS_PD_BM_DOMAIN_PARAMETERS * ,struct NDIS_PD_BM_DOMAIN_HANDLE__ ** );// Offset=0x478 Size=0x8
    long  ( * PDBMAddMemberToDomain)(struct NDIS_PD_BM_DOMAIN_HANDLE__ * ,struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS * ,struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ ** );// Offset=0x480 Size=0x8
    void  ( * PDBMRemoveMemberFromDomain)(struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ * );// Offset=0x488 Size=0x8
    void  ( * PDBMDeleteDomain)(struct NDIS_PD_BM_DOMAIN_HANDLE__ * );// Offset=0x490 Size=0x8
    long  ( * PDBMAllocateCommonBuffer)(struct NDIS_PD_BM_DOMAIN_HANDLE__ * ,unsigned long ,unsigned long ,unsigned long ,union _LARGE_INTEGER * ,void ** );// Offset=0x498 Size=0x8
    void  ( * PDBMFreeCommonBuffer)(struct NDIS_PD_BM_DOMAIN_HANDLE__ * ,unsigned long ,union _LARGE_INTEGER ,void * );// Offset=0x4a0 Size=0x8
    void ~_NDIS_M_DRIVER_BLOCK();
    struct _NDIS_M_DRIVER_BLOCK & operator=(struct _NDIS_M_DRIVER_BLOCK * );
    void * __vecDelDtor(unsigned int );
};
