struct _PSP_CRITICAL_PROCESS_DEATH_INFO_HEADER// Size=0x8 (Id=2351)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _PSP_CRITICAL_PROCESS_DEATH_USER_MODULES// Size=0x28 (Id=1810)
{
    struct _LDR_DATA_TABLE_ENTRY * Modules;// Offset=0x0 Size=0x8
    unsigned long ModuleCount;// Offset=0x8 Size=0x4
    unsigned long BufferSize;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ModulesCollected:1;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x10 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
        unsigned long AllFlags;// Offset=0x10 Size=0x4
    };
    unsigned long FramesWalkedCount;// Offset=0x14 Size=0x4
    unsigned long ModulesInspectedCount;// Offset=0x18 Size=0x4
    unsigned long ErrorCode;// Offset=0x1c Size=0x4
    void * Buffer;// Offset=0x20 Size=0x8
};

struct _NT_TIB// Size=0x38 (Id=223)
{
    struct _EXCEPTION_REGISTRATION_RECORD * ExceptionList;// Offset=0x0 Size=0x8
    void * StackBase;// Offset=0x8 Size=0x8
    void * StackLimit;// Offset=0x10 Size=0x8
    void * SubSystemTib;// Offset=0x18 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * FiberData;// Offset=0x20 Size=0x8
        unsigned long Version;// Offset=0x20 Size=0x4
    };
    void * ArbitraryUserPointer;// Offset=0x28 Size=0x8
    struct _NT_TIB * Self;// Offset=0x30 Size=0x8
};

enum _PSP_CRITICAL_PROCESS_DEATH_ERROR_CODE
{
    PspCriticalProcessDeathErrorNone=0,
    PspCriticalProcessDeathErrorDataMismatch=1,
    PspCriticalProcessDeathErrorInvalidTid=2,
    PspCriticalProcessDeathErrorNotCritical=3,
    PspCriticalProcessDeathErrorNoTib=4,
    PspCriticalProcessDeathErrorApcNotInserted=5,
    PspCriticalProcessDeathErrorApcRemoved=6,
    PspCriticalProcessDeathErrorWoWProcess=7,
    PspCriticalProcessDeathErrorCount=8
};

struct _PSP_CRITICAL_PROCESS_DEATH_INFO_1// Size=0x88 (Id=1434)
{
    struct _PSP_CRITICAL_PROCESS_DEATH_INFO_HEADER Header;// Offset=0x0 Size=0x8
    struct _PSP_CRITICAL_PROCESS_DEATH_USER_MODULES UserModules;// Offset=0x8 Size=0x28
    struct _PSP_CRITICAL_PROCESS_DEATH_DUMP_DATA * DumpData;// Offset=0x30 Size=0x8
    struct _ETHREAD * BlamedThread;// Offset=0x38 Size=0x8
    struct _NT_TIB BlamedThreadTib;// Offset=0x40 Size=0x38
    enum _PSP_CRITICAL_PROCESS_DEATH_ERROR_CODE ErrorCode;// Offset=0x78 Size=0x4
    unsigned long UserStackPagesExaminedCount;// Offset=0x7c Size=0x4
    unsigned long UserStackPagesSavedCount;// Offset=0x80 Size=0x4
    long UserStackStatus;// Offset=0x84 Size=0x4
};
