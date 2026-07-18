union _LARGE_INTEGER// Size=0x8 (Id=260)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12818)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=120)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WNODE_HEADER// Size=0x30 (Id=2908)
{
    unsigned long BufferSize;// Offset=0x0 Size=0x4
    unsigned long ProviderId;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long HistoricalContext;// Offset=0x8 Size=0x8
        unsigned long Version;// Offset=0x8 Size=0x4
    };
    unsigned long Linkage;// Offset=0xc Size=0x4
    union // Size=0x18 (Id=0)
    {
        unsigned long CountLost;// Offset=0x10 Size=0x4
        void * KernelHandle;// Offset=0x10 Size=0x8
        union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    };
    struct _GUID Guid;// Offset=0x18 Size=0x10
    unsigned long ClientContext;// Offset=0x28 Size=0x4
    unsigned long Flags;// Offset=0x2c Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=108)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _STRING64// Size=0x10 (Id=1728)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned long long Buffer;// Offset=0x8 Size=0x8
};

struct _WMI_LOGGER_INFORMATION// Size=0xb0 (Id=2357)
{
    struct _WNODE_HEADER Wnode;// Offset=0x0 Size=0x30
    unsigned long BufferSize;// Offset=0x30 Size=0x4
    unsigned long MinimumBuffers;// Offset=0x34 Size=0x4
    unsigned long MaximumBuffers;// Offset=0x38 Size=0x4
    unsigned long MaximumFileSize;// Offset=0x3c Size=0x4
    unsigned long LogFileMode;// Offset=0x40 Size=0x4
    unsigned long FlushTimer;// Offset=0x44 Size=0x4
    unsigned long EnableFlags;// Offset=0x48 Size=0x4
    union // Size=0x4 (Id=0)
    {
        long AgeLimit;// Offset=0x4c Size=0x4
        long FlushThreshold;// Offset=0x4c Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Wow:1;// Offset=0x50 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long QpcDeltaTracking:1;// Offset=0x50 Size=0x4 BitOffset=0x1 BitSize=0x1
        };
        unsigned long long V2Options;// Offset=0x50 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void * LogFileHandle;// Offset=0x58 Size=0x8
        unsigned long long LogFileHandle64;// Offset=0x58 Size=0x8
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfBuffers;// Offset=0x60 Size=0x4
        unsigned long InstanceCount;// Offset=0x60 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeBuffers;// Offset=0x64 Size=0x4
        unsigned long InstanceId;// Offset=0x64 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long EventsLost;// Offset=0x68 Size=0x4
        unsigned long NumberOfProcessors;// Offset=0x68 Size=0x4
    };
    unsigned long BuffersWritten;// Offset=0x6c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LogBuffersLost;// Offset=0x70 Size=0x4
        unsigned long Flags;// Offset=0x70 Size=0x4
    };
    unsigned long RealTimeBuffersLost;// Offset=0x74 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * LoggerThreadId;// Offset=0x78 Size=0x8
        unsigned long long LoggerThreadId64;// Offset=0x78 Size=0x8
    };
    union // Size=0x10 (Id=0)
    {
        struct _UNICODE_STRING LogFileName;// Offset=0x80 Size=0x10
        struct _STRING64 LogFileName64;// Offset=0x80 Size=0x10
    };
    union // Size=0x10 (Id=0)
    {
        struct _UNICODE_STRING LoggerName;// Offset=0x90 Size=0x10
        struct _STRING64 LoggerName64;// Offset=0x90 Size=0x10
    };
    unsigned long RealTimeConsumerCount;// Offset=0xa0 Size=0x4
    unsigned long SequenceNumber;// Offset=0xa4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * LoggerExtension;// Offset=0xa8 Size=0x8
        unsigned long long LoggerExtension64;// Offset=0xa8 Size=0x8
    };
};
