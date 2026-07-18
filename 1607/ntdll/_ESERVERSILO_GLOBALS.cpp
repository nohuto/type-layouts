struct _OBP_SYSTEM_DOS_DEVICE_STATE// Size=0x6c (Id=595)
{
    unsigned long GlobalDeviceMap;// Offset=0x0 Size=0x4
    unsigned long LocalDeviceCount[26];// Offset=0x4 Size=0x68
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=81)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _OBJECT_NAMESPACE_LOOKUPTABLE// Size=0x260 (Id=635)
{
    struct _LIST_ENTRY HashBuckets[37];// Offset=0x0 Size=0x250
    struct _EX_PUSH_LOCK Lock;// Offset=0x250 Size=0x8
    unsigned long NumberOfPrivateSpaces;// Offset=0x258 Size=0x4
};

struct _OBP_SILODRIVERSTATE// Size=0x2e0 (Id=586)
{
    struct _DEVICE_MAP * SystemDeviceMap;// Offset=0x0 Size=0x8
    struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;// Offset=0x8 Size=0x6c
    struct _EX_PUSH_LOCK DeviceMapLock;// Offset=0x78 Size=0x8
    struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;// Offset=0x80 Size=0x260
};

struct _SEP_SILOSTATE// Size=0x20 (Id=517)
{
    struct _SEP_LOGON_SESSION_REFERENCES * SystemLogonSession;// Offset=0x0 Size=0x8
    struct _SEP_LOGON_SESSION_REFERENCES * AnonymousLogonSession;// Offset=0x8 Size=0x8
    void * AnonymousLogonToken;// Offset=0x10 Size=0x8
    void * AnonymousLogonTokenNoEveryone;// Offset=0x18 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=72)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SEP_RM_LSA_CONNECTION_STATE// Size=0x50 (Id=549)
{
    void * LsaProcessHandle;// Offset=0x0 Size=0x8
    void * LsaCommandPortHandle;// Offset=0x8 Size=0x8
    void * SepRmThreadHandle;// Offset=0x10 Size=0x8
    void * RmCommandPortHandle;// Offset=0x18 Size=0x8
    void * RmCommandServerPortHandle;// Offset=0x20 Size=0x8
    void * LsaCommandPortSectionHandle;// Offset=0x28 Size=0x8
    union _LARGE_INTEGER LsaCommandPortSectionSize;// Offset=0x30 Size=0x8
    void * LsaViewPortMemory;// Offset=0x38 Size=0x8
    void * RmViewPortMemory;// Offset=0x40 Size=0x8
    long LsaCommandPortMemoryDelta;// Offset=0x48 Size=0x4
    unsigned char LsaCommandPortActive;// Offset=0x4c Size=0x1
};

struct _WNF_LOCK// Size=0x8 (Id=597)
{
    struct _EX_PUSH_LOCK PushLock;// Offset=0x0 Size=0x8
};

struct _WNF_SILODRIVERSTATE// Size=0x38 (Id=578)
{
    struct _WNF_SCOPE_MAP * ScopeMap;// Offset=0x0 Size=0x8
    void * PermanentNameStoreRootKey;// Offset=0x8 Size=0x8
    void * PersistentNameStoreRootKey;// Offset=0x10 Size=0x8
    long long PermanentNameSequenceNumber;// Offset=0x18 Size=0x8
    struct _WNF_LOCK PermanentNameSequenceNumberLock;// Offset=0x20 Size=0x8
    long long PermanentNameSequenceNumberPool;// Offset=0x28 Size=0x8
    long long RuntimeNameSequenceNumber;// Offset=0x30 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=26)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

enum _SERVERSILO_STATE
{
    SERVERSILO_INITING=0,
    SERVERSILO_STARTED=1,
    SERVERSILO_SHUTTING_DOWN=2,
    SERVERSILO_TERMINATING=3,
    SERVERSILO_TERMINATED=4
};

enum _NT_PRODUCT_TYPE
{
    NtProductWinNt=1,
    NtProductLanManNt=2,
    NtProductServer=3
};

struct _SILO_USER_SHARED_DATA// Size=0x20 (Id=583)
{
    unsigned long ServiceSessionId;// Offset=0x0 Size=0x4
    unsigned long ActiveConsoleId;// Offset=0x4 Size=0x4
    long long ConsoleSessionForegroundProcessId;// Offset=0x8 Size=0x8
    enum _NT_PRODUCT_TYPE NtProductType;// Offset=0x10 Size=0x4
    unsigned long SuiteMask;// Offset=0x14 Size=0x4
    unsigned char IsMultiSessionSku;// Offset=0x18 Size=0x1
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _ESERVERSILO_GLOBALS// Size=0x430 (Id=509)
{
    struct _OBP_SILODRIVERSTATE ObSiloState;// Offset=0x0 Size=0x2e0
    struct _SEP_SILOSTATE SeSiloState;// Offset=0x2e0 Size=0x20
    struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;// Offset=0x300 Size=0x50
    struct _ETW_SILODRIVERSTATE * EtwSiloState;// Offset=0x350 Size=0x8
    struct _EPROCESS * MiSessionLeaderProcess;// Offset=0x358 Size=0x8
    struct _EPROCESS * ExpDefaultErrorPortProcess;// Offset=0x360 Size=0x8
    void * ExpDefaultErrorPort;// Offset=0x368 Size=0x8
    unsigned long HardErrorState;// Offset=0x370 Size=0x4
    struct _WNF_SILODRIVERSTATE WnfSiloState;// Offset=0x378 Size=0x38
    void * ApiSetSection;// Offset=0x3b0 Size=0x8
    void * ApiSetSchema;// Offset=0x3b8 Size=0x8
    unsigned char OneCoreForwardersEnabled;// Offset=0x3c0 Size=0x1
    struct _UNICODE_STRING SiloRootDirectoryName;// Offset=0x3c8 Size=0x10
    struct _PSP_STORAGE * Storage;// Offset=0x3d8 Size=0x8
    enum _SERVERSILO_STATE State;// Offset=0x3e0 Size=0x4
    long ExitStatus;// Offset=0x3e4 Size=0x4
    struct _KEVENT * DeleteEvent;// Offset=0x3e8 Size=0x8
    struct _SILO_USER_SHARED_DATA UserSharedData;// Offset=0x3f0 Size=0x20
    struct _WORK_QUEUE_ITEM TerminateWorkItem;// Offset=0x410 Size=0x20
};
