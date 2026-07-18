struct _EX_FAST_REF// Size=0x8 (Id=121)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

struct _OBP_SYSTEM_DOS_DEVICE_STATE// Size=0x6c (Id=792)
{
    unsigned long GlobalDeviceMap;// Offset=0x0 Size=0x4
    unsigned long LocalDeviceCount[26];// Offset=0x4 Size=0x68
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=112)
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

struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _OBJECT_NAMESPACE_LOOKUPTABLE// Size=0x260 (Id=855)
{
    struct _LIST_ENTRY HashBuckets[37];// Offset=0x0 Size=0x250
    struct _EX_PUSH_LOCK Lock;// Offset=0x250 Size=0x8
    unsigned long NumberOfPrivateSpaces;// Offset=0x258 Size=0x4
};

struct _OBP_SILODRIVERSTATE// Size=0x2e0 (Id=773)
{
    struct _EX_FAST_REF SystemDeviceMap;// Offset=0x0 Size=0x8
    struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;// Offset=0x8 Size=0x6c
    struct _EX_PUSH_LOCK DeviceMapLock;// Offset=0x78 Size=0x8
    struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;// Offset=0x80 Size=0x260
};

struct _SEP_SILOSTATE// Size=0x30 (Id=639)
{
    struct _SEP_LOGON_SESSION_REFERENCES * SystemLogonSession;// Offset=0x0 Size=0x8
    struct _SEP_LOGON_SESSION_REFERENCES * AnonymousLogonSession;// Offset=0x8 Size=0x8
    void * AnonymousLogonToken;// Offset=0x10 Size=0x8
    void * AnonymousLogonTokenNoEveryone;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING * UncSystemPaths;// Offset=0x20 Size=0x8
    struct _CI_NGEN_PATHS * NgenPaths;// Offset=0x28 Size=0x8
};

struct _SEP_RM_LSA_CONNECTION_STATE// Size=0x30 (Id=693)
{
    void * LsaProcessHandle;// Offset=0x0 Size=0x8
    void * LsaCommandPortHandle;// Offset=0x8 Size=0x8
    void * SepRmThreadHandle;// Offset=0x10 Size=0x8
    void * RmCommandPortHandle;// Offset=0x18 Size=0x8
    void * RmCommandServerPortHandle;// Offset=0x20 Size=0x8
    unsigned char LsaCommandPortActive;// Offset=0x28 Size=0x1
};

struct _WNF_LOCK// Size=0x8 (Id=793)
{
    struct _EX_PUSH_LOCK PushLock;// Offset=0x0 Size=0x8
};

struct _WNF_SILODRIVERSTATE// Size=0x38 (Id=754)
{
    struct _WNF_SCOPE_MAP * ScopeMap;// Offset=0x0 Size=0x8
    void * PermanentNameStoreRootKey;// Offset=0x8 Size=0x8
    void * PersistentNameStoreRootKey;// Offset=0x10 Size=0x8
    long long PermanentNameSequenceNumber;// Offset=0x18 Size=0x8
    struct _WNF_LOCK PermanentNameSequenceNumberLock;// Offset=0x20 Size=0x8
    long long PermanentNameSequenceNumberPool;// Offset=0x28 Size=0x8
    long long RuntimeNameSequenceNumber;// Offset=0x30 Size=0x8
};

struct _DBGK_SILOSTATE// Size=0x20 (Id=737)
{
    struct _EX_PUSH_LOCK ErrorPortLock;// Offset=0x0 Size=0x8
    struct _DBGKP_ERROR_PORT * ErrorPort;// Offset=0x8 Size=0x8
    struct _EPROCESS * ErrorProcess;// Offset=0x10 Size=0x8
    struct _KEVENT * ErrorPortRegisteredEvent;// Offset=0x18 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=44)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _CPTABLEINFO// Size=0x40 (Id=783)
{
    unsigned short CodePage;// Offset=0x0 Size=0x2
    unsigned short MaximumCharacterSize;// Offset=0x2 Size=0x2
    unsigned short DefaultChar;// Offset=0x4 Size=0x2
    unsigned short UniDefaultChar;// Offset=0x6 Size=0x2
    unsigned short TransDefaultChar;// Offset=0x8 Size=0x2
    unsigned short TransUniDefaultChar;// Offset=0xa Size=0x2
    unsigned short DBCSCodePage;// Offset=0xc Size=0x2
    unsigned char LeadByte[12];// Offset=0xe Size=0xc
    unsigned short * MultiByteTable;// Offset=0x20 Size=0x8
    void * WideCharTable;// Offset=0x28 Size=0x8
    unsigned short * DBCSRanges;// Offset=0x30 Size=0x8
    unsigned short * DBCSOffsets;// Offset=0x38 Size=0x8
};

struct _RTL_NLS_STATE// Size=0xb8 (Id=695)
{
    struct _CPTABLEINFO DefaultAcpTableInfo;// Offset=0x0 Size=0x40
    struct _CPTABLEINFO DefaultOemTableInfo;// Offset=0x40 Size=0x40
    unsigned short * ActiveCodePageData;// Offset=0x80 Size=0x8
    unsigned short * OemCodePageData;// Offset=0x88 Size=0x8
    unsigned short * LeadByteInfo;// Offset=0x90 Size=0x8
    unsigned short * OemLeadByteInfo;// Offset=0x98 Size=0x8
    unsigned short * CaseMappingData;// Offset=0xa0 Size=0x8
    unsigned short * UnicodeUpcaseTable844;// Offset=0xa8 Size=0x8
    unsigned short * UnicodeLowercaseTable844;// Offset=0xb0 Size=0x8
};

enum _SERVERSILO_STATE
{
    SERVERSILO_INITING=0,
    SERVERSILO_STARTED=1,
    SERVERSILO_SHUTTING_DOWN=2,
    SERVERSILO_TERMINATING=3,
    SERVERSILO_TERMINATED=4
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=110)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _GUID// Size=0x10 (Id=56)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CRITICAL_PROCESS_EXCEPTION_DATA// Size=0x48 (Id=757)
{
    struct _GUID ReportId;// Offset=0x0 Size=0x10
    struct _UNICODE_STRING ModuleName;// Offset=0x10 Size=0x10
    unsigned long ModuleTimestamp;// Offset=0x20 Size=0x4
    unsigned long ModuleSize;// Offset=0x24 Size=0x4
    unsigned long long Offset;// Offset=0x28 Size=0x8
    unsigned long long TerminatingProcessId;// Offset=0x30 Size=0x8
    unsigned long long TerminatingProcessSequenceNumber;// Offset=0x38 Size=0x8
    unsigned long long TerminatingThreadId;// Offset=0x40 Size=0x8
};

struct _ESERVERSILO_GLOBALS// Size=0x5b0 (Id=627)
{
    struct _OBP_SILODRIVERSTATE ObSiloState;// Offset=0x0 Size=0x2e0
    struct _SEP_SILOSTATE SeSiloState;// Offset=0x2e0 Size=0x30
    struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;// Offset=0x310 Size=0x30
    struct _ETW_SILODRIVERSTATE * EtwSiloState;// Offset=0x340 Size=0x8
    struct _EPROCESS * PspSessionLeaderProcess;// Offset=0x348 Size=0x8
    struct _EPROCESS * ExpDefaultErrorPortProcess;// Offset=0x350 Size=0x8
    void * ExpDefaultErrorPort;// Offset=0x358 Size=0x8
    unsigned long HardErrorState;// Offset=0x360 Size=0x4
    struct _EXP_LICENSE_STATE * ExpLicenseState;// Offset=0x368 Size=0x8
    struct _WNF_SILODRIVERSTATE WnfSiloState;// Offset=0x370 Size=0x38
    struct _DBGK_SILOSTATE DbgkSiloState;// Offset=0x3a8 Size=0x20
    struct _UNICODE_STRING PsProtectedCurrentDirectory;// Offset=0x3c8 Size=0x10
    struct _UNICODE_STRING PsProtectedEnvironment;// Offset=0x3d8 Size=0x10
    void * ApiSetSection;// Offset=0x3e8 Size=0x8
    void * ApiSetSchema;// Offset=0x3f0 Size=0x8
    unsigned char OneCoreForwardersEnabled;// Offset=0x3f8 Size=0x1
    struct _NLS_STATE * NlsState;// Offset=0x400 Size=0x8
    struct _RTL_NLS_STATE RtlNlsState;// Offset=0x408 Size=0xb8
    void * ImgFileExecOptions;// Offset=0x4c0 Size=0x8
    struct _EX_TIMEZONE_STATE * ExTimeZoneState;// Offset=0x4c8 Size=0x8
    struct _UNICODE_STRING NtSystemRoot;// Offset=0x4d0 Size=0x10
    struct _UNICODE_STRING SiloRootDirectoryName;// Offset=0x4e0 Size=0x10
    struct _PSP_STORAGE * Storage;// Offset=0x4f0 Size=0x8
    enum _SERVERSILO_STATE State;// Offset=0x4f8 Size=0x4
    long ExitStatus;// Offset=0x4fc Size=0x4
    struct _KEVENT * DeleteEvent;// Offset=0x500 Size=0x8
    struct _SILO_USER_SHARED_DATA * UserSharedData;// Offset=0x508 Size=0x8
    void * UserSharedSection;// Offset=0x510 Size=0x8
    struct _WORK_QUEUE_ITEM TerminateWorkItem;// Offset=0x518 Size=0x20
    unsigned long ContainerBuildNumber;// Offset=0x538 Size=0x4
    long CriticalProcessExited;// Offset=0x53c Size=0x4
    long CriticalProcessStatus;// Offset=0x540 Size=0x4
    unsigned char CriticalProcessName[15];// Offset=0x544 Size=0xf
    struct _CRITICAL_PROCESS_EXCEPTION_DATA CriticalProcessExceptionData;// Offset=0x558 Size=0x48
    unsigned long RtlFunctionalityCache[4];// Offset=0x5a0 Size=0x10
};
