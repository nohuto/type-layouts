struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IOMMU_PASID_TABLE_OBJECT// Size=0x48 (Id=381)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long Domain;// Offset=0x10 Size=0x4
    struct _LIST_ENTRY DeviceListHead;// Offset=0x18 Size=0x10
    void * Table;// Offset=0x28 Size=0x8
    unsigned long PasidCount;// Offset=0x30 Size=0x4
    void * OldTable;// Offset=0x38 Size=0x8
    unsigned char DefaultPasidEnabled;// Offset=0x40 Size=0x1
    unsigned char AtsEnabled;// Offset=0x41 Size=0x1
};
