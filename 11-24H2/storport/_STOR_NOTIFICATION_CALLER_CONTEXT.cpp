struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=753)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _STORAGE_NOTIFICATION_GENERIC_FLAGS// Size=0x8 (Id=1322)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AvailableSpareLow:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TemperatureThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ReliabilityDegraded:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long VolatileMemoryBackupDeviceFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long DiagnosticFailure:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long PersistentInternalError:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long TransientInternalError:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long FirmwareImageLoadError:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long ControllerResetOccurred:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long DeviceFailed:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long UndefinedHealthNotification:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long UndefinedErrorNotification:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long Reserved:51;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x33
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _unnamed_899// Size=0x8 (Id=899)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long WriteToInvalidDoorbellRegister:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long InvalidDoorbellWriteValue:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ZoneDescriptorChanged:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
};

struct _STORAGE_NOTIFICATION_PROTOCOL_SPECIFIC_FLAGS// Size=0x8 (Id=900)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_899 NVMe;// Offset=0x0 Size=0x8
        unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
    };
};

struct _STORAGE_NOTIFICATION_FLAGS// Size=0x10 (Id=700)
{
    union _STORAGE_NOTIFICATION_GENERIC_FLAGS Generic;// Offset=0x0 Size=0x8
    struct _STORAGE_NOTIFICATION_PROTOCOL_SPECIFIC_FLAGS ProtocolSpecific;// Offset=0x8 Size=0x8
};

struct _IO_CSQ// Size=0x40 (Id=694)
{
    unsigned long Type;// Offset=0x0 Size=0x4
    void  ( * CsqInsertIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x8 Size=0x8
    void  ( * CsqRemoveIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x10 Size=0x8
    struct _IRP *  ( * CsqPeekNextIrp)(struct _IO_CSQ * ,struct _IRP * ,void * );// Offset=0x18 Size=0x8
    void  ( * CsqAcquireLock)(struct _IO_CSQ * ,unsigned char * );// Offset=0x20 Size=0x8
    void  ( * CsqReleaseLock)(struct _IO_CSQ * ,unsigned char );// Offset=0x28 Size=0x8
    void  ( * CsqCompleteCanceledIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x30 Size=0x8
    void * ReservePointer;// Offset=0x38 Size=0x8
};

struct _STOR_NOTIFICATION_CALLER_CONTEXT// Size=0xb0 (Id=693)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _GUID CallerGuid;// Offset=0x10 Size=0x10
    unsigned short ContextFlags;// Offset=0x20 Size=0x2
    unsigned short PendingIrpRequestsMaxCount;// Offset=0x22 Size=0x2
    short PendingIrpRequestsCount;// Offset=0x24 Size=0x2
    unsigned char Reserved0[2];// Offset=0x26 Size=0x2
    long NotificationsLost;// Offset=0x28 Size=0x4
    struct _STORAGE_NOTIFICATION_FLAGS EventFlags;// Offset=0x30 Size=0x10
    unsigned long Reserved1[4];// Offset=0x40 Size=0x10
    struct _IO_CSQ PendingIrpListCsq;// Offset=0x50 Size=0x40
    unsigned long long PendingIrpListLock;// Offset=0x90 Size=0x8
    struct _LIST_ENTRY PendingIrpRequests;// Offset=0x98 Size=0x10
    void * DeviceObject;// Offset=0xa8 Size=0x8
};
