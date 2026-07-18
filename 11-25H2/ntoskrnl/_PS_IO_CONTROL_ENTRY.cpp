struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=269)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _PS_IO_CONTROL_ENTRY// Size=0x38 (Id=1460)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE VolumeTreeNode;// Offset=0x0 Size=0x18
        struct _LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x10
        unsigned long long ReservedForParentValue;// Offset=0x10 Size=0x8
    };
    unsigned long long VolumeKey;// Offset=0x18 Size=0x8
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x20 Size=0x8
    void * IoControl;// Offset=0x28 Size=0x8
    void * VolumeIoAttribution;// Offset=0x30 Size=0x8
};
