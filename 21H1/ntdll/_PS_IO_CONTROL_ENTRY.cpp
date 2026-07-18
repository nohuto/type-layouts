struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _EX_RUNDOWN_REF// Size=0x4 (Id=185)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Count;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _PS_IO_CONTROL_ENTRY// Size=0x1c (Id=412)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_BALANCED_NODE VolumeTreeNode;// Offset=0x0 Size=0xc
        struct _LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x8
        unsigned long ReservedForParentValue;// Offset=0x8 Size=0x4
    };
    unsigned long VolumeKey;// Offset=0xc Size=0x4
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x10 Size=0x4
    void * IoControl;// Offset=0x14 Size=0x4
    void * VolumeIoAttribution;// Offset=0x18 Size=0x4
};
