struct _PCI_SLOT_NUMBER// Size=0x4 (Id=3557)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=14268)
        {
            struct <unnamed-type-bits>// Size=0x4 (Id=14269)
            {
                unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
                unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
                unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
            };
            struct _PCI_SLOT_NUMBER::<unnamed-type-u>::<unnamed-type-bits> bits;// Offset=0x0 Size=0x4
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_SLOT_NUMBER::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _PCIBUSDATA// Size=0x50 (Id=2342)
{
    unsigned long Tag;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    void  ( * ReadConfig)(struct _BUS_HANDLER * ,struct _PCI_SLOT_NUMBER ,void * ,unsigned long ,unsigned long );// Offset=0x8 Size=0x8
    void  ( * WriteConfig)(struct _BUS_HANDLER * ,struct _PCI_SLOT_NUMBER ,void * ,unsigned long ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * Pin2Line)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,struct _PCI_SLOT_NUMBER ,struct _PCI_COMMON_CONFIG * );// Offset=0x18 Size=0x8
    void  ( * Line2Pin)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,struct _PCI_SLOT_NUMBER ,struct _PCI_COMMON_CONFIG * ,struct _PCI_COMMON_CONFIG * );// Offset=0x20 Size=0x8
    struct _PCI_SLOT_NUMBER ParentSlot;// Offset=0x28 Size=0x4
    void * Reserved[4];// Offset=0x30 Size=0x20
};
