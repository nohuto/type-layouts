struct _PERFINFO_CC_WORKITEM_ENQUEUE// Size=0x18 (Id=3137)
{
    unsigned long long WorkItemKey;// Offset=0x0 Size=0x8
    unsigned long long FileObjectKey;// Offset=0x8 Size=0x8
    unsigned char QueueType;// Offset=0x10 Size=0x1
    unsigned char WorkItemType;// Offset=0x11 Size=0x1
    unsigned char Requeue;// Offset=0x12 Size=0x1
    unsigned char Reserved;// Offset=0x13 Size=0x1
};
