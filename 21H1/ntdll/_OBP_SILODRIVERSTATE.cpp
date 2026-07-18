struct _OBP_SYSTEM_DOS_DEVICE_STATE// Size=0x6c (Id=708)
{
    unsigned long GlobalDeviceMap;// Offset=0x0 Size=0x4
    unsigned long LocalDeviceCount[26];// Offset=0x4 Size=0x68
};

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

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _OBJECT_NAMESPACE_LOOKUPTABLE// Size=0x130 (Id=751)
{
    struct _LIST_ENTRY HashBuckets[37];// Offset=0x0 Size=0x128
    struct _EX_PUSH_LOCK Lock;// Offset=0x128 Size=0x4
    unsigned long NumberOfPrivateSpaces;// Offset=0x12c Size=0x4
};

struct _OBP_SILODRIVERSTATE// Size=0x1a4 (Id=693)
{
    struct _DEVICE_MAP * SystemDeviceMap;// Offset=0x0 Size=0x4
    struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;// Offset=0x4 Size=0x6c
    struct _EX_PUSH_LOCK DeviceMapLock;// Offset=0x70 Size=0x4
    struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;// Offset=0x74 Size=0x130
};
