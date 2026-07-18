struct _DUMP_ENTRY// Size=0x10 (Id=440)
{
    struct _DUMP_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _DUMP_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=281)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DUMP_ADAPTER_INFO// Size=0x70 (Id=252)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _DUMP_ENTRY Entry;// Offset=0x8 Size=0x10
    struct _GUID Id;// Offset=0x18 Size=0x10
    unsigned long Flags;// Offset=0x28 Size=0x4
    unsigned long ContextSize;// Offset=0x2c Size=0x4
    void * Context;// Offset=0x30 Size=0x8
    struct _DUMP_DRIVER_INFO * DriverInfo;// Offset=0x38 Size=0x8
    void * DmaAdapterObject;// Offset=0x40 Size=0x8
    unsigned long CommonBufferSize;// Offset=0x48 Size=0x4
    void * CommonBufferVA[2];// Offset=0x50 Size=0x10
    union _LARGE_INTEGER CommonBufferPA[2];// Offset=0x60 Size=0x10
};
