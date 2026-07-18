struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _PPM_VETO_ACCOUNTING// Size=0x18 (Id=722)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x4 Size=0x8
    unsigned char CsAccountingBlocks;// Offset=0xc Size=0x1
    unsigned char BlocksDrips;// Offset=0xd Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x10 Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x14 Size=0x4
};
