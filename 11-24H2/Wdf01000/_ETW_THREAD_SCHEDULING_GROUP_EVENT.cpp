struct _ETW_THREAD_SCHEDULING_GROUP_EVENT// Size=0x18 (Id=3059)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long OldSchedulingGroup;// Offset=0x8 Size=0x8
    unsigned long long NewSchedulingGroup;// Offset=0x10 Size=0x8
};
