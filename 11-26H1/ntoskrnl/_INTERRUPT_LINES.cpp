struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _INTERRUPT_LINE_TYPE
{
    InterruptLineInvalidType=0,
    InterruptLineUnusable=1,
    InterruptLineStandardPin=2,
    InterruptLineProcessorLocal=3,
    InterruptLineSoftwareOnly=4,
    InterruptLineSoftwareOnlyProcessorLocal=5,
    InterruptLineOutputPin=6,
    InterruptLineMsi=7
};

enum _INTERRUPT_LINE_SUBTYPE
{
    InterruptLineSubTypeNone=0,
    InterruptLineSubTypeV2m=1,
    InterruptLineSubTypeLpi=2
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _INTERRUPT_LINES// Size=0x58 (Id=335)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long ControllerId;// Offset=0x10 Size=0x4
    long MinLine;// Offset=0x14 Size=0x4
    long MaxLine;// Offset=0x18 Size=0x4
    unsigned long GsiBase;// Offset=0x1c Size=0x4
    enum _INTERRUPT_LINE_TYPE Type;// Offset=0x20 Size=0x4
    enum _INTERRUPT_LINE_SUBTYPE SubType;// Offset=0x24 Size=0x4
    struct _INTERRUPT_LINE_STATE * State;// Offset=0x28 Size=0x8
    struct _INTERRUPT_LINE_INTERNAL_STATE * InternalState;// Offset=0x30 Size=0x8
    unsigned long long MsiAddress;// Offset=0x38 Size=0x8
    unsigned long MsiData;// Offset=0x40 Size=0x4
    struct _RTL_BITMAP MsiInUse;// Offset=0x48 Size=0x10
};
