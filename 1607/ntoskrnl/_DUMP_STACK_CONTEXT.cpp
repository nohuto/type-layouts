struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_1464// Size=0x8 (Id=1464)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long CheckSum;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=198)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_1465// Size=0x10 (Id=1465)
{
    struct _GUID DiskId;// Offset=0x0 Size=0x10
};

union _unnamed_1466// Size=0x10 (Id=1466)
{
    struct _unnamed_1464 Mbr;// Offset=0x0 Size=0x8
    struct _unnamed_1465 Gpt;// Offset=0x0 Size=0x10
};

struct _DUMP_INITIALIZATION_CONTEXT// Size=0x108 (Id=1468)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    void * MemoryBlock;// Offset=0x8 Size=0x8
    void * CommonBuffer[2];// Offset=0x10 Size=0x10
    union _LARGE_INTEGER PhysicalAddress[2];// Offset=0x20 Size=0x10
    void  ( * StallRoutine)(unsigned long );// Offset=0x30 Size=0x8
    unsigned char  ( * OpenRoutine)(union _LARGE_INTEGER );// Offset=0x38 Size=0x8
    long  ( * WriteRoutine)(union _LARGE_INTEGER * ,struct _MDL * );// Offset=0x40 Size=0x8
    void  ( * FinishRoutine)();// Offset=0x48 Size=0x8
    struct _ADAPTER_OBJECT * AdapterObject;// Offset=0x50 Size=0x8
    void * MappedRegisterBase;// Offset=0x58 Size=0x8
    void * PortConfiguration;// Offset=0x60 Size=0x8
    unsigned char CrashDump;// Offset=0x68 Size=0x1
    unsigned char MarkMemoryOnly;// Offset=0x69 Size=0x1
    unsigned char HiberResume;// Offset=0x6a Size=0x1
    unsigned char Reserved1;// Offset=0x6b Size=0x1
    unsigned long MaximumTransferSize;// Offset=0x6c Size=0x4
    unsigned long CommonBufferSize;// Offset=0x70 Size=0x4
    void * TargetAddress;// Offset=0x78 Size=0x8
    long  ( * WritePendingRoutine)(long ,union _LARGE_INTEGER * ,struct _MDL * ,void * );// Offset=0x80 Size=0x8
    unsigned long PartitionStyle;// Offset=0x88 Size=0x4
    union _unnamed_1466 DiskInfo;// Offset=0x8c Size=0x10
    long  ( * ReadRoutine)(long ,union _LARGE_INTEGER * ,struct _MDL * );// Offset=0xa0 Size=0x8
    long  ( * GetDriveTelemetryRoutine)(unsigned long ,unsigned long ,void * ,unsigned long );// Offset=0xa8 Size=0x8
    unsigned long LogSectionTruncateSize;// Offset=0xb0 Size=0x4
    unsigned long Parameters[16];// Offset=0xb4 Size=0x40
    void  ( * GetTransferSizesRoutine)(unsigned long * ,unsigned long * );// Offset=0xf8 Size=0x8
    void  ( * DumpNotifyRoutine)(enum _DUMP_EVENTS ,void * ,unsigned long );// Offset=0x100 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STRING// Size=0x10 (Id=27)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    char * Buffer;// Offset=0x8 Size=0x8
};

enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
    DeviceUsageTypeUndefined=0,
    DeviceUsageTypePaging=1,
    DeviceUsageTypeHibernation=2,
    DeviceUsageTypeDumpFile=3,
    DeviceUsageTypeBoot=4,
    DeviceUsageTypePostDisplay=5
};

struct _DUMP_STACK_CONTEXT// Size=0x178 (Id=1424)
{
    struct _DUMP_INITIALIZATION_CONTEXT Init;// Offset=0x0 Size=0x108
    union _LARGE_INTEGER PartitionOffset;// Offset=0x108 Size=0x8
    void * DumpPointers;// Offset=0x110 Size=0x8
    unsigned long PointersLength;// Offset=0x118 Size=0x4
    wchar_t * ModulePrefix;// Offset=0x120 Size=0x8
    struct _LIST_ENTRY DriverList;// Offset=0x128 Size=0x10
    struct _STRING InitMsg;// Offset=0x138 Size=0x10
    struct _STRING ProgMsg;// Offset=0x148 Size=0x10
    struct _STRING DoneMsg;// Offset=0x158 Size=0x10
    void * FileObject;// Offset=0x168 Size=0x8
    enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;// Offset=0x170 Size=0x4
};
