struct _SLIST_ENTRY// Size=0x10 (Id=21)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _QUEUE_TAG_ENTRY// Size=0x10 (Id=190)
{
    union // Size=0x10 (Id=0)
    {
        struct _SLIST_ENTRY Entry;// Offset=0x0 Size=0x10
        void * Dummy;// Offset=0x0 Size=0x8
        unsigned long Tag;// Offset=0x8 Size=0x4
    };
};
