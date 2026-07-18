struct _RAID_UNIT_ATTRIBUTES// Size=0x4 (Id=471)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VmPassThroughLun:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceAttentionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AsyncNotificationSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long D3ColdNotSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DefaultWriteCacheEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};
