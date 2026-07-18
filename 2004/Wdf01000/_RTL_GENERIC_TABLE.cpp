struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_GENERIC_TABLE// Size=0x48 (Id=2707)
{
    struct _RTL_SPLAY_LINKS * TableRoot;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY InsertOrderList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY * OrderedPointer;// Offset=0x18 Size=0x8
    unsigned long WhichOrderedElement;// Offset=0x20 Size=0x4
    unsigned long NumberGenericTableElements;// Offset=0x24 Size=0x4
    enum _RTL_GENERIC_COMPARE_RESULTS  ( * CompareRoutine)(struct _RTL_GENERIC_TABLE * ,void * ,void * );// Offset=0x28 Size=0x8
    void *  ( * AllocateRoutine)(struct _RTL_GENERIC_TABLE * ,unsigned long );// Offset=0x30 Size=0x8
    void  ( * FreeRoutine)(struct _RTL_GENERIC_TABLE * ,void * );// Offset=0x38 Size=0x8
    void * TableContext;// Offset=0x40 Size=0x8
};
