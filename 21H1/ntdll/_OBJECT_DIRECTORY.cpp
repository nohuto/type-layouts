struct _EX_PUSH_LOCK// Size=0x4 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _OBJECT_DIRECTORY// Size=0xb0 (Id=750)
{
    struct _OBJECT_DIRECTORY_ENTRY * HashBuckets[37];// Offset=0x0 Size=0x94
    struct _EX_PUSH_LOCK Lock;// Offset=0x94 Size=0x4
    struct _DEVICE_MAP * DeviceMap;// Offset=0x98 Size=0x4
    struct _OBJECT_DIRECTORY * ShadowDirectory;// Offset=0x9c Size=0x4
    void * NamespaceEntry;// Offset=0xa0 Size=0x4
    void * SessionObject;// Offset=0xa4 Size=0x4
    unsigned long Flags;// Offset=0xa8 Size=0x4
    unsigned long SessionId;// Offset=0xac Size=0x4
};
