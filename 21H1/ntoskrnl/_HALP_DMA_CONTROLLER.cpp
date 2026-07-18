struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DMA_FUNCTION_TABLE// Size=0x50 (Id=328)
{
    void  ( * InitializeController)(void * );// Offset=0x0 Size=0x8
    unsigned char  ( * ValidateRequestLineBinding)(void * ,struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION * );// Offset=0x8 Size=0x8
    unsigned long  ( * QueryMaxFragments)(void * ,unsigned long ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * ProgramChannel)(void * ,unsigned long ,unsigned long ,struct _DMA_SCATTER_GATHER_LIST * ,union _LARGE_INTEGER ,unsigned char ,unsigned char );// Offset=0x18 Size=0x8
    long  ( * ConfigureChannel)(void * ,unsigned long ,unsigned long ,void * );// Offset=0x20 Size=0x8
    void  ( * FlushChannel)(void * ,unsigned long );// Offset=0x28 Size=0x8
    unsigned char  ( * HandleInterrupt)(void * ,unsigned long * ,enum _DMA_INTERRUPT_TYPE * );// Offset=0x30 Size=0x8
    unsigned long  ( * ReadDmaCounter)(void * ,unsigned long );// Offset=0x38 Size=0x8
    void  ( * ReportCommonBuffer)(void * ,unsigned long ,void * ,union _LARGE_INTEGER );// Offset=0x40 Size=0x8
    unsigned char  ( * CancelTransfer)(void * ,unsigned long );// Offset=0x48 Size=0x8
};

enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown=0,
    InterruptActiveHigh=1,
    InterruptRisingEdge=1,
    InterruptActiveLow=2,
    InterruptFallingEdge=2,
    InterruptActiveBoth=3,
    InterruptActiveBothTriggerLow=3,
    InterruptActiveBothTriggerHigh=4
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _UNICODE_STRING// Size=0x10 (Id=415)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _HALP_DMA_CONTROLLER// Size=0xe0 (Id=241)
{
    struct _LIST_ENTRY Controllers;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY AdapterList;// Offset=0x10 Size=0x10
    unsigned long ControllerId;// Offset=0x20 Size=0x4
    unsigned long MinimumRequestLine;// Offset=0x24 Size=0x4
    unsigned long MaximumRequestLine;// Offset=0x28 Size=0x4
    unsigned long ChannelCount;// Offset=0x2c Size=0x4
    unsigned long ScatterGatherLimit;// Offset=0x30 Size=0x4
    struct _HALP_DMA_CHANNEL * Channels;// Offset=0x38 Size=0x8
    void * ExtensionData;// Offset=0x40 Size=0x8
    unsigned char CacheCoherent;// Offset=0x48 Size=0x1
    unsigned long DmaAddressWidth;// Offset=0x4c Size=0x4
    struct _DMA_FUNCTION_TABLE Operations;// Offset=0x50 Size=0x50
    unsigned long SupportedPortWidths;// Offset=0xa0 Size=0x4
    unsigned long MinimumTransferUnit;// Offset=0xa4 Size=0x4
    unsigned long long Lock;// Offset=0xa8 Size=0x8
    unsigned char Irql;// Offset=0xb0 Size=0x1
    unsigned char GeneratesInterrupt;// Offset=0xb1 Size=0x1
    long Gsi;// Offset=0xb4 Size=0x4
    enum _KINTERRUPT_POLARITY InterruptPolarity;// Offset=0xb8 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0xbc Size=0x4
    struct _UNICODE_STRING ResourceId;// Offset=0xc0 Size=0x10
    struct POHANDLE__ * PowerHandle;// Offset=0xd0 Size=0x8
    unsigned char PowerActive;// Offset=0xd8 Size=0x1
};
