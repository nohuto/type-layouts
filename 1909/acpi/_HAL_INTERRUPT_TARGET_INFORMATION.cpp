struct _PROCESSOR_NUMBER// Size=0x4 (Id=215)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _anonymous_531// Size=0xc (Id=531)
{
    unsigned long LogicalApicId;// Offset=0x0 Size=0x4
    unsigned long ClusterId;// Offset=0x4 Size=0x4
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x8 Size=0x4
};

struct _anonymous_532// Size=0xc (Id=532)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
    unsigned long MinimumIndex;// Offset=0x4 Size=0x4
    unsigned long MaximumIndex;// Offset=0x8 Size=0x4
};

struct _HAL_INTERRUPT_TARGET_INFORMATION// Size=0x18 (Id=533)
{
    enum HAL_INTERRUPT_TARGET_TYPE Type;// Offset=0x0 Size=0x4
    struct _PROCESSOR_NUMBER ProcessorNumber;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _anonymous_531 Apic;// Offset=0xc Size=0xc
        struct _anonymous_532 Irt;// Offset=0xc Size=0xc
    };
};
