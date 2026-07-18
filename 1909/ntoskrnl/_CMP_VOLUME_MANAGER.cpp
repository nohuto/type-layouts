struct _CMSI_RW_LOCK// Size=0x8 (Id=886)
{
    void * Reserved;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CMP_VOLUME_MANAGER// Size=0x18 (Id=700)
{
    struct _CMSI_RW_LOCK VolumeContextListLock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY VolumeContextListHead;// Offset=0x8 Size=0x10
};
