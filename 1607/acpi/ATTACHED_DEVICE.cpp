struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_541// Size=0x4 (Id=541)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _unnamed_542// Size=0x4 (Id=542)
{
    struct _unnamed_541 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_SLOT_NUMBER// Size=0x4 (Id=543)
{
    union _unnamed_542 u;// Offset=0x0 Size=0x4
};

struct ATTACHED_DEVICE// Size=0x38 (Id=387)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _NSObjRef * AcpiObj;// Offset=0x10 Size=0x8
    struct _NSObjRef * PrtObj;// Offset=0x18 Size=0x8
    struct _PCI_SLOT_NUMBER PciSlot;// Offset=0x20 Size=0x4
    unsigned long PciVenDev;// Offset=0x24 Size=0x4
    unsigned long PciSSID;// Offset=0x28 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x30 Size=0x8
};
