struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_OID_REQUEST_FLAGS// Size=0x4 (Id=813)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Completed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FreeRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OidInTable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SignalEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CoNdis:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FromProtocol:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long FromFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Passthrough:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long LastRestoreFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long OnlyDerefOpen:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SignalAndExit:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long MpSaveBuf:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long DownLevel:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long Cloned:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long Mandatory:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long SentToMiniport:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SentToFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ForReset:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ForRestore:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long ForMpDirect:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long DirectRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long RevisionChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long SkipPreProc:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long SkipPostProc:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long SkipSourceCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long SourceCompletionOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long InternalClone:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Remainder:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=729)
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

struct _KEVENT// Size=0x18 (Id=63)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    void _KEVENT(struct _KEVENT * );
    void _KEVENT(struct _KEVENT & );
    struct _KEVENT & operator=(struct _KEVENT * );
    struct _KEVENT & operator=(struct _KEVENT & );
};

struct _NDIS_OID_REQUEST_RESERVED// Size=0x60 (Id=452)
{
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
        struct _NDIS_OID_REQUEST * NextRequest;// Offset=0x0 Size=0x8
        int Status;// Offset=0x8 Size=0x4
        struct _NDIS_OID_REQUEST_FLAGS Flags;// Offset=0x10 Size=0x4
    };
    unsigned long OidTableIndex;// Offset=0x14 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _NDIS_OID_REQUEST * OidRequest;// Offset=0x18 Size=0x8
        struct _NDIS_REQUEST * Request;// Offset=0x18 Size=0x8
    };
    void * SourceHandle;// Offset=0x20 Size=0x8
    union // Size=0x48 (Id=0)
    {
        struct _KEVENT Event;// Offset=0x28 Size=0x18
        void * NdisVcHandle;// Offset=0x40 Size=0x8
        struct _NDIS_OID_REQUEST_RESERVED::_unnamed_968::<unnamed-type-CoNdis> CoNdis;// Offset=0x28 Size=0x20
    };
    union // Size=0x60 (Id=0)
    {
        unsigned long long StartCycle;// Offset=0x48 Size=0x8
        struct _NDIS_REQUEST_XLATION_CONTEXT * pOidXlationContext;// Offset=0x48 Size=0x8
        unsigned long OriginalBufferLength;// Offset=0x50 Size=0x4
        unsigned long SavedOid;// Offset=0x48 Size=0x4
        void * SavedInfoBuf;// Offset=0x50 Size=0x8
        unsigned long SavedInfoBufLen;// Offset=0x58 Size=0x4
        unsigned long RequestBuffer;// Offset=0x5c Size=0x4
        struct _NDIS_OID_REQUEST_RESERVED::_unnamed_972::<unnamed-type-IovContext> IovContext;// Offset=0x48 Size=0x10
        struct _NDIS_OID_REQUEST_RESERVED::_unnamed_973::<unnamed-type-PMContext> PMContext;// Offset=0x48 Size=0x18
    };
};
