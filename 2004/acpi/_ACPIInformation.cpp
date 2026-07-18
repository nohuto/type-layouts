struct _LIST_ENTRY// Size=0x10 (Id=24)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPIInformation// Size=0x88 (Id=511)
{
    struct _RSDT_32 * RootSystemDescTable;// Offset=0x0 Size=0x8
    struct _FADT * FixedACPIDescTable;// Offset=0x8 Size=0x8
    struct _FACS * FirmwareACPIControlStructure;// Offset=0x10 Size=0x8
    struct _DSDT * DiffSystemDescTable;// Offset=0x18 Size=0x8
    struct _MAPIC * MultipleApicTable;// Offset=0x20 Size=0x8
    unsigned long * GlobalLock;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY GlobalLockQueue;// Offset=0x30 Size=0x10
    unsigned long long GlobalLockQueueLock;// Offset=0x40 Size=0x8
    void * GlobalLockOwnerContext;// Offset=0x48 Size=0x8
    unsigned long GlobalLockOwnerDepth;// Offset=0x50 Size=0x4
    unsigned char ACPIOnly;// Offset=0x54 Size=0x1
    unsigned char GP0_LEN;// Offset=0x55 Size=0x1
    unsigned short Gpe0Size;// Offset=0x56 Size=0x2
    unsigned long long GP1_ENABLE;// Offset=0x58 Size=0x8
    unsigned char GP1_LEN;// Offset=0x60 Size=0x1
    unsigned short Gpe1Size;// Offset=0x62 Size=0x2
    unsigned short GP1_Base_Index;// Offset=0x64 Size=0x2
    unsigned short GpeSize;// Offset=0x66 Size=0x2
    unsigned long long SMI_CMD;// Offset=0x68 Size=0x8
    unsigned short pm1_en_bits;// Offset=0x70 Size=0x2
    unsigned short pm1_wake_mask;// Offset=0x72 Size=0x2
    unsigned short pm1_wake_status;// Offset=0x74 Size=0x2
    unsigned short c2_latency;// Offset=0x76 Size=0x2
    unsigned short c3_latency;// Offset=0x78 Size=0x2
    unsigned long ACPI_Flags;// Offset=0x7c Size=0x4
    unsigned long ACPI_Capabilities;// Offset=0x80 Size=0x4
    unsigned char Dockable;// Offset=0x84 Size=0x1
    unsigned char HwReducedAcpiMode;// Offset=0x85 Size=0x1
};
