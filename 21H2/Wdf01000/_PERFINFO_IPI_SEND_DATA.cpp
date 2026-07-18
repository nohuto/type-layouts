struct _PERFINFO_IPI_SEND_DATA// Size=0x1c (Id=2781)
{
    unsigned long long InitialTime;// Offset=0x0 Size=0x8
    void * WorkerRoutine;// Offset=0x8 Size=0x8
    unsigned long RequestType;// Offset=0x10 Size=0x4
    unsigned long IpiType;// Offset=0x14 Size=0x4
    unsigned long TargetCount;// Offset=0x18 Size=0x4
};
