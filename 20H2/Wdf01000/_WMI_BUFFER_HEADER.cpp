struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=115)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ETW_BUFFER_CONTEXT// Size=0x4 (Id=2033)
{
    union // Size=0x2 (Id=0)
    {
        unsigned char ProcessorNumber;// Offset=0x0 Size=0x1
        unsigned char Alignment;// Offset=0x1 Size=0x1
        unsigned short ProcessorIndex;// Offset=0x0 Size=0x2
    };
    unsigned short LoggerId;// Offset=0x2 Size=0x2
};

enum _ETW_BUFFER_STATE
{
    EtwBufferStateFree=0,
    EtwBufferStateGeneralLogging=1,
    EtwBufferStateCSwitch=2,
    EtwBufferStateFlush=3,
    EtwBufferStatePendingCompression=4,
    EtwBufferStateCompressed=5,
    EtwBufferStatePlaceholder=6,
    EtwBufferStateMaximum=7
};

struct _ETW_REF_CLOCK// Size=0x10 (Id=2318)
{
    union _LARGE_INTEGER StartTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER StartPerfClock;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3394)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WMI_BUFFER_HEADER// Size=0x48 (Id=1750)
{
    unsigned long BufferSize;// Offset=0x0 Size=0x4
    unsigned long SavedOffset;// Offset=0x4 Size=0x4
    unsigned long CurrentOffset;// Offset=0x8 Size=0x4
    long ReferenceCount;// Offset=0xc Size=0x4
    union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    long long SequenceNumber;// Offset=0x18 Size=0x8
    union // Size=0x28 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long ClockType:3;// Offset=0x20 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long Frequency:61;// Offset=0x20 Size=0x8 BitOffset=0x3 BitSize=0x3d
        };
        struct _SINGLE_LIST_ENTRY SlistEntry;// Offset=0x20 Size=0x8
        struct _WMI_BUFFER_HEADER * NextBuffer;// Offset=0x20 Size=0x8
    };
    struct _ETW_BUFFER_CONTEXT ClientContext;// Offset=0x28 Size=0x4
    enum _ETW_BUFFER_STATE State;// Offset=0x2c Size=0x4
    unsigned long Offset;// Offset=0x30 Size=0x4
    unsigned short BufferFlag;// Offset=0x34 Size=0x2
    unsigned short BufferType;// Offset=0x36 Size=0x2
    union // Size=0x48 (Id=0)
    {
        unsigned long Padding1[4];// Offset=0x38 Size=0x10
        struct _ETW_REF_CLOCK ReferenceTime;// Offset=0x38 Size=0x10
        struct _LIST_ENTRY GlobalEntry;// Offset=0x38 Size=0x10
        void * Pointer0;// Offset=0x38 Size=0x8
        void * Pointer1;// Offset=0x40 Size=0x8
    };
    void _WMI_BUFFER_HEADER(struct _WMI_BUFFER_HEADER * );
    void _WMI_BUFFER_HEADER(struct _WMI_BUFFER_HEADER & );
    struct _WMI_BUFFER_HEADER & operator=(struct _WMI_BUFFER_HEADER * );
    struct _WMI_BUFFER_HEADER & operator=(struct _WMI_BUFFER_HEADER & );
};
