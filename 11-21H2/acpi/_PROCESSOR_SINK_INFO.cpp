struct _PROCESSOR_NUMBER// Size=0x4 (Id=240)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_604// Size=0xc (Id=604)
{
    unsigned long LogicalApicId;// Offset=0x0 Size=0x4
    unsigned long ClusterId;// Offset=0x4 Size=0x4
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x8 Size=0x4
};

struct _unnamed_605// Size=0xc (Id=605)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
    unsigned long MinimumIndex;// Offset=0x4 Size=0x4
    unsigned long MaximumIndex;// Offset=0x8 Size=0x4
};

struct _HAL_INTERRUPT_TARGET_INFORMATION// Size=0x18 (Id=606)
{
    enum HAL_INTERRUPT_TARGET_TYPE Type;// Offset=0x0 Size=0x4
    struct _PROCESSOR_NUMBER ProcessorNumber;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _unnamed_604 Apic;// Offset=0xc Size=0xc
        struct _unnamed_605 Irt;// Offset=0xc Size=0xc
    };
};

struct _PROCESSOR_SINK_INFO// Size=0x1c (Id=449)
{
    unsigned long ApicId;// Offset=0x0 Size=0x4
    struct _HAL_INTERRUPT_TARGET_INFORMATION TargetInfo;// Offset=0x4 Size=0x18
};
