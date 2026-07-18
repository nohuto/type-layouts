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
