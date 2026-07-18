enum _WORK_QUEUE_TYPE
{
    CriticalWorkQueue=0,
    DelayedWorkQueue=1,
    HyperCriticalWorkQueue=2,
    NormalWorkQueue=3,
    BackgroundWorkQueue=4,
    RealTimeWorkQueue=5,
    SuperCriticalWorkQueue=6,
    MaximumWorkQueue=7,
    CustomPriorityWorkQueue=32
};

union KSEVENTDATA::_unnamed_1378// Size=0x18 (Id=1378)
{
    struct <unnamed-type-EventHandle>// Size=0x18 (Id=15736)
    {
        void * Event;// Offset=0x0 Size=0x8
        unsigned long long Reserved[2];// Offset=0x8 Size=0x10
    };
    struct KSEVENTDATA::_unnamed_1379::<unnamed-type-EventHandle> EventHandle;// Offset=0x0 Size=0x18
    struct <unnamed-type-SemaphoreHandle>// Size=0x10 (Id=15740)
    {
        void * Semaphore;// Offset=0x0 Size=0x8
        unsigned long Reserved;// Offset=0x8 Size=0x4
        long Adjustment;// Offset=0xc Size=0x4
    };
    struct KSEVENTDATA::_unnamed_1380::<unnamed-type-SemaphoreHandle> SemaphoreHandle;// Offset=0x0 Size=0x10
    struct <unnamed-type-EventObject>// Size=0x18 (Id=15745)
    {
        void * Event;// Offset=0x0 Size=0x8
        long Increment;// Offset=0x8 Size=0x4
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1381::<unnamed-type-EventObject> EventObject;// Offset=0x0 Size=0x18
    struct <unnamed-type-SemaphoreObject>// Size=0x10 (Id=15750)
    {
        void * Semaphore;// Offset=0x0 Size=0x8
        long Increment;// Offset=0x8 Size=0x4
        long Adjustment;// Offset=0xc Size=0x4
    };
    struct KSEVENTDATA::_unnamed_1382::<unnamed-type-SemaphoreObject> SemaphoreObject;// Offset=0x0 Size=0x10
    struct <unnamed-type-Dpc>// Size=0x18 (Id=15755)
    {
        struct _KDPC * Dpc;// Offset=0x0 Size=0x8
        unsigned long ReferenceCount;// Offset=0x8 Size=0x4
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1383::<unnamed-type-Dpc> Dpc;// Offset=0x0 Size=0x18
    struct <unnamed-type-WorkItem>// Size=0x18 (Id=15760)
    {
        struct _WORK_QUEUE_ITEM * WorkQueueItem;// Offset=0x0 Size=0x8
        enum _WORK_QUEUE_TYPE WorkQueueType;// Offset=0x8 Size=0x4
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1384::<unnamed-type-WorkItem> WorkItem;// Offset=0x0 Size=0x18
    struct <unnamed-type-KsWorkItem>// Size=0x18 (Id=15766)
    {
        struct _WORK_QUEUE_ITEM * WorkQueueItem;// Offset=0x0 Size=0x8
        void * KsWorkerObject;// Offset=0x8 Size=0x8
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1385::<unnamed-type-KsWorkItem> KsWorkItem;// Offset=0x0 Size=0x18
    struct <unnamed-type-Alignment>// Size=0x18 (Id=15771)
    {
        void * Unused;// Offset=0x0 Size=0x8
        long long Alignment[2];// Offset=0x8 Size=0x10
    };
    struct KSEVENTDATA::_unnamed_1386::<unnamed-type-Alignment> Alignment;// Offset=0x0 Size=0x18
};
