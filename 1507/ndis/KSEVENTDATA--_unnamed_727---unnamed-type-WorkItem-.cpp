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

struct KSEVENTDATA::_unnamed_727::<unnamed-type-WorkItem>// Size=0x18 (Id=727)
{
    struct _WORK_QUEUE_ITEM * WorkQueueItem;// Offset=0x0 Size=0x8
    enum _WORK_QUEUE_TYPE WorkQueueType;// Offset=0x8 Size=0x4
    unsigned long long Reserved;// Offset=0x10 Size=0x8
};
