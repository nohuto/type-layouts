struct _PERFINFO_DPC_ENQUEUE_INFORMATION// Size=0x18 (Id=4240)
{
    unsigned long long Key;// Offset=0x0 Size=0x8
    long DpcQueueDepth;// Offset=0x8 Size=0x4
    unsigned long DpcCount;// Offset=0xc Size=0x4
    unsigned long TargetProcessorIndex;// Offset=0x10 Size=0x4
    unsigned char Importance;// Offset=0x14 Size=0x1
    unsigned char Reserved[3];// Offset=0x15 Size=0x3
};
