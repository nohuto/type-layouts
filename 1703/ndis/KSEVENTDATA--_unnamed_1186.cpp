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

union KSEVENTDATA::_unnamed_1186// Size=0x18 (Id=1186)
{
    struct <unnamed-type-EventHandle>// Size=0x18 (Id=14423)
    {
        void * Event;// Offset=0x0 Size=0x8
        unsigned long long Reserved[2];// Offset=0x8 Size=0x10
    };
    struct KSEVENTDATA::_unnamed_1187::<unnamed-type-EventHandle> EventHandle;// Offset=0x0 Size=0x18
    struct <unnamed-type-SemaphoreHandle>// Size=0x10 (Id=14427)
    {
        void * Semaphore;// Offset=0x0 Size=0x8
        unsigned long Reserved;// Offset=0x8 Size=0x4
        long Adjustment;// Offset=0xc Size=0x4
    };
    struct KSEVENTDATA::_unnamed_1188::<unnamed-type-SemaphoreHandle> SemaphoreHandle;// Offset=0x0 Size=0x10
    struct <unnamed-type-EventObject>// Size=0x18 (Id=14432)
    {
        void * Event;// Offset=0x0 Size=0x8
        long Increment;// Offset=0x8 Size=0x4
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1189::<unnamed-type-EventObject> EventObject;// Offset=0x0 Size=0x18
    struct <unnamed-type-SemaphoreObject>// Size=0x10 (Id=14437)
    {
        void * Semaphore;// Offset=0x0 Size=0x8
        long Increment;// Offset=0x8 Size=0x4
        long Adjustment;// Offset=0xc Size=0x4
    };
    struct KSEVENTDATA::_unnamed_1190::<unnamed-type-SemaphoreObject> SemaphoreObject;// Offset=0x0 Size=0x10
    struct <unnamed-type-Dpc>// Size=0x18 (Id=14442)
    {
        struct _KDPC * Dpc;// Offset=0x0 Size=0x8
        unsigned long ReferenceCount;// Offset=0x8 Size=0x4
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1191::<unnamed-type-Dpc> Dpc;// Offset=0x0 Size=0x18
    struct <unnamed-type-WorkItem>// Size=0x18 (Id=14447)
    {
        struct _WORK_QUEUE_ITEM * WorkQueueItem;// Offset=0x0 Size=0x8
        enum _WORK_QUEUE_TYPE WorkQueueType;// Offset=0x8 Size=0x4
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1193::<unnamed-type-WorkItem> WorkItem;// Offset=0x0 Size=0x18
    struct <unnamed-type-KsWorkItem>// Size=0x18 (Id=14453)
    {
        struct _WORK_QUEUE_ITEM * WorkQueueItem;// Offset=0x0 Size=0x8
        void * KsWorkerObject;// Offset=0x8 Size=0x8
        unsigned long long Reserved;// Offset=0x10 Size=0x8
    };
    struct KSEVENTDATA::_unnamed_1194::<unnamed-type-KsWorkItem> KsWorkItem;// Offset=0x0 Size=0x18
    struct <unnamed-type-Alignment>// Size=0x18 (Id=14458)
    {
        void * Unused;// Offset=0x0 Size=0x8
        long long Alignment[2];// Offset=0x8 Size=0x10
    };
    struct KSEVENTDATA::_unnamed_1195::<unnamed-type-Alignment> Alignment;// Offset=0x0 Size=0x18
};
