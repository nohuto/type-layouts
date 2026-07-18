struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CMSI_RW_LOCK// Size=0x8 (Id=770)
{
    void * Reserved;// Offset=0x0 Size=0x8
};

struct _CMP_VOLUME_CONTEXT// Size=0x48 (Id=573)
{
    struct _LIST_ENTRY VolumeContextListEntry;// Offset=0x0 Size=0x10
    struct _CMP_VOLUME_MANAGER * VolumeManager;// Offset=0x10 Size=0x8
    long long RefCount;// Offset=0x18 Size=0x8
    struct _GUID VolumeGuid;// Offset=0x20 Size=0x10
    void * VolumeFileObject;// Offset=0x30 Size=0x8
    struct _CMSI_RW_LOCK VolumeContextLock;// Offset=0x38 Size=0x8
    unsigned char DeviceUsageNotificationSent;// Offset=0x40 Size=0x1
};
