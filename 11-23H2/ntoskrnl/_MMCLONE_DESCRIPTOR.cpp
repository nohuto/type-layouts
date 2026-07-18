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

struct _SLIST_ENTRY// Size=0x10 (Id=517)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MMCLONE_DESCRIPTOR// Size=0x70 (Id=631)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE CloneNode;// Offset=0x0 Size=0x18
        struct _MMCLONE_DESCRIPTOR * Next;// Offset=0x0 Size=0x8
        struct _MMCLONE_BLOCK * StartingCloneBlock;// Offset=0x18 Size=0x8
    };
    struct _MMCLONE_BLOCK * EndingCloneBlock;// Offset=0x20 Size=0x8
    unsigned long long NumberOfPtes;// Offset=0x28 Size=0x8
    unsigned long long NumberOfReferences;// Offset=0x30 Size=0x8
    struct _MMCLONE_HEADER * CloneHeader;// Offset=0x38 Size=0x8
    unsigned long long NonPagedPoolQuotaCharge;// Offset=0x40 Size=0x8
    struct _SLIST_ENTRY DeleteList;// Offset=0x50 Size=0x10
    unsigned long long NestingLevel;// Offset=0x60 Size=0x8
};
