struct _OBP_SYSTEM_DOS_DEVICE_STATE// Size=0x6c (Id=654)
{
    unsigned long GlobalDeviceMap;// Offset=0x0 Size=0x4
    unsigned long LocalDeviceCount[26];// Offset=0x4 Size=0x68
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=76)
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

struct _OBP_SILODRIVERSTATE// Size=0x80 (Id=467)
{
    struct _DEVICE_MAP * SystemDeviceMap;// Offset=0x0 Size=0x8
    struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;// Offset=0x8 Size=0x6c
    struct _EX_PUSH_LOCK DeviceMapLock;// Offset=0x78 Size=0x8
};
