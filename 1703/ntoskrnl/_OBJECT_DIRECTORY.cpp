struct _EX_PUSH_LOCK// Size=0x8 (Id=83)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _OBJECT_DIRECTORY// Size=0x158 (Id=510)
{
    struct _OBJECT_DIRECTORY_ENTRY * HashBuckets[37];// Offset=0x0 Size=0x128
    struct _EX_PUSH_LOCK Lock;// Offset=0x128 Size=0x8
    struct _DEVICE_MAP * DeviceMap;// Offset=0x130 Size=0x8
    struct _OBJECT_DIRECTORY * ShadowDirectory;// Offset=0x138 Size=0x8
    void * NamespaceEntry;// Offset=0x140 Size=0x8
    void * SessionObject;// Offset=0x148 Size=0x8
    unsigned long Flags;// Offset=0x150 Size=0x4
    unsigned long SessionId;// Offset=0x154 Size=0x4
};
