struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_RANGE_LIST// Size=0x20 (Id=586)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long Count;// Offset=0x14 Size=0x4
    unsigned long Stamp;// Offset=0x18 Size=0x4
};

struct _PROCESSOR_NUMBER// Size=0x4 (Id=255)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_642// Size=0x10 (Id=642)
{
    unsigned long LogicalApicId;// Offset=0x0 Size=0x4
    unsigned long ClusterId;// Offset=0x4 Size=0x4
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x8 Size=0x4
    unsigned long MaxClusterSize;// Offset=0xc Size=0x4
};

struct _HAL_INTERRUPT_TARGET_INFORMATION// Size=0x1c (Id=643)
{
    enum HAL_INTERRUPT_TARGET_TYPE Type;// Offset=0x0 Size=0x4
    struct _PROCESSOR_NUMBER ProcessorNumber;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    struct _unnamed_642 Apic;// Offset=0xc Size=0x10
};

struct _PROCESSOR_SINK_INFO// Size=0x20 (Id=482)
{
    unsigned long ApicId;// Offset=0x0 Size=0x4
    struct _HAL_INTERRUPT_TARGET_INFORMATION TargetInfo;// Offset=0x4 Size=0x1c
};

struct _PROCESSOR_INSTANCE// Size=0x70 (Id=256)
{
    struct _RTL_RANGE_LIST IdtEntryState;// Offset=0x0 Size=0x20
    struct _RTL_RANGE_LIST PossibleIdtEntryState;// Offset=0x20 Size=0x20
    struct _PROCESSOR_SINK_INFO ProcessorSinkInfo;// Offset=0x40 Size=0x20
    struct _DEVICE_OBJECT * ProcessorDevice;// Offset=0x60 Size=0x8
    struct _PROCESSOR_NUMBER Number;// Offset=0x68 Size=0x4
};
