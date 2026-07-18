struct _STOR_DEVICE_SUBQUEUE// Size=0x80 (Id=719)
{
    unsigned long State;// Offset=0x0 Size=0x4
    unsigned long InsertListHead;// Offset=0x4 Size=0x4
    unsigned long InsertListTail;// Offset=0x8 Size=0x4
    unsigned long InsertListCount;// Offset=0xc Size=0x4
    struct _STOR_DEVICE_QUEUE * DeviceQueue;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _NVME_NAMESPACE_EXTENSION * Namespace;// Offset=0x18 Size=0x8
        struct _NVME_CONTROLLER * Controller;// Offset=0x18 Size=0x8
    };
    union _SLIST_HEADER * InsertLists;// Offset=0x20 Size=0x8
    struct _SLIST_ENTRY * FlushedEntriesHolder;// Offset=0x28 Size=0x8
    unsigned long CircularShadowQueueHead;// Offset=0x30 Size=0x4
    unsigned long CircularShadowQueueTail;// Offset=0x34 Size=0x4
    void ** CircularShadowQueue;// Offset=0x38 Size=0x8
    unsigned long InsertListsReferences;// Offset=0x40 Size=0x4
    unsigned long RefillShadowQueueInProgress;// Offset=0x44 Size=0x4
    unsigned char DrainGuard;// Offset=0x48 Size=0x1
    unsigned char Reserved0[55];// Offset=0x49 Size=0x37
};
